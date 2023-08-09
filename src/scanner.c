#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                  \
    void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));           \
    assert(tmp != NULL);                                                       \
    (vec).data = tmp;                                                          \
    (vec).cap = (_cap);

#define VEC_GROW(vec, _cap)                                                    \
    if ((vec).cap < (_cap)) {                                                  \
        VEC_RESIZE((vec), (_cap));                                             \
    }

#define VEC_PUSH(vec, el)                                                      \
    if ((vec).cap == (vec).len) {                                              \
        VEC_RESIZE((vec), MAX(16, (vec).len * 2));                             \
    }                                                                          \
    (vec).data[(vec).len++] = (el);

#define VEC_POP(vec) (vec).len--;

#define VEC_NEW                                                                \
    { .len = 0, .cap = 0, .data = NULL }

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                          \
    {                                                                          \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
    }

#define VEC_CLEAR(vec) (vec).len = 0;

enum TokenType {
    NEWLINE,
    INDENT,
    DEDENT,
    STRING_START,
    STRING_CONTENT,
    STRING_END,
    COMMENT,
    CLOSE_PAREN,
};

typedef enum {
    SingleQuote = 1 << 0,
    DoubleQuote = 1 << 1,
    BackQuote = 1 << 2,
    Raw = 1 << 3,
    Format = 1 << 4,
    Bytes = 1 << 5,
} Flags;

typedef struct {
    char flags;
} Delimiter;

static inline Delimiter new_delimiter() { return (Delimiter){0}; }

static inline int32_t end_character(Delimiter *delimiter) {
    if (delimiter->flags & SingleQuote) {
        return '\'';
    }
    if (delimiter->flags & DoubleQuote) {
        return '"';
    }
    if (delimiter->flags & BackQuote) {
        return '`';
    }
    return 0;
}

static inline void set_end_character(Delimiter *delimiter, int32_t character) {
    switch (character) {
        case '\'':
            delimiter->flags |= SingleQuote;
            break;
        case '"':
            delimiter->flags |= DoubleQuote;
            break;
        case '`':
            delimiter->flags |= BackQuote;
            break;
        default:
            assert(false);
    }
}

typedef struct {
    uint32_t len;
    uint32_t cap;
    uint16_t *data;
} indent_vec;

static indent_vec indent_vec_new() {
    indent_vec vec = VEC_NEW;
    vec.data = calloc(1, sizeof(uint16_t));
    vec.cap = 1;
    return vec;
}

typedef struct {
    uint32_t len;
    uint32_t cap;
    Delimiter *data;
} delimiter_vec;

static delimiter_vec delimiter_vec_new() {
    delimiter_vec vec = VEC_NEW;
    vec.data = calloc(1, sizeof(Delimiter));
    vec.cap = 1;
    return vec;
}

typedef struct {
    indent_vec indents;
    delimiter_vec delimiters;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

bool tree_sitter_gupta_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    // we are apparently in error-recovery when both
    // STRING_CONTENT and INDENT are valid tokens at this point
    bool error_recovery_mode =
        valid_symbols[STRING_CONTENT] && valid_symbols[INDENT];

    bool within_brackets = valid_symbols[CLOSE_PAREN];

    if (valid_symbols[STRING_CONTENT] && scanner->delimiters.len > 0 &&
        !error_recovery_mode) {
        Delimiter delimiter = VEC_BACK(scanner->delimiters);
        int32_t end_char = end_character(&delimiter);
        bool has_content = false;

        while (lexer->lookahead) {
            if (lexer->lookahead == '\\') {
                lexer->mark_end(lexer);
                lexer->result_symbol = STRING_CONTENT;
                return has_content;
            } else if (lexer->lookahead == end_char) {
                if (has_content) {
                    lexer->result_symbol = STRING_CONTENT;
                } else {
                    lexer->advance(lexer, false);
                    VEC_POP(scanner->delimiters);
                    lexer->result_symbol = STRING_END;
                }
                lexer->mark_end(lexer);
                return true;

            } else if (lexer->lookahead == '\n' && has_content) {
                return false;
            }
            advance(lexer);
            has_content = true;
        }
    }

    // ???
    lexer->mark_end(lexer);

    bool found_end_of_line = false;
    uint32_t indent_length = 0;

    for (;;) {
        if (lexer->lookahead == '\n') {
            found_end_of_line = true;
            indent_length = 0;
            skip(lexer);
        } else if (lexer->lookahead == ' ') {
            indent_length++;
            skip(lexer);
        } else if (lexer->lookahead == '\r' || lexer->lookahead == '\f') {
            indent_length = 0;
            skip(lexer);
        } else if (lexer->lookahead == '\t') {
            indent_length += 8;
            skip(lexer);
        } else if (lexer->lookahead == '\\') {
            skip(lexer);
            if (lexer->lookahead == '\r') {
                skip(lexer);
            }
            if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
                skip(lexer);
            } else {
                return false;
            }
        } else if (lexer->eof(lexer)) {
            indent_length = 0;
            found_end_of_line = true;
            break;
        } else {
            break;
        }
    }

    if (found_end_of_line) {
        if (scanner->indents.len > 0) {
            uint16_t current_indent_length = VEC_BACK(scanner->indents);

            // current indent is more than the last one AND ident
            // is a currently valid token -> emit INDENT
            if (valid_symbols[INDENT] &&
                indent_length > current_indent_length) {
                VEC_PUSH(scanner->indents, indent_length);
                lexer->result_symbol = INDENT;
                return true;
            }

            bool next_tok_is_string_start = lexer->lookahead == '\"' ||
                                            lexer->lookahead == '\'';

            if ((valid_symbols[DEDENT] ||
                 (!valid_symbols[NEWLINE] &&
                  !(valid_symbols[STRING_START] && next_tok_is_string_start) &&
                  !within_brackets)) &&
                indent_length < current_indent_length) {
                VEC_POP(scanner->indents);
                lexer->result_symbol = DEDENT;
                return true;
            }
        }

        if (valid_symbols[NEWLINE] && !error_recovery_mode) {
            lexer->result_symbol = NEWLINE;
            return true;
        }
    }

    if (valid_symbols[STRING_START]) {
        Delimiter delimiter = new_delimiter();

        if (lexer->lookahead == '\'') {
            set_end_character(&delimiter, '\'');
            advance(lexer);
            lexer->mark_end(lexer);
        } else if (lexer->lookahead == '"') {
            set_end_character(&delimiter, '"');
            advance(lexer);
            lexer->mark_end(lexer);
        }

        if (end_character(&delimiter)) {
            VEC_PUSH(scanner->delimiters, delimiter);
            lexer->result_symbol = STRING_START;

            return true;
        }
    }

    return false;
}

unsigned tree_sitter_gupta_external_scanner_serialize(void *payload,
                                                       char *buffer) {
    Scanner *scanner = (Scanner *)payload;

    size_t size = 0;

    size_t delimiter_count = scanner->delimiters.len;
    if (delimiter_count > UINT8_MAX) {
        delimiter_count = UINT8_MAX;
    }
    buffer[size++] = (char)delimiter_count;

    if (delimiter_count > 0) {
        memcpy(&buffer[size], scanner->delimiters.data, delimiter_count);
    }
    size += delimiter_count;

    int iter = 1;
    for (; iter < scanner->indents.len &&
           size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
         ++iter) {
        // yeah, it narrows the value but it's fine?
        buffer[size++] = (char)scanner->indents.data[iter];
    }

    return size;
}

void tree_sitter_gupta_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
    Scanner *scanner = (Scanner *)payload;

    VEC_CLEAR(scanner->delimiters);
    VEC_CLEAR(scanner->indents);
    VEC_PUSH(scanner->indents, 0);

    if (length > 0) {
        size_t size = 0;

        size_t delimiter_count = (uint8_t)buffer[size++];
        if (delimiter_count > 0) {
            VEC_GROW(scanner->delimiters, delimiter_count);
            scanner->delimiters.len = delimiter_count;
            memcpy(scanner->delimiters.data, &buffer[size], delimiter_count);
            size += delimiter_count;
        }

        for (; size < length; size++) {
            VEC_PUSH(scanner->indents, (unsigned char)buffer[size]);
        }
    }
}

void *tree_sitter_gupta_external_scanner_create() {
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
    static_assert(sizeof(Delimiter) == sizeof(char), "");
#else
    assert(sizeof(Delimiter) == sizeof(char));
#endif
    Scanner *scanner = calloc(1, sizeof(Scanner));
    scanner->indents = indent_vec_new();
    scanner->delimiters = delimiter_vec_new();
    tree_sitter_gupta_external_scanner_deserialize(scanner, NULL, 0);
    return scanner;
}

void tree_sitter_gupta_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    VEC_FREE(scanner->indents);
    VEC_FREE(scanner->delimiters);
    free(scanner);
}
