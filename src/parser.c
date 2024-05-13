#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 380
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 3
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 29

enum {
  sym_identifier = 1,
  anon_sym_ = 2,
  anon_sym_SLASH = 3,
  anon_sym_COLON = 4,
  anon_sym_QMARK = 5,
  aux_sym_section_value_token1 = 6,
  anon_sym_Description = 7,
  aux_sym__description_block_token1 = 8,
  anon_sym_Actions = 9,
  anon_sym_MenuActions = 10,
  anon_sym_ApplicationActions = 11,
  anon_sym_MessageActions = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_GT = 24,
  aux_sym_binary_operator_token1 = 25,
  aux_sym_binary_operator_token2 = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_PERCENT = 30,
  anon_sym_PIPE = 31,
  anon_sym_AMP = 32,
  anon_sym_CARET = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  aux_sym_not_operator_token1 = 36,
  aux_sym_select_case_statement_token1 = 37,
  aux_sym_select_case_statement_token2 = 38,
  aux_sym_default_case_token1 = 39,
  aux_sym_if_statement_token1 = 40,
  aux_sym_when_statement_token1 = 41,
  aux_sym_else_if_statement_token1 = 42,
  aux_sym_on_statement_token1 = 43,
  aux_sym_loop_token1 = 44,
  aux_sym_while_token1 = 45,
  aux_sym_explicit_call_token1 = 46,
  aux_sym_return_statement_token1 = 47,
  anon_sym_DOT = 48,
  aux_sym_assignment_token1 = 49,
  sym_type_name = 50,
  sym_true = 51,
  sym_false = 52,
  aux_sym_break_token1 = 53,
  sym_escape_sequence = 54,
  sym__not_escape_sequence = 55,
  anon_sym_TILDE = 56,
  sym_integer = 57,
  sym_float = 58,
  sym_comment = 59,
  anon_sym_DOTdata = 60,
  anon_sym_DOTenddata = 61,
  sym__newline = 62,
  sym__indent = 63,
  sym__dedent = 64,
  sym_string_start = 65,
  sym__string_content = 66,
  sym_string_end = 67,
  sym_sections = 68,
  sym_section = 69,
  sym__section_content = 70,
  sym_declaration_name = 71,
  sym_section_declaration = 72,
  sym_section_toggle = 73,
  sym_toggle_value = 74,
  sym_section_value = 75,
  sym_description_section = 76,
  sym_description_text = 77,
  aux_sym__description_block = 78,
  sym_action_section = 79,
  sym_paren_expression = 80,
  sym__expression = 81,
  sym__primary_expression = 82,
  sym__block = 83,
  sym__primary_expressions = 84,
  sym_array_expression = 85,
  sym_call = 86,
  sym_function = 87,
  sym_argument_list = 88,
  sym_comparison_operator = 89,
  sym_binary_operator = 90,
  sym_not_operator = 91,
  sym__simple_statement = 92,
  sym_select_case_statement = 93,
  sym_select_case = 94,
  sym_default_case = 95,
  sym_if_statement = 96,
  sym_when_statement = 97,
  sym_else_if_statement = 98,
  sym_on_statement = 99,
  sym_loop = 100,
  sym_while = 101,
  sym_else_statement = 102,
  sym_explicit_call = 103,
  sym_return_statement = 104,
  sym_ref = 105,
  sym_refs = 106,
  sym_assignment = 107,
  sym_break = 108,
  sym_string = 109,
  sym_string_content = 110,
  sym_unary_operator = 111,
  sym_multiline_comment = 112,
  sym_data_block = 113,
  aux_sym_sections_repeat1 = 114,
  aux_sym_section_repeat1 = 115,
  aux_sym_section_repeat2 = 116,
  aux_sym_declaration_name_repeat1 = 117,
  aux_sym_section_declaration_repeat1 = 118,
  aux_sym_toggle_value_repeat1 = 119,
  aux_sym__block_repeat1 = 120,
  aux_sym__primary_expressions_repeat1 = 121,
  aux_sym_argument_list_repeat1 = 122,
  aux_sym_select_case_statement_repeat1 = 123,
  aux_sym_refs_repeat1 = 124,
  aux_sym_string_repeat1 = 125,
  aux_sym_string_content_repeat1 = 126,
  aux_sym_multiline_comment_repeat1 = 127,
  anon_alias_sym_declaration = 128,
  anon_alias_sym_ident = 129,
  anon_alias_sym_value = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_] = " ",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [aux_sym_section_value_token1] = "section_value_token1",
  [anon_sym_Description] = "Description",
  [aux_sym__description_block_token1] = "_description_block_token1",
  [anon_sym_Actions] = "Actions",
  [anon_sym_MenuActions] = "Menu Actions",
  [anon_sym_ApplicationActions] = "Application Actions",
  [anon_sym_MessageActions] = "Message Actions",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [aux_sym_binary_operator_token1] = "and",
  [aux_sym_binary_operator_token2] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_not_operator_token1] = "not",
  [aux_sym_select_case_statement_token1] = "Select",
  [aux_sym_select_case_statement_token2] = "Case",
  [aux_sym_default_case_token1] = "Default",
  [aux_sym_if_statement_token1] = "If",
  [aux_sym_when_statement_token1] = "When",
  [aux_sym_else_if_statement_token1] = "Else",
  [aux_sym_on_statement_token1] = "On",
  [aux_sym_loop_token1] = "Loop",
  [aux_sym_while_token1] = "While",
  [aux_sym_explicit_call_token1] = "Call",
  [aux_sym_return_statement_token1] = "Return",
  [anon_sym_DOT] = ".",
  [aux_sym_assignment_token1] = "Set",
  [sym_type_name] = "type_name",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym_break_token1] = "Break",
  [sym_escape_sequence] = "escape_sequence",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [anon_sym_TILDE] = "~",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_comment] = "comment",
  [anon_sym_DOTdata] = ".data",
  [anon_sym_DOTenddata] = ".enddata",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_string_start] = "string_start",
  [sym__string_content] = "_string_content",
  [sym_string_end] = "string_end",
  [sym_sections] = "sections",
  [sym_section] = "section",
  [sym__section_content] = "_section_content",
  [sym_declaration_name] = "declaration_name",
  [sym_section_declaration] = "section_declaration",
  [sym_section_toggle] = "section_toggle",
  [sym_toggle_value] = "toggle_value",
  [sym_section_value] = "section_value",
  [sym_description_section] = "description_section",
  [sym_description_text] = "description_text",
  [aux_sym__description_block] = "_description_block",
  [sym_action_section] = "action_section",
  [sym_paren_expression] = "paren_expression",
  [sym__expression] = "_expression",
  [sym__primary_expression] = "_primary_expression",
  [sym__block] = "_block",
  [sym__primary_expressions] = "_primary_expressions",
  [sym_array_expression] = "ref",
  [sym_call] = "call",
  [sym_function] = "function",
  [sym_argument_list] = "argument_list",
  [sym_comparison_operator] = "comparison_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_not_operator] = "not_operator",
  [sym__simple_statement] = "_simple_statement",
  [sym_select_case_statement] = "select_case_statement",
  [sym_select_case] = "select_case",
  [sym_default_case] = "default_case",
  [sym_if_statement] = "if_statement",
  [sym_when_statement] = "when_statement",
  [sym_else_if_statement] = "else_if_statement",
  [sym_on_statement] = "on_statement",
  [sym_loop] = "loop",
  [sym_while] = "while",
  [sym_else_statement] = "else_statement",
  [sym_explicit_call] = "explicit_call",
  [sym_return_statement] = "return_statement",
  [sym_ref] = "ref",
  [sym_refs] = "refs",
  [sym_assignment] = "assignment",
  [sym_break] = "break",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_unary_operator] = "unary_operator",
  [sym_multiline_comment] = "multiline_comment",
  [sym_data_block] = "data_block",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_section_repeat2] = "section_repeat2",
  [aux_sym_declaration_name_repeat1] = "declaration_name_repeat1",
  [aux_sym_section_declaration_repeat1] = "section_declaration_repeat1",
  [aux_sym_toggle_value_repeat1] = "toggle_value_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym__primary_expressions_repeat1] = "_primary_expressions_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_select_case_statement_repeat1] = "select_case_statement_repeat1",
  [aux_sym_refs_repeat1] = "refs_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_multiline_comment_repeat1] = "multiline_comment_repeat1",
  [anon_alias_sym_declaration] = "declaration",
  [anon_alias_sym_ident] = "ident",
  [anon_alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_] = anon_sym_,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_section_value_token1] = aux_sym_section_value_token1,
  [anon_sym_Description] = anon_sym_Description,
  [aux_sym__description_block_token1] = aux_sym__description_block_token1,
  [anon_sym_Actions] = anon_sym_Actions,
  [anon_sym_MenuActions] = anon_sym_MenuActions,
  [anon_sym_ApplicationActions] = anon_sym_ApplicationActions,
  [anon_sym_MessageActions] = anon_sym_MessageActions,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_binary_operator_token1] = aux_sym_binary_operator_token1,
  [aux_sym_binary_operator_token2] = aux_sym_binary_operator_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_not_operator_token1] = aux_sym_not_operator_token1,
  [aux_sym_select_case_statement_token1] = aux_sym_select_case_statement_token1,
  [aux_sym_select_case_statement_token2] = aux_sym_select_case_statement_token2,
  [aux_sym_default_case_token1] = aux_sym_default_case_token1,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_when_statement_token1] = aux_sym_when_statement_token1,
  [aux_sym_else_if_statement_token1] = aux_sym_else_if_statement_token1,
  [aux_sym_on_statement_token1] = aux_sym_on_statement_token1,
  [aux_sym_loop_token1] = aux_sym_loop_token1,
  [aux_sym_while_token1] = aux_sym_while_token1,
  [aux_sym_explicit_call_token1] = aux_sym_explicit_call_token1,
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_assignment_token1] = aux_sym_assignment_token1,
  [sym_type_name] = sym_type_name,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym_break_token1] = aux_sym_break_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_comment] = sym_comment,
  [anon_sym_DOTdata] = anon_sym_DOTdata,
  [anon_sym_DOTenddata] = anon_sym_DOTenddata,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_string_start] = sym_string_start,
  [sym__string_content] = sym__string_content,
  [sym_string_end] = sym_string_end,
  [sym_sections] = sym_sections,
  [sym_section] = sym_section,
  [sym__section_content] = sym__section_content,
  [sym_declaration_name] = sym_declaration_name,
  [sym_section_declaration] = sym_section_declaration,
  [sym_section_toggle] = sym_section_toggle,
  [sym_toggle_value] = sym_toggle_value,
  [sym_section_value] = sym_section_value,
  [sym_description_section] = sym_description_section,
  [sym_description_text] = sym_description_text,
  [aux_sym__description_block] = aux_sym__description_block,
  [sym_action_section] = sym_action_section,
  [sym_paren_expression] = sym_paren_expression,
  [sym__expression] = sym__expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym__block] = sym__block,
  [sym__primary_expressions] = sym__primary_expressions,
  [sym_array_expression] = sym_array_expression,
  [sym_call] = sym_call,
  [sym_function] = sym_function,
  [sym_argument_list] = sym_argument_list,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_not_operator] = sym_not_operator,
  [sym__simple_statement] = sym__simple_statement,
  [sym_select_case_statement] = sym_select_case_statement,
  [sym_select_case] = sym_select_case,
  [sym_default_case] = sym_default_case,
  [sym_if_statement] = sym_if_statement,
  [sym_when_statement] = sym_when_statement,
  [sym_else_if_statement] = sym_else_if_statement,
  [sym_on_statement] = sym_on_statement,
  [sym_loop] = sym_loop,
  [sym_while] = sym_while,
  [sym_else_statement] = sym_else_statement,
  [sym_explicit_call] = sym_explicit_call,
  [sym_return_statement] = sym_return_statement,
  [sym_ref] = sym_ref,
  [sym_refs] = sym_refs,
  [sym_assignment] = sym_assignment,
  [sym_break] = sym_break,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_unary_operator] = sym_unary_operator,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_data_block] = sym_data_block,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_section_repeat2] = aux_sym_section_repeat2,
  [aux_sym_declaration_name_repeat1] = aux_sym_declaration_name_repeat1,
  [aux_sym_section_declaration_repeat1] = aux_sym_section_declaration_repeat1,
  [aux_sym_toggle_value_repeat1] = aux_sym_toggle_value_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym__primary_expressions_repeat1] = aux_sym__primary_expressions_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_select_case_statement_repeat1] = aux_sym_select_case_statement_repeat1,
  [aux_sym_refs_repeat1] = aux_sym_refs_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_multiline_comment_repeat1] = aux_sym_multiline_comment_repeat1,
  [anon_alias_sym_declaration] = anon_alias_sym_declaration,
  [anon_alias_sym_ident] = anon_alias_sym_ident,
  [anon_alias_sym_value] = anon_alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Description] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__description_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Actions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MenuActions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ApplicationActions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MessageActions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_operator_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_not_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_case_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_case_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_case_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_when_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_if_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_on_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_while_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_explicit_call_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_return_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_assignment_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_break_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTenddata] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_string_start] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_string_end] = {
    .visible = true,
    .named = true,
  },
  [sym_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_content] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_section_toggle] = {
    .visible = true,
    .named = true,
  },
  [sym_toggle_value] = {
    .visible = true,
    .named = true,
  },
  [sym_section_value] = {
    .visible = true,
    .named = true,
  },
  [sym_description_section] = {
    .visible = true,
    .named = true,
  },
  [sym_description_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__description_block] = {
    .visible = false,
    .named = false,
  },
  [sym_action_section] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = false,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_case] = {
    .visible = true,
    .named = true,
  },
  [sym_default_case] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_when_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_on_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_explicit_call] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_refs] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_data_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_toggle_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__primary_expressions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_refs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_declaration] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ident] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_value] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_arguments = 2,
  field_case = 3,
  field_commentblock = 4,
  field_condition = 5,
  field_data = 6,
  field_expression = 7,
  field_function = 8,
  field_index = 9,
  field_left = 10,
  field_name = 11,
  field_operator = 12,
  field_operators = 13,
  field_right = 14,
  field_selector = 15,
  field_text = 16,
  field_trigger = 17,
  field_type = 18,
  field_value = 19,
  field_variable = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_case] = "case",
  [field_commentblock] = "commentblock",
  [field_condition] = "condition",
  [field_data] = "data",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_index] = "index",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_operators] = "operators",
  [field_right] = "right",
  [field_selector] = "selector",
  [field_text] = "text",
  [field_trigger] = "trigger",
  [field_type] = "type",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 2},
  [8] = {.index = 4, .length = 2},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 1},
  [12] = {.index = 8, .length = 1},
  [13] = {.index = 9, .length = 2},
  [15] = {.index = 11, .length = 2},
  [16] = {.index = 13, .length = 1},
  [17] = {.index = 14, .length = 2},
  [19] = {.index = 16, .length = 2},
  [20] = {.index = 18, .length = 2},
  [22] = {.index = 20, .length = 3},
  [23] = {.index = 23, .length = 1},
  [24] = {.index = 24, .length = 2},
  [25] = {.index = 26, .length = 2},
  [26] = {.index = 28, .length = 2},
  [27] = {.index = 30, .length = 1},
  [28] = {.index = 31, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
  [1] =
    {field_text, 2},
  [2] =
    {field_name, 2},
    {field_type, 0},
  [4] =
    {field_type, 0},
    {field_value, 2},
  [6] =
    {field_expression, 1},
  [7] =
    {field_commentblock, 2},
  [8] =
    {field_data, 2},
  [9] =
    {field_name, 3},
    {field_type, 0},
  [11] =
    {field_argument, 1},
    {field_operator, 0},
  [13] =
    {field_argument, 1},
  [14] =
    {field_condition, 1},
    {field_expression, 2},
  [16] =
    {field_arguments, 1},
    {field_function, 0},
  [18] =
    {field_expression, 2},
    {field_trigger, 1},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [23] =
    {field_operators, 1},
  [24] =
    {field_condition, 2},
    {field_expression, 3},
  [26] =
    {field_left, 1},
    {field_right, 3},
  [28] =
    {field_index, 2},
    {field_variable, 0},
  [30] =
    {field_selector, 2},
  [31] =
    {field_case, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_declaration,
  },
  [3] = {
    [0] = anon_alias_sym_declaration,
    [1] = anon_alias_sym_declaration,
  },
  [5] = {
    [1] = anon_alias_sym_ident,
  },
  [7] = {
    [0] = anon_alias_sym_value,
  },
  [9] = {
    [0] = sym_array_expression,
  },
  [12] = {
    [1] = anon_alias_sym_ident,
  },
  [14] = {
    [0] = anon_alias_sym_value,
    [1] = anon_alias_sym_value,
  },
  [18] = {
    [0] = sym_array_expression,
    [1] = sym_array_expression,
  },
  [21] = {
    [1] = anon_alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_ref, 2,
    sym_ref,
    sym_array_expression,
  aux_sym_declaration_name_repeat1, 2,
    aux_sym_declaration_name_repeat1,
    anon_alias_sym_declaration,
  aux_sym_toggle_value_repeat1, 2,
    aux_sym_toggle_value_repeat1,
    anon_alias_sym_value,
  aux_sym_refs_repeat1, 2,
    aux_sym_refs_repeat1,
    sym_array_expression,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 17,
  [43] = 43,
  [44] = 41,
  [45] = 43,
  [46] = 43,
  [47] = 43,
  [48] = 41,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 52,
  [62] = 62,
  [63] = 63,
  [64] = 58,
  [65] = 65,
  [66] = 52,
  [67] = 56,
  [68] = 56,
  [69] = 56,
  [70] = 70,
  [71] = 56,
  [72] = 72,
  [73] = 73,
  [74] = 56,
  [75] = 54,
  [76] = 76,
  [77] = 56,
  [78] = 54,
  [79] = 60,
  [80] = 60,
  [81] = 60,
  [82] = 82,
  [83] = 60,
  [84] = 56,
  [85] = 54,
  [86] = 86,
  [87] = 86,
  [88] = 82,
  [89] = 76,
  [90] = 73,
  [91] = 49,
  [92] = 72,
  [93] = 70,
  [94] = 63,
  [95] = 62,
  [96] = 58,
  [97] = 86,
  [98] = 82,
  [99] = 76,
  [100] = 73,
  [101] = 49,
  [102] = 72,
  [103] = 70,
  [104] = 63,
  [105] = 60,
  [106] = 62,
  [107] = 60,
  [108] = 108,
  [109] = 109,
  [110] = 86,
  [111] = 82,
  [112] = 76,
  [113] = 73,
  [114] = 60,
  [115] = 62,
  [116] = 116,
  [117] = 63,
  [118] = 70,
  [119] = 72,
  [120] = 58,
  [121] = 121,
  [122] = 122,
  [123] = 7,
  [124] = 4,
  [125] = 3,
  [126] = 6,
  [127] = 5,
  [128] = 10,
  [129] = 4,
  [130] = 8,
  [131] = 3,
  [132] = 4,
  [133] = 7,
  [134] = 9,
  [135] = 11,
  [136] = 5,
  [137] = 5,
  [138] = 6,
  [139] = 3,
  [140] = 7,
  [141] = 6,
  [142] = 12,
  [143] = 11,
  [144] = 8,
  [145] = 14,
  [146] = 9,
  [147] = 11,
  [148] = 13,
  [149] = 10,
  [150] = 14,
  [151] = 19,
  [152] = 8,
  [153] = 15,
  [154] = 9,
  [155] = 12,
  [156] = 17,
  [157] = 10,
  [158] = 12,
  [159] = 14,
  [160] = 15,
  [161] = 17,
  [162] = 12,
  [163] = 35,
  [164] = 13,
  [165] = 36,
  [166] = 14,
  [167] = 17,
  [168] = 33,
  [169] = 21,
  [170] = 31,
  [171] = 34,
  [172] = 25,
  [173] = 32,
  [174] = 20,
  [175] = 30,
  [176] = 29,
  [177] = 28,
  [178] = 27,
  [179] = 12,
  [180] = 180,
  [181] = 180,
  [182] = 26,
  [183] = 180,
  [184] = 19,
  [185] = 13,
  [186] = 24,
  [187] = 23,
  [188] = 22,
  [189] = 14,
  [190] = 180,
  [191] = 15,
  [192] = 19,
  [193] = 27,
  [194] = 32,
  [195] = 25,
  [196] = 31,
  [197] = 36,
  [198] = 28,
  [199] = 22,
  [200] = 33,
  [201] = 27,
  [202] = 26,
  [203] = 24,
  [204] = 31,
  [205] = 33,
  [206] = 22,
  [207] = 23,
  [208] = 21,
  [209] = 24,
  [210] = 35,
  [211] = 12,
  [212] = 26,
  [213] = 28,
  [214] = 29,
  [215] = 30,
  [216] = 34,
  [217] = 20,
  [218] = 29,
  [219] = 25,
  [220] = 34,
  [221] = 21,
  [222] = 36,
  [223] = 35,
  [224] = 30,
  [225] = 20,
  [226] = 14,
  [227] = 32,
  [228] = 23,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 232,
  [234] = 234,
  [235] = 234,
  [236] = 17,
  [237] = 17,
  [238] = 238,
  [239] = 238,
  [240] = 238,
  [241] = 238,
  [242] = 242,
  [243] = 243,
  [244] = 17,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 253,
  [261] = 253,
  [262] = 262,
  [263] = 253,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 267,
  [269] = 267,
  [270] = 267,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 271,
  [277] = 277,
  [278] = 275,
  [279] = 273,
  [280] = 272,
  [281] = 281,
  [282] = 274,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 277,
  [290] = 243,
  [291] = 291,
  [292] = 242,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 286,
  [297] = 287,
  [298] = 298,
  [299] = 291,
  [300] = 242,
  [301] = 243,
  [302] = 302,
  [303] = 303,
  [304] = 303,
  [305] = 302,
  [306] = 306,
  [307] = 303,
  [308] = 302,
  [309] = 309,
  [310] = 303,
  [311] = 302,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 322,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 333,
  [335] = 335,
  [336] = 336,
  [337] = 331,
  [338] = 338,
  [339] = 331,
  [340] = 340,
  [341] = 330,
  [342] = 330,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 336,
  [349] = 335,
  [350] = 338,
  [351] = 335,
  [352] = 331,
  [353] = 353,
  [354] = 335,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 360,
  [364] = 364,
  [365] = 360,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 374,
  [378] = 378,
  [379] = 366,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      if (lookahead == '\r') SKIP(80)
      if (lookahead == '!') ADVANCE(346);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '0') ADVANCE(336);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(183);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(229);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(232);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'M') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead == 'R') ADVANCE(263);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'W') ADVANCE(271);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '^') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '~') ADVANCE(333);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('F' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(94);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(90);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(158);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(159);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(339);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 47:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 53:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 67:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 69:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(69)
      if (lookahead == '\r') SKIP(69)
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(70)
      if (lookahead == '\r') SKIP(70)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(336);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(280);
      if (lookahead == 'R') ADVANCE(263);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'W') ADVANCE(271);
      if (lookahead == '~') ADVANCE(333);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(71)
      if (lookahead == '\r') SKIP(71)
      if (lookahead == '!') ADVANCE(346);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '<') ADVANCE(183);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(40);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '^') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(72)
      if (lookahead == '\r') SKIP(72)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(336);
      if (lookahead == '~') ADVANCE(333);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(73)
      if (lookahead == '\r') SKIP(73)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(280);
      if (lookahead == 'R') ADVANCE(263);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'W') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(74)
      if (lookahead == '\r') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(329);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(339);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 79:
      if (eof) ADVANCE(82);
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(79)
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(93);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      if (lookahead == '\r') SKIP(80)
      if (lookahead == '!') ADVANCE(346);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '0') ADVANCE(336);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(183);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(229);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'D') ADVANCE(232);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'M') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead == 'R') ADVANCE(263);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'W') ADVANCE(271);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '^') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '~') ADVANCE(333);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(81)
      if (lookahead == '\r') SKIP(81)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'M') ADVANCE(303);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(329);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(93);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(94);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'p') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'p') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_MenuActions);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_MenuActions);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ApplicationActions);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ApplicationActions);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_MessageActions);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_MessageActions);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_binary_operator_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_binary_operator_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_binary_operator_token2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_binary_operator_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(179);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_select_case_statement_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_select_case_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_when_statement_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_when_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_else_if_statement_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_else_if_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_on_statement_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_on_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_loop_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_loop_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_while_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_while_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_explicit_call_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_explicit_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_assignment_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_assignment_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 's') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'g') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'p') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_break_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(331);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '_') ADVANCE(337);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == '_') ADVANCE(337);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(344);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(348);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOTenddata);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_not_operator_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_select_case_statement_token2);
      END_STATE();
    case 17:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 20:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_default_case_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 81, .external_lex_state = 2},
  [2] = {.lex_state = 70, .external_lex_state = 3},
  [3] = {.lex_state = 71, .external_lex_state = 4},
  [4] = {.lex_state = 71, .external_lex_state = 4},
  [5] = {.lex_state = 71, .external_lex_state = 4},
  [6] = {.lex_state = 71, .external_lex_state = 4},
  [7] = {.lex_state = 71, .external_lex_state = 4},
  [8] = {.lex_state = 71, .external_lex_state = 4},
  [9] = {.lex_state = 71, .external_lex_state = 4},
  [10] = {.lex_state = 71, .external_lex_state = 4},
  [11] = {.lex_state = 71, .external_lex_state = 4},
  [12] = {.lex_state = 71, .external_lex_state = 4},
  [13] = {.lex_state = 71, .external_lex_state = 4},
  [14] = {.lex_state = 71, .external_lex_state = 4},
  [15] = {.lex_state = 71, .external_lex_state = 4},
  [16] = {.lex_state = 71, .external_lex_state = 4},
  [17] = {.lex_state = 71, .external_lex_state = 4},
  [18] = {.lex_state = 71, .external_lex_state = 4},
  [19] = {.lex_state = 71, .external_lex_state = 4},
  [20] = {.lex_state = 71, .external_lex_state = 4},
  [21] = {.lex_state = 71, .external_lex_state = 4},
  [22] = {.lex_state = 71, .external_lex_state = 4},
  [23] = {.lex_state = 71, .external_lex_state = 4},
  [24] = {.lex_state = 71, .external_lex_state = 4},
  [25] = {.lex_state = 71, .external_lex_state = 4},
  [26] = {.lex_state = 71, .external_lex_state = 4},
  [27] = {.lex_state = 71, .external_lex_state = 4},
  [28] = {.lex_state = 71, .external_lex_state = 4},
  [29] = {.lex_state = 71, .external_lex_state = 4},
  [30] = {.lex_state = 71, .external_lex_state = 4},
  [31] = {.lex_state = 71, .external_lex_state = 4},
  [32] = {.lex_state = 71, .external_lex_state = 4},
  [33] = {.lex_state = 71, .external_lex_state = 4},
  [34] = {.lex_state = 71, .external_lex_state = 4},
  [35] = {.lex_state = 71, .external_lex_state = 4},
  [36] = {.lex_state = 71, .external_lex_state = 4},
  [37] = {.lex_state = 71, .external_lex_state = 4},
  [38] = {.lex_state = 71, .external_lex_state = 4},
  [39] = {.lex_state = 71, .external_lex_state = 4},
  [40] = {.lex_state = 71, .external_lex_state = 4},
  [41] = {.lex_state = 71, .external_lex_state = 2},
  [42] = {.lex_state = 71, .external_lex_state = 4},
  [43] = {.lex_state = 72, .external_lex_state = 5},
  [44] = {.lex_state = 71, .external_lex_state = 2},
  [45] = {.lex_state = 72, .external_lex_state = 5},
  [46] = {.lex_state = 72, .external_lex_state = 5},
  [47] = {.lex_state = 72, .external_lex_state = 5},
  [48] = {.lex_state = 71, .external_lex_state = 2},
  [49] = {.lex_state = 72, .external_lex_state = 6},
  [50] = {.lex_state = 72, .external_lex_state = 6},
  [51] = {.lex_state = 72, .external_lex_state = 6},
  [52] = {.lex_state = 72, .external_lex_state = 6},
  [53] = {.lex_state = 72, .external_lex_state = 6},
  [54] = {.lex_state = 72, .external_lex_state = 6},
  [55] = {.lex_state = 72, .external_lex_state = 6},
  [56] = {.lex_state = 72, .external_lex_state = 6},
  [57] = {.lex_state = 72, .external_lex_state = 6},
  [58] = {.lex_state = 72, .external_lex_state = 6},
  [59] = {.lex_state = 72, .external_lex_state = 6},
  [60] = {.lex_state = 72, .external_lex_state = 6},
  [61] = {.lex_state = 72, .external_lex_state = 6},
  [62] = {.lex_state = 72, .external_lex_state = 6},
  [63] = {.lex_state = 72, .external_lex_state = 6},
  [64] = {.lex_state = 72, .external_lex_state = 6},
  [65] = {.lex_state = 72, .external_lex_state = 6},
  [66] = {.lex_state = 72, .external_lex_state = 6},
  [67] = {.lex_state = 72, .external_lex_state = 6},
  [68] = {.lex_state = 72, .external_lex_state = 6},
  [69] = {.lex_state = 72, .external_lex_state = 6},
  [70] = {.lex_state = 72, .external_lex_state = 6},
  [71] = {.lex_state = 72, .external_lex_state = 6},
  [72] = {.lex_state = 72, .external_lex_state = 6},
  [73] = {.lex_state = 72, .external_lex_state = 6},
  [74] = {.lex_state = 72, .external_lex_state = 6},
  [75] = {.lex_state = 72, .external_lex_state = 6},
  [76] = {.lex_state = 72, .external_lex_state = 6},
  [77] = {.lex_state = 72, .external_lex_state = 6},
  [78] = {.lex_state = 72, .external_lex_state = 6},
  [79] = {.lex_state = 72, .external_lex_state = 6},
  [80] = {.lex_state = 72, .external_lex_state = 6},
  [81] = {.lex_state = 72, .external_lex_state = 6},
  [82] = {.lex_state = 72, .external_lex_state = 6},
  [83] = {.lex_state = 72, .external_lex_state = 6},
  [84] = {.lex_state = 72, .external_lex_state = 6},
  [85] = {.lex_state = 72, .external_lex_state = 6},
  [86] = {.lex_state = 72, .external_lex_state = 6},
  [87] = {.lex_state = 72, .external_lex_state = 6},
  [88] = {.lex_state = 72, .external_lex_state = 6},
  [89] = {.lex_state = 72, .external_lex_state = 6},
  [90] = {.lex_state = 72, .external_lex_state = 6},
  [91] = {.lex_state = 72, .external_lex_state = 6},
  [92] = {.lex_state = 72, .external_lex_state = 6},
  [93] = {.lex_state = 72, .external_lex_state = 6},
  [94] = {.lex_state = 72, .external_lex_state = 6},
  [95] = {.lex_state = 72, .external_lex_state = 6},
  [96] = {.lex_state = 72, .external_lex_state = 6},
  [97] = {.lex_state = 72, .external_lex_state = 6},
  [98] = {.lex_state = 72, .external_lex_state = 6},
  [99] = {.lex_state = 72, .external_lex_state = 6},
  [100] = {.lex_state = 72, .external_lex_state = 6},
  [101] = {.lex_state = 72, .external_lex_state = 6},
  [102] = {.lex_state = 72, .external_lex_state = 6},
  [103] = {.lex_state = 72, .external_lex_state = 6},
  [104] = {.lex_state = 72, .external_lex_state = 6},
  [105] = {.lex_state = 72, .external_lex_state = 6},
  [106] = {.lex_state = 72, .external_lex_state = 6},
  [107] = {.lex_state = 72, .external_lex_state = 6},
  [108] = {.lex_state = 72, .external_lex_state = 6},
  [109] = {.lex_state = 72, .external_lex_state = 6},
  [110] = {.lex_state = 72, .external_lex_state = 6},
  [111] = {.lex_state = 72, .external_lex_state = 6},
  [112] = {.lex_state = 72, .external_lex_state = 6},
  [113] = {.lex_state = 72, .external_lex_state = 6},
  [114] = {.lex_state = 72, .external_lex_state = 6},
  [115] = {.lex_state = 72, .external_lex_state = 6},
  [116] = {.lex_state = 72, .external_lex_state = 6},
  [117] = {.lex_state = 72, .external_lex_state = 6},
  [118] = {.lex_state = 72, .external_lex_state = 6},
  [119] = {.lex_state = 72, .external_lex_state = 6},
  [120] = {.lex_state = 72, .external_lex_state = 6},
  [121] = {.lex_state = 71, .external_lex_state = 4},
  [122] = {.lex_state = 71, .external_lex_state = 4},
  [123] = {.lex_state = 71, .external_lex_state = 7},
  [124] = {.lex_state = 71, .external_lex_state = 7},
  [125] = {.lex_state = 71, .external_lex_state = 7},
  [126] = {.lex_state = 71, .external_lex_state = 7},
  [127] = {.lex_state = 71, .external_lex_state = 7},
  [128] = {.lex_state = 71, .external_lex_state = 7},
  [129] = {.lex_state = 71, .external_lex_state = 8},
  [130] = {.lex_state = 71, .external_lex_state = 7},
  [131] = {.lex_state = 71},
  [132] = {.lex_state = 71},
  [133] = {.lex_state = 71, .external_lex_state = 8},
  [134] = {.lex_state = 71, .external_lex_state = 7},
  [135] = {.lex_state = 71, .external_lex_state = 7},
  [136] = {.lex_state = 71},
  [137] = {.lex_state = 71, .external_lex_state = 8},
  [138] = {.lex_state = 71},
  [139] = {.lex_state = 71, .external_lex_state = 8},
  [140] = {.lex_state = 71},
  [141] = {.lex_state = 71, .external_lex_state = 8},
  [142] = {.lex_state = 71, .external_lex_state = 7},
  [143] = {.lex_state = 71, .external_lex_state = 8},
  [144] = {.lex_state = 71},
  [145] = {.lex_state = 71, .external_lex_state = 7},
  [146] = {.lex_state = 71},
  [147] = {.lex_state = 71},
  [148] = {.lex_state = 71, .external_lex_state = 7},
  [149] = {.lex_state = 71},
  [150] = {.lex_state = 71, .external_lex_state = 7},
  [151] = {.lex_state = 71, .external_lex_state = 7},
  [152] = {.lex_state = 71, .external_lex_state = 8},
  [153] = {.lex_state = 71, .external_lex_state = 7},
  [154] = {.lex_state = 71, .external_lex_state = 8},
  [155] = {.lex_state = 71, .external_lex_state = 7},
  [156] = {.lex_state = 71, .external_lex_state = 7},
  [157] = {.lex_state = 71, .external_lex_state = 8},
  [158] = {.lex_state = 71, .external_lex_state = 8},
  [159] = {.lex_state = 71, .external_lex_state = 8},
  [160] = {.lex_state = 71, .external_lex_state = 8},
  [161] = {.lex_state = 71, .external_lex_state = 8},
  [162] = {.lex_state = 71, .external_lex_state = 8},
  [163] = {.lex_state = 71, .external_lex_state = 7},
  [164] = {.lex_state = 71},
  [165] = {.lex_state = 71, .external_lex_state = 7},
  [166] = {.lex_state = 71},
  [167] = {.lex_state = 71},
  [168] = {.lex_state = 71, .external_lex_state = 7},
  [169] = {.lex_state = 71, .external_lex_state = 7},
  [170] = {.lex_state = 71, .external_lex_state = 7},
  [171] = {.lex_state = 71, .external_lex_state = 7},
  [172] = {.lex_state = 71, .external_lex_state = 7},
  [173] = {.lex_state = 71, .external_lex_state = 7},
  [174] = {.lex_state = 71, .external_lex_state = 7},
  [175] = {.lex_state = 71, .external_lex_state = 7},
  [176] = {.lex_state = 71, .external_lex_state = 7},
  [177] = {.lex_state = 71, .external_lex_state = 7},
  [178] = {.lex_state = 71, .external_lex_state = 7},
  [179] = {.lex_state = 71},
  [180] = {.lex_state = 71},
  [181] = {.lex_state = 71},
  [182] = {.lex_state = 71, .external_lex_state = 7},
  [183] = {.lex_state = 71},
  [184] = {.lex_state = 71, .external_lex_state = 8},
  [185] = {.lex_state = 71, .external_lex_state = 8},
  [186] = {.lex_state = 71, .external_lex_state = 7},
  [187] = {.lex_state = 71, .external_lex_state = 7},
  [188] = {.lex_state = 71, .external_lex_state = 7},
  [189] = {.lex_state = 71, .external_lex_state = 8},
  [190] = {.lex_state = 71},
  [191] = {.lex_state = 71},
  [192] = {.lex_state = 71},
  [193] = {.lex_state = 71},
  [194] = {.lex_state = 71},
  [195] = {.lex_state = 71, .external_lex_state = 8},
  [196] = {.lex_state = 71, .external_lex_state = 8},
  [197] = {.lex_state = 71, .external_lex_state = 8},
  [198] = {.lex_state = 71, .external_lex_state = 8},
  [199] = {.lex_state = 71, .external_lex_state = 8},
  [200] = {.lex_state = 71},
  [201] = {.lex_state = 71, .external_lex_state = 8},
  [202] = {.lex_state = 71, .external_lex_state = 8},
  [203] = {.lex_state = 71, .external_lex_state = 8},
  [204] = {.lex_state = 71},
  [205] = {.lex_state = 71, .external_lex_state = 8},
  [206] = {.lex_state = 71},
  [207] = {.lex_state = 71},
  [208] = {.lex_state = 71, .external_lex_state = 8},
  [209] = {.lex_state = 71},
  [210] = {.lex_state = 71, .external_lex_state = 8},
  [211] = {.lex_state = 71},
  [212] = {.lex_state = 71},
  [213] = {.lex_state = 71},
  [214] = {.lex_state = 71},
  [215] = {.lex_state = 71},
  [216] = {.lex_state = 71, .external_lex_state = 8},
  [217] = {.lex_state = 71},
  [218] = {.lex_state = 71, .external_lex_state = 8},
  [219] = {.lex_state = 71},
  [220] = {.lex_state = 71},
  [221] = {.lex_state = 71},
  [222] = {.lex_state = 71},
  [223] = {.lex_state = 71},
  [224] = {.lex_state = 71, .external_lex_state = 8},
  [225] = {.lex_state = 71, .external_lex_state = 8},
  [226] = {.lex_state = 71},
  [227] = {.lex_state = 71, .external_lex_state = 8},
  [228] = {.lex_state = 71, .external_lex_state = 8},
  [229] = {.lex_state = 81, .external_lex_state = 2},
  [230] = {.lex_state = 81, .external_lex_state = 2},
  [231] = {.lex_state = 81, .external_lex_state = 4},
  [232] = {.lex_state = 81, .external_lex_state = 4},
  [233] = {.lex_state = 81, .external_lex_state = 4},
  [234] = {.lex_state = 81, .external_lex_state = 2},
  [235] = {.lex_state = 81, .external_lex_state = 2},
  [236] = {.lex_state = 71, .external_lex_state = 7},
  [237] = {.lex_state = 71, .external_lex_state = 8},
  [238] = {.lex_state = 71, .external_lex_state = 7},
  [239] = {.lex_state = 71, .external_lex_state = 7},
  [240] = {.lex_state = 71, .external_lex_state = 7},
  [241] = {.lex_state = 71, .external_lex_state = 7},
  [242] = {.lex_state = 73, .external_lex_state = 4},
  [243] = {.lex_state = 73, .external_lex_state = 4},
  [244] = {.lex_state = 71},
  [245] = {.lex_state = 71, .external_lex_state = 7},
  [246] = {.lex_state = 71, .external_lex_state = 8},
  [247] = {.lex_state = 71, .external_lex_state = 8},
  [248] = {.lex_state = 71, .external_lex_state = 9},
  [249] = {.lex_state = 71, .external_lex_state = 8},
  [250] = {.lex_state = 71, .external_lex_state = 8},
  [251] = {.lex_state = 71, .external_lex_state = 8},
  [252] = {.lex_state = 71, .external_lex_state = 4},
  [253] = {.lex_state = 71, .external_lex_state = 7},
  [254] = {.lex_state = 71, .external_lex_state = 4},
  [255] = {.lex_state = 71, .external_lex_state = 4},
  [256] = {.lex_state = 71, .external_lex_state = 4},
  [257] = {.lex_state = 71, .external_lex_state = 4},
  [258] = {.lex_state = 71, .external_lex_state = 4},
  [259] = {.lex_state = 71, .external_lex_state = 4},
  [260] = {.lex_state = 71, .external_lex_state = 7},
  [261] = {.lex_state = 71, .external_lex_state = 7},
  [262] = {.lex_state = 71, .external_lex_state = 4},
  [263] = {.lex_state = 71, .external_lex_state = 7},
  [264] = {.lex_state = 71, .external_lex_state = 4},
  [265] = {.lex_state = 71, .external_lex_state = 8},
  [266] = {.lex_state = 71, .external_lex_state = 4},
  [267] = {.lex_state = 71},
  [268] = {.lex_state = 71},
  [269] = {.lex_state = 71},
  [270] = {.lex_state = 71},
  [271] = {.lex_state = 81, .external_lex_state = 10},
  [272] = {.lex_state = 81, .external_lex_state = 10},
  [273] = {.lex_state = 81, .external_lex_state = 10},
  [274] = {.lex_state = 79, .external_lex_state = 2},
  [275] = {.lex_state = 81, .external_lex_state = 10},
  [276] = {.lex_state = 81, .external_lex_state = 9},
  [277] = {.lex_state = 81, .external_lex_state = 10},
  [278] = {.lex_state = 81, .external_lex_state = 9},
  [279] = {.lex_state = 81, .external_lex_state = 9},
  [280] = {.lex_state = 81, .external_lex_state = 9},
  [281] = {.lex_state = 81, .external_lex_state = 10},
  [282] = {.lex_state = 2, .external_lex_state = 4},
  [283] = {.lex_state = 81, .external_lex_state = 10},
  [284] = {.lex_state = 81, .external_lex_state = 2},
  [285] = {.lex_state = 81, .external_lex_state = 9},
  [286] = {.lex_state = 81, .external_lex_state = 2},
  [287] = {.lex_state = 81, .external_lex_state = 2},
  [288] = {.lex_state = 81, .external_lex_state = 9},
  [289] = {.lex_state = 81, .external_lex_state = 9},
  [290] = {.lex_state = 81, .external_lex_state = 2},
  [291] = {.lex_state = 81, .external_lex_state = 2},
  [292] = {.lex_state = 81, .external_lex_state = 2},
  [293] = {.lex_state = 81, .external_lex_state = 2},
  [294] = {.lex_state = 72, .external_lex_state = 4},
  [295] = {.lex_state = 81, .external_lex_state = 4},
  [296] = {.lex_state = 81, .external_lex_state = 4},
  [297] = {.lex_state = 81, .external_lex_state = 4},
  [298] = {.lex_state = 72, .external_lex_state = 4},
  [299] = {.lex_state = 81, .external_lex_state = 4},
  [300] = {.lex_state = 81, .external_lex_state = 4},
  [301] = {.lex_state = 81, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 11},
  [303] = {.lex_state = 0, .external_lex_state = 11},
  [304] = {.lex_state = 0, .external_lex_state = 11},
  [305] = {.lex_state = 0, .external_lex_state = 11},
  [306] = {.lex_state = 72, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 11},
  [308] = {.lex_state = 0, .external_lex_state = 11},
  [309] = {.lex_state = 0, .external_lex_state = 11},
  [310] = {.lex_state = 0, .external_lex_state = 11},
  [311] = {.lex_state = 0, .external_lex_state = 11},
  [312] = {.lex_state = 69, .external_lex_state = 12},
  [313] = {.lex_state = 69, .external_lex_state = 12},
  [314] = {.lex_state = 72},
  [315] = {.lex_state = 69, .external_lex_state = 12},
  [316] = {.lex_state = 72, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 11},
  [318] = {.lex_state = 3, .external_lex_state = 12},
  [319] = {.lex_state = 3, .external_lex_state = 12},
  [320] = {.lex_state = 0, .external_lex_state = 11},
  [321] = {.lex_state = 69, .external_lex_state = 12},
  [322] = {.lex_state = 4, .external_lex_state = 13},
  [323] = {.lex_state = 4, .external_lex_state = 13},
  [324] = {.lex_state = 72, .external_lex_state = 4},
  [325] = {.lex_state = 4, .external_lex_state = 13},
  [326] = {.lex_state = 72, .external_lex_state = 4},
  [327] = {.lex_state = 4, .external_lex_state = 13},
  [328] = {.lex_state = 72},
  [329] = {.lex_state = 3, .external_lex_state = 12},
  [330] = {.lex_state = 4, .external_lex_state = 14},
  [331] = {.lex_state = 0, .external_lex_state = 7},
  [332] = {.lex_state = 69, .external_lex_state = 12},
  [333] = {.lex_state = 4, .external_lex_state = 8},
  [334] = {.lex_state = 4, .external_lex_state = 8},
  [335] = {.lex_state = 72},
  [336] = {.lex_state = 0, .external_lex_state = 12},
  [337] = {.lex_state = 0, .external_lex_state = 7},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 0, .external_lex_state = 7},
  [340] = {.lex_state = 4, .external_lex_state = 13},
  [341] = {.lex_state = 4, .external_lex_state = 14},
  [342] = {.lex_state = 4, .external_lex_state = 14},
  [343] = {.lex_state = 4, .external_lex_state = 8},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 69, .external_lex_state = 12},
  [346] = {.lex_state = 71, .external_lex_state = 8},
  [347] = {.lex_state = 69, .external_lex_state = 12},
  [348] = {.lex_state = 0, .external_lex_state = 12},
  [349] = {.lex_state = 72},
  [350] = {.lex_state = 4, .external_lex_state = 14},
  [351] = {.lex_state = 72},
  [352] = {.lex_state = 0, .external_lex_state = 7},
  [353] = {.lex_state = 0, .external_lex_state = 7},
  [354] = {.lex_state = 72},
  [355] = {.lex_state = 72},
  [356] = {.lex_state = 0, .external_lex_state = 8},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 0, .external_lex_state = 8},
  [359] = {.lex_state = 0, .external_lex_state = 8},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 69, .external_lex_state = 12},
  [362] = {.lex_state = 74},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0, .external_lex_state = 12},
  [368] = {.lex_state = 72},
  [369] = {.lex_state = 0, .external_lex_state = 12},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0, .external_lex_state = 12},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 74},
  [374] = {.lex_state = 0, .external_lex_state = 12},
  [375] = {.lex_state = 74},
  [376] = {.lex_state = 72},
  [377] = {.lex_state = 0, .external_lex_state = 12},
  [378] = {.lex_state = 0, .external_lex_state = 12},
  [379] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token_string_end = 5,
  ts_external_token_comment = 6,
  ts_external_token_RPAREN = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_string_start] = sym_string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_string_end] = sym_string_end,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
};

static const bool ts_external_scanner_states[15][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_RPAREN] = true,
  },
  [6] = {
    [ts_external_token_string_start] = true,
  },
  [7] = {
    [ts_external_token_RPAREN] = true,
  },
  [8] = {
    [ts_external_token__indent] = true,
  },
  [9] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_string_end] = true,
  },
  [12] = {
    [ts_external_token__newline] = true,
  },
  [13] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [14] = {
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_Description] = ACTIONS(1),
    [anon_sym_Actions] = ACTIONS(1),
    [anon_sym_MenuActions] = ACTIONS(1),
    [anon_sym_ApplicationActions] = ACTIONS(1),
    [anon_sym_MessageActions] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_binary_operator_token1] = ACTIONS(1),
    [aux_sym_binary_operator_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym_not_operator_token1] = ACTIONS(1),
    [aux_sym_select_case_statement_token1] = ACTIONS(1),
    [aux_sym_select_case_statement_token2] = ACTIONS(1),
    [aux_sym_default_case_token1] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_when_statement_token1] = ACTIONS(1),
    [aux_sym_else_if_statement_token1] = ACTIONS(1),
    [aux_sym_on_statement_token1] = ACTIONS(1),
    [aux_sym_loop_token1] = ACTIONS(1),
    [aux_sym_while_token1] = ACTIONS(1),
    [aux_sym_explicit_call_token1] = ACTIONS(1),
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_assignment_token1] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [aux_sym_break_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_sections] = STATE(370),
    [sym_section] = STATE(230),
    [sym_declaration_name] = STATE(336),
    [sym_section_declaration] = STATE(374),
    [sym_section_toggle] = STATE(374),
    [sym_description_section] = STATE(287),
    [sym_action_section] = STATE(287),
    [sym_multiline_comment] = STATE(230),
    [sym_data_block] = STATE(230),
    [aux_sym_sections_repeat1] = STATE(230),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Description] = ACTIONS(5),
    [anon_sym_Actions] = ACTIONS(7),
    [anon_sym_MenuActions] = ACTIONS(9),
    [anon_sym_ApplicationActions] = ACTIONS(9),
    [anon_sym_MessageActions] = ACTIONS(9),
    [sym_type_name] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_DOTdata] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_not_operator_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(31), 2,
      sym__dedent,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(122), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(14), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
    ACTIONS(25), 11,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [70] = 4,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(42), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(35), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [114] = 4,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_refs_repeat1,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(45), 29,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [158] = 4,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_refs_repeat1,
    ACTIONS(54), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(52), 29,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [202] = 3,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(38), 30,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      anon_sym_DOT,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [244] = 4,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_refs_repeat1,
    ACTIONS(62), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(60), 29,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [288] = 2,
    ACTIONS(66), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(64), 30,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      anon_sym_DOT,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [327] = 4,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_argument_list,
    ACTIONS(72), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(68), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [370] = 2,
    ACTIONS(58), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(38), 30,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      anon_sym_DOT,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [409] = 2,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(45), 30,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      anon_sym_DOT,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [448] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(74), 23,
      sym__dedent,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [494] = 8,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(95), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(84), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(93), 12,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [544] = 6,
    ACTIONS(99), 1,
      anon_sym_PIPE_PIPE,
    STATE(42), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 2,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 23,
      sym__dedent,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [590] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(109), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(107), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [630] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(82), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(74), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [670] = 3,
    STATE(19), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(111), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [710] = 5,
    STATE(17), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(105), 2,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 24,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [754] = 4,
    ACTIONS(119), 1,
      anon_sym_PIPE_PIPE,
    STATE(19), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(95), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(93), 27,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [796] = 9,
    ACTIONS(128), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_comment,
    ACTIONS(124), 18,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token2,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [847] = 2,
    ACTIONS(142), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(140), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [884] = 2,
    ACTIONS(146), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(144), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [921] = 2,
    ACTIONS(150), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(148), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [958] = 2,
    ACTIONS(154), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(152), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [995] = 2,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(156), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1032] = 4,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(124), 23,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1073] = 5,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(124), 21,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1116] = 6,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(124), 20,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1161] = 7,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(124), 19,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1208] = 3,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(124), 25,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1247] = 2,
    ACTIONS(162), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(160), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1284] = 8,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_comment,
    ACTIONS(124), 19,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1333] = 8,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(166), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_comment,
    ACTIONS(164), 19,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1382] = 2,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(124), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1419] = 2,
    ACTIONS(170), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(168), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1456] = 2,
    ACTIONS(174), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(172), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
  [1493] = 14,
    ACTIONS(176), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(178), 1,
      aux_sym_if_statement_token1,
    ACTIONS(180), 1,
      aux_sym_when_statement_token1,
    ACTIONS(182), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(184), 1,
      aux_sym_on_statement_token1,
    ACTIONS(186), 1,
      aux_sym_loop_token1,
    ACTIONS(188), 1,
      aux_sym_while_token1,
    ACTIONS(190), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(192), 1,
      aux_sym_return_statement_token1,
    ACTIONS(194), 1,
      aux_sym_assignment_token1,
    ACTIONS(196), 1,
      aux_sym_break_token1,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__dedent,
    STATE(40), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1550] = 14,
    ACTIONS(176), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(178), 1,
      aux_sym_if_statement_token1,
    ACTIONS(180), 1,
      aux_sym_when_statement_token1,
    ACTIONS(182), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(184), 1,
      aux_sym_on_statement_token1,
    ACTIONS(186), 1,
      aux_sym_loop_token1,
    ACTIONS(188), 1,
      aux_sym_while_token1,
    ACTIONS(190), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(192), 1,
      aux_sym_return_statement_token1,
    ACTIONS(194), 1,
      aux_sym_assignment_token1,
    ACTIONS(196), 1,
      aux_sym_break_token1,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__dedent,
    STATE(40), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1607] = 14,
    ACTIONS(176), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(178), 1,
      aux_sym_if_statement_token1,
    ACTIONS(180), 1,
      aux_sym_when_statement_token1,
    ACTIONS(182), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(184), 1,
      aux_sym_on_statement_token1,
    ACTIONS(186), 1,
      aux_sym_loop_token1,
    ACTIONS(188), 1,
      aux_sym_while_token1,
    ACTIONS(190), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(192), 1,
      aux_sym_return_statement_token1,
    ACTIONS(194), 1,
      aux_sym_assignment_token1,
    ACTIONS(196), 1,
      aux_sym_break_token1,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__dedent,
    STATE(40), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1664] = 14,
    ACTIONS(206), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(209), 1,
      aux_sym_if_statement_token1,
    ACTIONS(212), 1,
      aux_sym_when_statement_token1,
    ACTIONS(215), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(218), 1,
      aux_sym_on_statement_token1,
    ACTIONS(221), 1,
      aux_sym_loop_token1,
    ACTIONS(224), 1,
      aux_sym_while_token1,
    ACTIONS(227), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(230), 1,
      aux_sym_return_statement_token1,
    ACTIONS(233), 1,
      aux_sym_assignment_token1,
    ACTIONS(236), 1,
      aux_sym_break_token1,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__dedent,
    STATE(40), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1721] = 13,
    ACTIONS(176), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(178), 1,
      aux_sym_if_statement_token1,
    ACTIONS(180), 1,
      aux_sym_when_statement_token1,
    ACTIONS(182), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(184), 1,
      aux_sym_on_statement_token1,
    ACTIONS(186), 1,
      aux_sym_loop_token1,
    ACTIONS(188), 1,
      aux_sym_while_token1,
    ACTIONS(190), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(192), 1,
      aux_sym_return_statement_token1,
    ACTIONS(194), 1,
      aux_sym_assignment_token1,
    ACTIONS(196), 1,
      aux_sym_break_token1,
    ACTIONS(198), 1,
      sym_comment,
    STATE(37), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1775] = 4,
    ACTIONS(99), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(111), 24,
      sym__dedent,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [1811] = 14,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(240), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1867] = 13,
    ACTIONS(176), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(178), 1,
      aux_sym_if_statement_token1,
    ACTIONS(180), 1,
      aux_sym_when_statement_token1,
    ACTIONS(182), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(184), 1,
      aux_sym_on_statement_token1,
    ACTIONS(186), 1,
      aux_sym_loop_token1,
    ACTIONS(188), 1,
      aux_sym_while_token1,
    ACTIONS(190), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(192), 1,
      aux_sym_return_statement_token1,
    ACTIONS(194), 1,
      aux_sym_assignment_token1,
    ACTIONS(196), 1,
      aux_sym_break_token1,
    ACTIONS(198), 1,
      sym_comment,
    STATE(38), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1921] = 14,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(239), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1977] = 14,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(241), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2033] = 14,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(238), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2089] = 13,
    ACTIONS(176), 1,
      aux_sym_select_case_statement_token1,
    ACTIONS(178), 1,
      aux_sym_if_statement_token1,
    ACTIONS(180), 1,
      aux_sym_when_statement_token1,
    ACTIONS(182), 1,
      aux_sym_else_if_statement_token1,
    ACTIONS(184), 1,
      aux_sym_on_statement_token1,
    ACTIONS(186), 1,
      aux_sym_loop_token1,
    ACTIONS(188), 1,
      aux_sym_while_token1,
    ACTIONS(190), 1,
      aux_sym_explicit_call_token1,
    ACTIONS(192), 1,
      aux_sym_return_statement_token1,
    ACTIONS(194), 1,
      aux_sym_assignment_token1,
    ACTIONS(196), 1,
      aux_sym_break_token1,
    ACTIONS(198), 1,
      sym_comment,
    STATE(39), 15,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
      sym_when_statement,
      sym_else_if_statement,
      sym_on_statement,
      sym_loop,
      sym_while,
      sym_else_statement,
      sym_explicit_call,
      sym_return_statement,
      sym_assignment,
      sym_break,
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [2143] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(29), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2196] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(214), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2249] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(265), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2302] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(261), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2355] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(260), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2408] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(304), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(302), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(270), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(160), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2461] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(247), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2514] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(205), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2567] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(250), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2620] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(308), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(306), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(181), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2673] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(251), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2726] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(312), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(310), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(268), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(12), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2779] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(263), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2832] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(316), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(314), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(268), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(13), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2885] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(26), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2938] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(320), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(318), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(180), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2991] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(246), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3044] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(253), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3097] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(200), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3150] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(168), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3203] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(33), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3256] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(27), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3309] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(205), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3362] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(28), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3415] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(30), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3468] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(336), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(334), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(200), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(226), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3521] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(340), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(338), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(191), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3574] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(20), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3627] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(168), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3680] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(344), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(342), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(269), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(153), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3733] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(348), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(346), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(179), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3786] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(352), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(350), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(269), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(155), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3839] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(356), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(354), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(268), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(16), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3892] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(32), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3945] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(360), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(358), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(270), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(162), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3998] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_not_operator_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(33), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(14), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4051] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(364), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(362), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(268), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(15), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4104] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(266), 1,
      aux_sym_not_operator_token1,
    ACTIONS(270), 1,
      sym_float,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(268), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(34), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4157] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(171), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4210] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(173), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4263] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(174), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4316] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(175), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4369] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(176), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4422] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(177), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4475] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(178), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4528] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(322), 1,
      aux_sym_not_operator_token1,
    ACTIONS(326), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(324), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(182), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(145), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4581] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(368), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(366), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(269), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(148), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4634] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(372), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(370), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(190), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4687] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(216), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4740] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(227), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4793] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(225), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4846] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(224), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4899] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(218), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4952] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(198), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5005] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(201), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5058] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(328), 1,
      aux_sym_not_operator_token1,
    ACTIONS(332), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(202), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(159), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5111] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(376), 1,
      sym_float,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(374), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(269), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(142), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5164] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(380), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(378), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(270), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(185), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5217] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(384), 1,
      sym_float,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(382), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(270), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(158), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5270] = 13,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_not_operator_token1,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_string_start,
    STATE(123), 1,
      sym_ref,
    STATE(128), 1,
      sym_array_expression,
    STATE(134), 1,
      sym_refs,
    STATE(172), 1,
      sym_function,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(254), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(245), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5323] = 13,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      aux_sym_not_operator_token1,
    ACTIONS(296), 1,
      sym_float,
    ACTIONS(298), 1,
      sym_string_start,
    STATE(133), 1,
      sym_ref,
    STATE(154), 1,
      sym_refs,
    STATE(157), 1,
      sym_array_expression,
    STATE(195), 1,
      sym_function,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(249), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(189), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5376] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(220), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5429] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(194), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5482] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(217), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5535] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(215), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5588] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(388), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(386), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(211), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5641] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(392), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(390), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(164), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5694] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_not_operator_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(7), 1,
      sym_ref,
    STATE(9), 1,
      sym_refs,
    STATE(10), 1,
      sym_array_expression,
    STATE(25), 1,
      sym_function,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(121), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(14), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5747] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(212), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5800] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(193), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5853] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_not_operator_token1,
    ACTIONS(282), 1,
      sym_float,
    ACTIONS(284), 1,
      sym_string_start,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(280), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(213), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(166), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5906] = 13,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_string_start,
    ACTIONS(300), 1,
      aux_sym_not_operator_token1,
    ACTIONS(396), 1,
      sym_float,
    STATE(140), 1,
      sym_ref,
    STATE(146), 1,
      sym_refs,
    STATE(149), 1,
      sym_array_expression,
    STATE(219), 1,
      sym_function,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(394), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(267), 4,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
    STATE(183), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5959] = 9,
    ACTIONS(128), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(398), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(402), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [6003] = 9,
    ACTIONS(128), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(398), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(404), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [6047] = 4,
    ACTIONS(406), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_refs_repeat1,
    ACTIONS(62), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(60), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6080] = 4,
    ACTIONS(408), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_refs_repeat1,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(45), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6113] = 4,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(42), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(35), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6146] = 3,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(38), 20,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6177] = 4,
    ACTIONS(406), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_refs_repeat1,
    ACTIONS(54), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(52), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6210] = 2,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(38), 20,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6238] = 4,
    ACTIONS(413), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_refs_repeat1,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(45), 18,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6270] = 2,
    ACTIONS(66), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(64), 20,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6298] = 4,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(42), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(35), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6330] = 4,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_refs_repeat1,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(45), 18,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6362] = 4,
    ACTIONS(421), 1,
      anon_sym_DOT,
    STATE(137), 1,
      aux_sym_refs_repeat1,
    ACTIONS(62), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(60), 18,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6394] = 4,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_argument_list,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(68), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6426] = 2,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(45), 20,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6454] = 4,
    ACTIONS(425), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_refs_repeat1,
    ACTIONS(54), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(52), 18,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6486] = 4,
    ACTIONS(421), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_refs_repeat1,
    ACTIONS(54), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(52), 18,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6518] = 3,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(38), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6548] = 4,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(42), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(35), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6580] = 4,
    ACTIONS(425), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_refs_repeat1,
    ACTIONS(62), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(60), 18,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6612] = 3,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(38), 19,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6642] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(74), 13,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6677] = 2,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(45), 19,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6704] = 2,
    ACTIONS(66), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(64), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6731] = 5,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    STATE(156), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(431), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 14,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6764] = 4,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_argument_list,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(68), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6795] = 2,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(45), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6822] = 7,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(84), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6859] = 2,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(38), 19,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6886] = 6,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(435), 1,
      anon_sym_PIPE_PIPE,
    STATE(236), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(437), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(439), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 13,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6921] = 4,
    ACTIONS(441), 1,
      anon_sym_PIPE_PIPE,
    STATE(151), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(93), 17,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6952] = 2,
    ACTIONS(66), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(64), 19,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [6979] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(107), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7008] = 4,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(68), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7039] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(74), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7068] = 3,
    STATE(151), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(113), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(111), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7097] = 2,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(38), 19,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [7124] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(74), 12,
      sym__indent,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7158] = 5,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    STATE(161), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 13,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7190] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(107), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7218] = 3,
    STATE(184), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(113), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(111), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7246] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(74), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7274] = 2,
    ACTIONS(170), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(168), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7300] = 7,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(84), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7336] = 2,
    ACTIONS(174), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(172), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7362] = 5,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    STATE(167), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 13,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7394] = 3,
    STATE(192), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(113), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(111), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7422] = 8,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(164), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [7460] = 2,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(140), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7486] = 2,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(160), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7512] = 2,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(124), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7538] = 2,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(156), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7564] = 8,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [7602] = 9,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 8,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token2,
  [7642] = 3,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 15,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7670] = 7,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [7706] = 6,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 10,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
  [7740] = 5,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 11,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
  [7772] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(74), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7800] = 7,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7836] = 7,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7872] = 4,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 13,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7902] = 7,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7938] = 4,
    ACTIONS(474), 1,
      anon_sym_PIPE_PIPE,
    STATE(184), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(93), 16,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7968] = 7,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      sym__indent,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(84), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8004] = 2,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(152), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8030] = 2,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(148), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8056] = 2,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(144), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8082] = 6,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(477), 1,
      anon_sym_PIPE_PIPE,
    STATE(237), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(479), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 12,
      sym__indent,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8116] = 7,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8152] = 3,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(107), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8180] = 4,
    ACTIONS(485), 1,
      anon_sym_PIPE_PIPE,
    STATE(192), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(93), 16,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8210] = 5,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 10,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
  [8241] = 8,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_CARET,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 8,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [8278] = 2,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(156), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8303] = 2,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(160), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8328] = 2,
    ACTIONS(174), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(172), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8353] = 6,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 9,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
  [8386] = 2,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(144), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8411] = 8,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_CARET,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(164), 8,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [8448] = 5,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 10,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
  [8479] = 4,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 12,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8508] = 2,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(152), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8533] = 2,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(160), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8558] = 8,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(508), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(164), 8,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [8595] = 2,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(144), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8620] = 2,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(148), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8645] = 2,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(140), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8670] = 2,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(152), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8695] = 2,
    ACTIONS(170), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(168), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8720] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(74), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8753] = 4,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 12,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8782] = 6,
    ACTIONS(498), 1,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 9,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_AMP,
  [8815] = 7,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_CARET,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 8,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [8850] = 3,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 14,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8877] = 2,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(124), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8902] = 9,
    ACTIONS(494), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_CARET,
    ACTIONS(512), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 7,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token2,
  [8941] = 7,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 8,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [8976] = 2,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(156), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9001] = 2,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(124), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9026] = 2,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(140), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9051] = 2,
    ACTIONS(174), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(172), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9076] = 2,
    ACTIONS(170), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(168), 17,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9101] = 3,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 14,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9128] = 9,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(508), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 7,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token2,
  [9167] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9200] = 8,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(508), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(124), 8,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
  [9237] = 2,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(148), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9262] = 11,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(518), 1,
      anon_sym_Description,
    ACTIONS(521), 1,
      anon_sym_Actions,
    ACTIONS(527), 1,
      sym_type_name,
    ACTIONS(530), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_DOTdata,
    STATE(336), 1,
      sym_declaration_name,
    STATE(287), 2,
      sym_description_section,
      sym_action_section,
    STATE(374), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(524), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(229), 4,
      sym_section,
      sym_multiline_comment,
      sym_data_block,
      aux_sym_sections_repeat1,
  [9303] = 11,
    ACTIONS(5), 1,
      anon_sym_Description,
    ACTIONS(7), 1,
      anon_sym_Actions,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOTdata,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym_declaration_name,
    STATE(287), 2,
      sym_description_section,
      sym_action_section,
    STATE(374), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(9), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(229), 4,
      sym_section,
      sym_multiline_comment,
      sym_data_block,
      aux_sym_sections_repeat1,
  [9344] = 10,
    ACTIONS(538), 1,
      anon_sym_Description,
    ACTIONS(541), 1,
      anon_sym_Actions,
    ACTIONS(547), 1,
      sym_type_name,
    ACTIONS(550), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__dedent,
    STATE(348), 1,
      sym_declaration_name,
    STATE(297), 2,
      sym_description_section,
      sym_action_section,
    STATE(377), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(544), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(231), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [9382] = 10,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(555), 1,
      anon_sym_Description,
    ACTIONS(557), 1,
      anon_sym_Actions,
    ACTIONS(561), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__dedent,
    STATE(348), 1,
      sym_declaration_name,
    STATE(297), 2,
      sym_description_section,
      sym_action_section,
    STATE(377), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(559), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(231), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [9420] = 10,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(555), 1,
      anon_sym_Description,
    ACTIONS(557), 1,
      anon_sym_Actions,
    ACTIONS(561), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__dedent,
    STATE(348), 1,
      sym_declaration_name,
    STATE(297), 2,
      sym_description_section,
      sym_action_section,
    STATE(377), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(559), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(231), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [9458] = 9,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(555), 1,
      anon_sym_Description,
    ACTIONS(557), 1,
      anon_sym_Actions,
    ACTIONS(561), 1,
      sym_comment,
    STATE(348), 1,
      sym_declaration_name,
    STATE(297), 2,
      sym_description_section,
      sym_action_section,
    STATE(377), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(559), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(233), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [9493] = 9,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(555), 1,
      anon_sym_Description,
    ACTIONS(557), 1,
      anon_sym_Actions,
    ACTIONS(561), 1,
      sym_comment,
    STATE(348), 1,
      sym_declaration_name,
    STATE(297), 2,
      sym_description_section,
      sym_action_section,
    STATE(377), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(559), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(232), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [9528] = 4,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(435), 1,
      anon_sym_PIPE_PIPE,
    STATE(151), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(111), 13,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9553] = 4,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(477), 1,
      anon_sym_PIPE_PIPE,
    STATE(184), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(111), 12,
      sym__indent,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9577] = 11,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    STATE(339), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9615] = 11,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9653] = 11,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9691] = 11,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9729] = 1,
    ACTIONS(581), 15,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_select_case_statement_token2,
      aux_sym_default_case_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [9747] = 1,
    ACTIONS(583), 15,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_select_case_statement_token2,
      aux_sym_default_case_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [9765] = 4,
    ACTIONS(76), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    STATE(192), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(111), 11,
      anon_sym_SLASH,
      aux_sym_binary_operator_token1,
      aux_sym_binary_operator_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9788] = 9,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(585), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9821] = 10,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      sym__indent,
    STATE(252), 1,
      sym__block,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9856] = 10,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      sym__indent,
    STATE(257), 1,
      sym__block,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9891] = 2,
    ACTIONS(595), 1,
      sym__indent,
    ACTIONS(593), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [9910] = 10,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      sym__indent,
    STATE(324), 1,
      sym__block,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9945] = 10,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      sym__indent,
    STATE(258), 1,
      sym__block,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9980] = 10,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      sym__indent,
    STATE(259), 1,
      sym__block,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10015] = 1,
    ACTIONS(597), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10031] = 9,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10063] = 1,
    ACTIONS(601), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10079] = 1,
    ACTIONS(603), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10095] = 1,
    ACTIONS(605), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10111] = 1,
    ACTIONS(607), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10127] = 1,
    ACTIONS(609), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10143] = 1,
    ACTIONS(611), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10159] = 9,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10191] = 9,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10223] = 1,
    ACTIONS(617), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10239] = 9,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10271] = 1,
    ACTIONS(621), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10287] = 9,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(623), 1,
      sym__indent,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10319] = 1,
    ACTIONS(625), 13,
      sym__dedent,
      aux_sym_select_case_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_when_statement_token1,
      aux_sym_else_if_statement_token1,
      aux_sym_on_statement_token1,
      aux_sym_loop_token1,
      aux_sym_while_token1,
      aux_sym_explicit_call_token1,
      aux_sym_return_statement_token1,
      aux_sym_assignment_token1,
      aux_sym_break_token1,
      sym_comment,
  [10335] = 8,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_CARET,
    ACTIONS(512), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(627), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(629), 1,
      anon_sym_PIPE,
    ACTIONS(490), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(488), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10364] = 8,
    ACTIONS(128), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(134), 1,
      anon_sym_AMP,
    ACTIONS(136), 1,
      anon_sym_CARET,
    ACTIONS(398), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10393] = 8,
    ACTIONS(460), 1,
      anon_sym_AMP,
    ACTIONS(462), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(571), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(573), 1,
      anon_sym_PIPE,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(464), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10422] = 8,
    ACTIONS(504), 1,
      anon_sym_CARET,
    ACTIONS(510), 1,
      anon_sym_AMP,
    ACTIONS(514), 1,
      aux_sym_binary_operator_token1,
    ACTIONS(587), 1,
      aux_sym_binary_operator_token2,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(502), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(500), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10451] = 4,
    ACTIONS(635), 1,
      sym__indent,
    STATE(275), 1,
      aux_sym_section_repeat2,
    ACTIONS(633), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(631), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10471] = 4,
    ACTIONS(641), 1,
      sym__indent,
    STATE(272), 1,
      aux_sym_section_repeat2,
    ACTIONS(639), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(637), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10491] = 4,
    ACTIONS(648), 1,
      sym__indent,
    STATE(286), 1,
      sym__block,
    ACTIONS(646), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(644), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10511] = 4,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 1,
      aux_sym_section_value_token1,
    STATE(293), 1,
      sym_description_text,
    ACTIONS(654), 8,
      anon_sym_Description,
      anon_sym_Actions,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_type_name,
      sym_comment,
      anon_sym_DOTdata,
  [10531] = 4,
    ACTIONS(635), 1,
      sym__indent,
    STATE(272), 1,
      aux_sym_section_repeat2,
    ACTIONS(658), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(656), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10551] = 4,
    ACTIONS(660), 1,
      sym__indent,
    STATE(278), 1,
      aux_sym_section_repeat2,
    ACTIONS(633), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(631), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10570] = 2,
    ACTIONS(664), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(662), 7,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10585] = 4,
    ACTIONS(660), 1,
      sym__indent,
    STATE(280), 1,
      aux_sym_section_repeat2,
    ACTIONS(658), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(656), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10604] = 4,
    ACTIONS(666), 1,
      sym__indent,
    STATE(296), 1,
      sym__block,
    ACTIONS(646), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(644), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10623] = 4,
    ACTIONS(668), 1,
      sym__indent,
    STATE(280), 1,
      aux_sym_section_repeat2,
    ACTIONS(639), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(637), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10642] = 3,
    ACTIONS(675), 1,
      sym__indent,
    ACTIONS(673), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(671), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10659] = 4,
    ACTIONS(650), 1,
      sym__dedent,
    ACTIONS(677), 1,
      aux_sym_section_value_token1,
    STATE(295), 1,
      sym_description_text,
    ACTIONS(654), 7,
      anon_sym_Description,
      anon_sym_Actions,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_type_name,
      sym_comment,
  [10678] = 3,
    ACTIONS(683), 1,
      sym__indent,
    ACTIONS(681), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(679), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10695] = 2,
    ACTIONS(687), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(685), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10709] = 3,
    ACTIONS(689), 1,
      sym__indent,
    ACTIONS(681), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(679), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10725] = 2,
    ACTIONS(693), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(691), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10739] = 2,
    ACTIONS(697), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(695), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10753] = 3,
    ACTIONS(703), 1,
      sym__indent,
    ACTIONS(699), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(701), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10769] = 2,
    ACTIONS(664), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(662), 6,
      sym__indent,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10783] = 2,
    ACTIONS(705), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(583), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10797] = 2,
    ACTIONS(709), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(707), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10811] = 2,
    ACTIONS(711), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(581), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10825] = 2,
    ACTIONS(715), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(713), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [10839] = 5,
    ACTIONS(717), 1,
      aux_sym_select_case_statement_token2,
    ACTIONS(720), 1,
      aux_sym_default_case_token1,
    ACTIONS(723), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__dedent,
    STATE(294), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [10858] = 2,
    ACTIONS(715), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(713), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10871] = 2,
    ACTIONS(693), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(691), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10884] = 2,
    ACTIONS(697), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(695), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10897] = 5,
    ACTIONS(728), 1,
      aux_sym_select_case_statement_token2,
    ACTIONS(730), 1,
      aux_sym_default_case_token1,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__dedent,
    STATE(294), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [10916] = 2,
    ACTIONS(709), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(707), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10929] = 2,
    ACTIONS(711), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(581), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10942] = 2,
    ACTIONS(705), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(583), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [10955] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(740), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(309), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [10973] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(742), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(311), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [10991] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(744), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(302), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11009] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(746), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(309), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11027] = 4,
    ACTIONS(728), 1,
      aux_sym_select_case_statement_token2,
    ACTIONS(730), 1,
      aux_sym_default_case_token1,
    ACTIONS(732), 1,
      sym_comment,
    STATE(298), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [11043] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(748), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(305), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11061] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(750), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(309), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11079] = 5,
    ACTIONS(755), 1,
      sym__not_escape_sequence,
    ACTIONS(758), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(752), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(309), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11097] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(760), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(308), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11115] = 5,
    ACTIONS(738), 1,
      sym__not_escape_sequence,
    ACTIONS(762), 1,
      sym_string_end,
    STATE(317), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(736), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(309), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [11133] = 5,
    ACTIONS(764), 1,
      anon_sym_,
    ACTIONS(767), 1,
      anon_sym_SLASH,
    ACTIONS(772), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(770), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [11150] = 5,
    ACTIONS(774), 1,
      anon_sym_,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    ACTIONS(780), 1,
      sym__newline,
    STATE(315), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(778), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [11167] = 6,
    ACTIONS(782), 1,
      sym_identifier,
    STATE(25), 1,
      sym_function,
    STATE(140), 1,
      sym_ref,
    STATE(149), 1,
      sym_array_expression,
    STATE(256), 1,
      sym_call,
    STATE(364), 1,
      sym_refs,
  [11186] = 5,
    ACTIONS(774), 1,
      anon_sym_,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    ACTIONS(786), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(784), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [11203] = 2,
    ACTIONS(595), 1,
      sym__indent,
    ACTIONS(788), 4,
      sym__dedent,
      aux_sym_select_case_statement_token2,
      aux_sym_default_case_token1,
      sym_comment,
  [11213] = 4,
    ACTIONS(792), 1,
      sym__not_escape_sequence,
    ACTIONS(794), 1,
      sym_string_end,
    STATE(320), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(790), 2,
      sym__string_content,
      sym_escape_sequence,
  [11227] = 5,
    ACTIONS(796), 1,
      anon_sym_,
    ACTIONS(798), 1,
      aux_sym_section_value_token1,
    ACTIONS(800), 1,
      sym__newline,
    STATE(329), 1,
      aux_sym_section_declaration_repeat1,
    STATE(371), 1,
      sym_section_value,
  [11243] = 5,
    ACTIONS(798), 1,
      aux_sym_section_value_token1,
    ACTIONS(802), 1,
      anon_sym_,
    ACTIONS(804), 1,
      sym__newline,
    STATE(318), 1,
      aux_sym_section_declaration_repeat1,
    STATE(367), 1,
      sym_section_value,
  [11259] = 4,
    ACTIONS(809), 1,
      sym__not_escape_sequence,
    ACTIONS(812), 1,
      sym_string_end,
    STATE(320), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(806), 2,
      sym__string_content,
      sym_escape_sequence,
  [11273] = 2,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(816), 3,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_QMARK,
  [11283] = 4,
    ACTIONS(818), 1,
      aux_sym__description_block_token1,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(822), 1,
      sym__dedent,
    STATE(323), 1,
      aux_sym__description_block,
  [11296] = 4,
    ACTIONS(824), 1,
      aux_sym__description_block_token1,
    ACTIONS(827), 1,
      sym__indent,
    ACTIONS(830), 1,
      sym__dedent,
    STATE(323), 1,
      aux_sym__description_block,
  [11309] = 1,
    ACTIONS(832), 4,
      sym__dedent,
      aux_sym_select_case_statement_token2,
      aux_sym_default_case_token1,
      sym_comment,
  [11316] = 4,
    ACTIONS(818), 1,
      aux_sym__description_block_token1,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(834), 1,
      sym__dedent,
    STATE(323), 1,
      aux_sym__description_block,
  [11329] = 1,
    ACTIONS(836), 4,
      sym__dedent,
      aux_sym_select_case_statement_token2,
      aux_sym_default_case_token1,
      sym_comment,
  [11336] = 4,
    ACTIONS(818), 1,
      aux_sym__description_block_token1,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(838), 1,
      sym__dedent,
    STATE(323), 1,
      aux_sym__description_block,
  [11349] = 4,
    ACTIONS(782), 1,
      sym_identifier,
    STATE(140), 1,
      sym_ref,
    STATE(149), 1,
      sym_array_expression,
    STATE(372), 1,
      sym_refs,
  [11362] = 4,
    ACTIONS(840), 1,
      anon_sym_,
    ACTIONS(843), 1,
      aux_sym_section_value_token1,
    ACTIONS(845), 1,
      sym__newline,
    STATE(329), 1,
      aux_sym_section_declaration_repeat1,
  [11375] = 3,
    ACTIONS(847), 1,
      aux_sym__description_block_token1,
    ACTIONS(849), 1,
      sym__dedent,
    STATE(350), 1,
      aux_sym_multiline_comment_repeat1,
  [11385] = 3,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_argument_list_repeat1,
  [11395] = 3,
    ACTIONS(853), 1,
      anon_sym_,
    ACTIONS(855), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_toggle_value_repeat1,
  [11405] = 3,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(857), 1,
      aux_sym__description_block_token1,
    STATE(325), 1,
      aux_sym__description_block,
  [11415] = 3,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(859), 1,
      aux_sym__description_block_token1,
    STATE(322), 1,
      aux_sym__description_block,
  [11425] = 3,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(10), 1,
      sym_array_expression,
    STATE(11), 1,
      sym_ref,
  [11435] = 3,
    ACTIONS(863), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_QMARK,
    ACTIONS(867), 1,
      sym__newline,
  [11445] = 3,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_argument_list_repeat1,
  [11455] = 3,
    ACTIONS(871), 1,
      aux_sym__description_block_token1,
    ACTIONS(874), 1,
      anon_sym_DOTenddata,
    STATE(338), 1,
      aux_sym_multiline_comment_repeat1,
  [11465] = 3,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_argument_list_repeat1,
  [11475] = 1,
    ACTIONS(878), 3,
      sym__indent,
      sym__dedent,
      aux_sym__description_block_token1,
  [11481] = 3,
    ACTIONS(847), 1,
      aux_sym__description_block_token1,
    ACTIONS(880), 1,
      sym__dedent,
    STATE(350), 1,
      aux_sym_multiline_comment_repeat1,
  [11491] = 3,
    ACTIONS(847), 1,
      aux_sym__description_block_token1,
    ACTIONS(882), 1,
      sym__dedent,
    STATE(350), 1,
      aux_sym_multiline_comment_repeat1,
  [11501] = 3,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(884), 1,
      aux_sym__description_block_token1,
    STATE(327), 1,
      aux_sym__description_block,
  [11511] = 3,
    ACTIONS(886), 1,
      aux_sym__description_block_token1,
    ACTIONS(888), 1,
      anon_sym_DOTenddata,
    STATE(338), 1,
      aux_sym_multiline_comment_repeat1,
  [11521] = 3,
    ACTIONS(853), 1,
      anon_sym_,
    ACTIONS(890), 1,
      sym__newline,
    STATE(332), 1,
      aux_sym_toggle_value_repeat1,
  [11531] = 3,
    ACTIONS(591), 1,
      sym__indent,
    ACTIONS(892), 1,
      aux_sym_if_statement_token1,
    STATE(266), 1,
      sym__block,
  [11541] = 3,
    ACTIONS(894), 1,
      anon_sym_,
    ACTIONS(897), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_toggle_value_repeat1,
  [11551] = 3,
    ACTIONS(863), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_QMARK,
    ACTIONS(899), 1,
      sym__newline,
  [11561] = 3,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(128), 1,
      sym_array_expression,
    STATE(135), 1,
      sym_ref,
  [11571] = 3,
    ACTIONS(903), 1,
      aux_sym__description_block_token1,
    ACTIONS(906), 1,
      sym__dedent,
    STATE(350), 1,
      aux_sym_multiline_comment_repeat1,
  [11581] = 3,
    ACTIONS(908), 1,
      sym_identifier,
    STATE(143), 1,
      sym_ref,
    STATE(157), 1,
      sym_array_expression,
  [11591] = 3,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_argument_list_repeat1,
  [11601] = 3,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_argument_list_repeat1,
  [11611] = 3,
    ACTIONS(782), 1,
      sym_identifier,
    STATE(147), 1,
      sym_ref,
    STATE(149), 1,
      sym_array_expression,
  [11621] = 2,
    ACTIONS(915), 1,
      sym_identifier,
    ACTIONS(917), 1,
      sym_type_name,
  [11628] = 2,
    ACTIONS(591), 1,
      sym__indent,
    STATE(254), 1,
      sym__block,
  [11635] = 2,
    ACTIONS(919), 1,
      aux_sym__description_block_token1,
    STATE(344), 1,
      aux_sym_multiline_comment_repeat1,
  [11642] = 2,
    ACTIONS(591), 1,
      sym__indent,
    STATE(326), 1,
      sym__block,
  [11649] = 2,
    ACTIONS(591), 1,
      sym__indent,
    STATE(255), 1,
      sym__block,
  [11656] = 2,
    ACTIONS(921), 1,
      aux_sym__description_block_token1,
    STATE(342), 1,
      aux_sym_multiline_comment_repeat1,
  [11663] = 1,
    ACTIONS(923), 2,
      sym__newline,
      anon_sym_,
  [11668] = 2,
    ACTIONS(925), 1,
      sym_type_name,
    STATE(378), 1,
      sym_toggle_value,
  [11675] = 2,
    ACTIONS(927), 1,
      aux_sym__description_block_token1,
    STATE(330), 1,
      aux_sym_multiline_comment_repeat1,
  [11682] = 2,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_argument_list,
  [11689] = 2,
    ACTIONS(929), 1,
      aux_sym__description_block_token1,
    STATE(341), 1,
      aux_sym_multiline_comment_repeat1,
  [11696] = 1,
    ACTIONS(931), 1,
      anon_sym_COLON,
  [11700] = 1,
    ACTIONS(933), 1,
      sym__newline,
  [11704] = 1,
    ACTIONS(935), 1,
      aux_sym_select_case_statement_token2,
  [11708] = 1,
    ACTIONS(937), 1,
      sym__newline,
  [11712] = 1,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
  [11716] = 1,
    ACTIONS(941), 1,
      sym__newline,
  [11720] = 1,
    ACTIONS(943), 1,
      anon_sym_EQ,
  [11724] = 1,
    ACTIONS(945), 1,
      sym_type_name,
  [11728] = 1,
    ACTIONS(867), 1,
      sym__newline,
  [11732] = 1,
    ACTIONS(947), 1,
      sym_type_name,
  [11736] = 1,
    ACTIONS(949), 1,
      sym_identifier,
  [11740] = 1,
    ACTIONS(899), 1,
      sym__newline,
  [11744] = 1,
    ACTIONS(951), 1,
      sym__newline,
  [11748] = 1,
    ACTIONS(953), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 158,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 244,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 448,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 544,
  [SMALL_STATE(15)] = 590,
  [SMALL_STATE(16)] = 630,
  [SMALL_STATE(17)] = 670,
  [SMALL_STATE(18)] = 710,
  [SMALL_STATE(19)] = 754,
  [SMALL_STATE(20)] = 796,
  [SMALL_STATE(21)] = 847,
  [SMALL_STATE(22)] = 884,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 958,
  [SMALL_STATE(25)] = 995,
  [SMALL_STATE(26)] = 1032,
  [SMALL_STATE(27)] = 1073,
  [SMALL_STATE(28)] = 1116,
  [SMALL_STATE(29)] = 1161,
  [SMALL_STATE(30)] = 1208,
  [SMALL_STATE(31)] = 1247,
  [SMALL_STATE(32)] = 1284,
  [SMALL_STATE(33)] = 1333,
  [SMALL_STATE(34)] = 1382,
  [SMALL_STATE(35)] = 1419,
  [SMALL_STATE(36)] = 1456,
  [SMALL_STATE(37)] = 1493,
  [SMALL_STATE(38)] = 1550,
  [SMALL_STATE(39)] = 1607,
  [SMALL_STATE(40)] = 1664,
  [SMALL_STATE(41)] = 1721,
  [SMALL_STATE(42)] = 1775,
  [SMALL_STATE(43)] = 1811,
  [SMALL_STATE(44)] = 1867,
  [SMALL_STATE(45)] = 1921,
  [SMALL_STATE(46)] = 1977,
  [SMALL_STATE(47)] = 2033,
  [SMALL_STATE(48)] = 2089,
  [SMALL_STATE(49)] = 2143,
  [SMALL_STATE(50)] = 2196,
  [SMALL_STATE(51)] = 2249,
  [SMALL_STATE(52)] = 2302,
  [SMALL_STATE(53)] = 2355,
  [SMALL_STATE(54)] = 2408,
  [SMALL_STATE(55)] = 2461,
  [SMALL_STATE(56)] = 2514,
  [SMALL_STATE(57)] = 2567,
  [SMALL_STATE(58)] = 2620,
  [SMALL_STATE(59)] = 2673,
  [SMALL_STATE(60)] = 2726,
  [SMALL_STATE(61)] = 2779,
  [SMALL_STATE(62)] = 2832,
  [SMALL_STATE(63)] = 2885,
  [SMALL_STATE(64)] = 2938,
  [SMALL_STATE(65)] = 2991,
  [SMALL_STATE(66)] = 3044,
  [SMALL_STATE(67)] = 3097,
  [SMALL_STATE(68)] = 3150,
  [SMALL_STATE(69)] = 3203,
  [SMALL_STATE(70)] = 3256,
  [SMALL_STATE(71)] = 3309,
  [SMALL_STATE(72)] = 3362,
  [SMALL_STATE(73)] = 3415,
  [SMALL_STATE(74)] = 3468,
  [SMALL_STATE(75)] = 3521,
  [SMALL_STATE(76)] = 3574,
  [SMALL_STATE(77)] = 3627,
  [SMALL_STATE(78)] = 3680,
  [SMALL_STATE(79)] = 3733,
  [SMALL_STATE(80)] = 3786,
  [SMALL_STATE(81)] = 3839,
  [SMALL_STATE(82)] = 3892,
  [SMALL_STATE(83)] = 3945,
  [SMALL_STATE(84)] = 3998,
  [SMALL_STATE(85)] = 4051,
  [SMALL_STATE(86)] = 4104,
  [SMALL_STATE(87)] = 4157,
  [SMALL_STATE(88)] = 4210,
  [SMALL_STATE(89)] = 4263,
  [SMALL_STATE(90)] = 4316,
  [SMALL_STATE(91)] = 4369,
  [SMALL_STATE(92)] = 4422,
  [SMALL_STATE(93)] = 4475,
  [SMALL_STATE(94)] = 4528,
  [SMALL_STATE(95)] = 4581,
  [SMALL_STATE(96)] = 4634,
  [SMALL_STATE(97)] = 4687,
  [SMALL_STATE(98)] = 4740,
  [SMALL_STATE(99)] = 4793,
  [SMALL_STATE(100)] = 4846,
  [SMALL_STATE(101)] = 4899,
  [SMALL_STATE(102)] = 4952,
  [SMALL_STATE(103)] = 5005,
  [SMALL_STATE(104)] = 5058,
  [SMALL_STATE(105)] = 5111,
  [SMALL_STATE(106)] = 5164,
  [SMALL_STATE(107)] = 5217,
  [SMALL_STATE(108)] = 5270,
  [SMALL_STATE(109)] = 5323,
  [SMALL_STATE(110)] = 5376,
  [SMALL_STATE(111)] = 5429,
  [SMALL_STATE(112)] = 5482,
  [SMALL_STATE(113)] = 5535,
  [SMALL_STATE(114)] = 5588,
  [SMALL_STATE(115)] = 5641,
  [SMALL_STATE(116)] = 5694,
  [SMALL_STATE(117)] = 5747,
  [SMALL_STATE(118)] = 5800,
  [SMALL_STATE(119)] = 5853,
  [SMALL_STATE(120)] = 5906,
  [SMALL_STATE(121)] = 5959,
  [SMALL_STATE(122)] = 6003,
  [SMALL_STATE(123)] = 6047,
  [SMALL_STATE(124)] = 6080,
  [SMALL_STATE(125)] = 6113,
  [SMALL_STATE(126)] = 6146,
  [SMALL_STATE(127)] = 6177,
  [SMALL_STATE(128)] = 6210,
  [SMALL_STATE(129)] = 6238,
  [SMALL_STATE(130)] = 6270,
  [SMALL_STATE(131)] = 6298,
  [SMALL_STATE(132)] = 6330,
  [SMALL_STATE(133)] = 6362,
  [SMALL_STATE(134)] = 6394,
  [SMALL_STATE(135)] = 6426,
  [SMALL_STATE(136)] = 6454,
  [SMALL_STATE(137)] = 6486,
  [SMALL_STATE(138)] = 6518,
  [SMALL_STATE(139)] = 6548,
  [SMALL_STATE(140)] = 6580,
  [SMALL_STATE(141)] = 6612,
  [SMALL_STATE(142)] = 6642,
  [SMALL_STATE(143)] = 6677,
  [SMALL_STATE(144)] = 6704,
  [SMALL_STATE(145)] = 6731,
  [SMALL_STATE(146)] = 6764,
  [SMALL_STATE(147)] = 6795,
  [SMALL_STATE(148)] = 6822,
  [SMALL_STATE(149)] = 6859,
  [SMALL_STATE(150)] = 6886,
  [SMALL_STATE(151)] = 6921,
  [SMALL_STATE(152)] = 6952,
  [SMALL_STATE(153)] = 6979,
  [SMALL_STATE(154)] = 7008,
  [SMALL_STATE(155)] = 7039,
  [SMALL_STATE(156)] = 7068,
  [SMALL_STATE(157)] = 7097,
  [SMALL_STATE(158)] = 7124,
  [SMALL_STATE(159)] = 7158,
  [SMALL_STATE(160)] = 7190,
  [SMALL_STATE(161)] = 7218,
  [SMALL_STATE(162)] = 7246,
  [SMALL_STATE(163)] = 7274,
  [SMALL_STATE(164)] = 7300,
  [SMALL_STATE(165)] = 7336,
  [SMALL_STATE(166)] = 7362,
  [SMALL_STATE(167)] = 7394,
  [SMALL_STATE(168)] = 7422,
  [SMALL_STATE(169)] = 7460,
  [SMALL_STATE(170)] = 7486,
  [SMALL_STATE(171)] = 7512,
  [SMALL_STATE(172)] = 7538,
  [SMALL_STATE(173)] = 7564,
  [SMALL_STATE(174)] = 7602,
  [SMALL_STATE(175)] = 7642,
  [SMALL_STATE(176)] = 7670,
  [SMALL_STATE(177)] = 7706,
  [SMALL_STATE(178)] = 7740,
  [SMALL_STATE(179)] = 7772,
  [SMALL_STATE(180)] = 7800,
  [SMALL_STATE(181)] = 7836,
  [SMALL_STATE(182)] = 7872,
  [SMALL_STATE(183)] = 7902,
  [SMALL_STATE(184)] = 7938,
  [SMALL_STATE(185)] = 7968,
  [SMALL_STATE(186)] = 8004,
  [SMALL_STATE(187)] = 8030,
  [SMALL_STATE(188)] = 8056,
  [SMALL_STATE(189)] = 8082,
  [SMALL_STATE(190)] = 8116,
  [SMALL_STATE(191)] = 8152,
  [SMALL_STATE(192)] = 8180,
  [SMALL_STATE(193)] = 8210,
  [SMALL_STATE(194)] = 8241,
  [SMALL_STATE(195)] = 8278,
  [SMALL_STATE(196)] = 8303,
  [SMALL_STATE(197)] = 8328,
  [SMALL_STATE(198)] = 8353,
  [SMALL_STATE(199)] = 8386,
  [SMALL_STATE(200)] = 8411,
  [SMALL_STATE(201)] = 8448,
  [SMALL_STATE(202)] = 8479,
  [SMALL_STATE(203)] = 8508,
  [SMALL_STATE(204)] = 8533,
  [SMALL_STATE(205)] = 8558,
  [SMALL_STATE(206)] = 8595,
  [SMALL_STATE(207)] = 8620,
  [SMALL_STATE(208)] = 8645,
  [SMALL_STATE(209)] = 8670,
  [SMALL_STATE(210)] = 8695,
  [SMALL_STATE(211)] = 8720,
  [SMALL_STATE(212)] = 8753,
  [SMALL_STATE(213)] = 8782,
  [SMALL_STATE(214)] = 8815,
  [SMALL_STATE(215)] = 8850,
  [SMALL_STATE(216)] = 8877,
  [SMALL_STATE(217)] = 8902,
  [SMALL_STATE(218)] = 8941,
  [SMALL_STATE(219)] = 8976,
  [SMALL_STATE(220)] = 9001,
  [SMALL_STATE(221)] = 9026,
  [SMALL_STATE(222)] = 9051,
  [SMALL_STATE(223)] = 9076,
  [SMALL_STATE(224)] = 9101,
  [SMALL_STATE(225)] = 9128,
  [SMALL_STATE(226)] = 9167,
  [SMALL_STATE(227)] = 9200,
  [SMALL_STATE(228)] = 9237,
  [SMALL_STATE(229)] = 9262,
  [SMALL_STATE(230)] = 9303,
  [SMALL_STATE(231)] = 9344,
  [SMALL_STATE(232)] = 9382,
  [SMALL_STATE(233)] = 9420,
  [SMALL_STATE(234)] = 9458,
  [SMALL_STATE(235)] = 9493,
  [SMALL_STATE(236)] = 9528,
  [SMALL_STATE(237)] = 9553,
  [SMALL_STATE(238)] = 9577,
  [SMALL_STATE(239)] = 9615,
  [SMALL_STATE(240)] = 9653,
  [SMALL_STATE(241)] = 9691,
  [SMALL_STATE(242)] = 9729,
  [SMALL_STATE(243)] = 9747,
  [SMALL_STATE(244)] = 9765,
  [SMALL_STATE(245)] = 9788,
  [SMALL_STATE(246)] = 9821,
  [SMALL_STATE(247)] = 9856,
  [SMALL_STATE(248)] = 9891,
  [SMALL_STATE(249)] = 9910,
  [SMALL_STATE(250)] = 9945,
  [SMALL_STATE(251)] = 9980,
  [SMALL_STATE(252)] = 10015,
  [SMALL_STATE(253)] = 10031,
  [SMALL_STATE(254)] = 10063,
  [SMALL_STATE(255)] = 10079,
  [SMALL_STATE(256)] = 10095,
  [SMALL_STATE(257)] = 10111,
  [SMALL_STATE(258)] = 10127,
  [SMALL_STATE(259)] = 10143,
  [SMALL_STATE(260)] = 10159,
  [SMALL_STATE(261)] = 10191,
  [SMALL_STATE(262)] = 10223,
  [SMALL_STATE(263)] = 10239,
  [SMALL_STATE(264)] = 10271,
  [SMALL_STATE(265)] = 10287,
  [SMALL_STATE(266)] = 10319,
  [SMALL_STATE(267)] = 10335,
  [SMALL_STATE(268)] = 10364,
  [SMALL_STATE(269)] = 10393,
  [SMALL_STATE(270)] = 10422,
  [SMALL_STATE(271)] = 10451,
  [SMALL_STATE(272)] = 10471,
  [SMALL_STATE(273)] = 10491,
  [SMALL_STATE(274)] = 10511,
  [SMALL_STATE(275)] = 10531,
  [SMALL_STATE(276)] = 10551,
  [SMALL_STATE(277)] = 10570,
  [SMALL_STATE(278)] = 10585,
  [SMALL_STATE(279)] = 10604,
  [SMALL_STATE(280)] = 10623,
  [SMALL_STATE(281)] = 10642,
  [SMALL_STATE(282)] = 10659,
  [SMALL_STATE(283)] = 10678,
  [SMALL_STATE(284)] = 10695,
  [SMALL_STATE(285)] = 10709,
  [SMALL_STATE(286)] = 10725,
  [SMALL_STATE(287)] = 10739,
  [SMALL_STATE(288)] = 10753,
  [SMALL_STATE(289)] = 10769,
  [SMALL_STATE(290)] = 10783,
  [SMALL_STATE(291)] = 10797,
  [SMALL_STATE(292)] = 10811,
  [SMALL_STATE(293)] = 10825,
  [SMALL_STATE(294)] = 10839,
  [SMALL_STATE(295)] = 10858,
  [SMALL_STATE(296)] = 10871,
  [SMALL_STATE(297)] = 10884,
  [SMALL_STATE(298)] = 10897,
  [SMALL_STATE(299)] = 10916,
  [SMALL_STATE(300)] = 10929,
  [SMALL_STATE(301)] = 10942,
  [SMALL_STATE(302)] = 10955,
  [SMALL_STATE(303)] = 10973,
  [SMALL_STATE(304)] = 10991,
  [SMALL_STATE(305)] = 11009,
  [SMALL_STATE(306)] = 11027,
  [SMALL_STATE(307)] = 11043,
  [SMALL_STATE(308)] = 11061,
  [SMALL_STATE(309)] = 11079,
  [SMALL_STATE(310)] = 11097,
  [SMALL_STATE(311)] = 11115,
  [SMALL_STATE(312)] = 11133,
  [SMALL_STATE(313)] = 11150,
  [SMALL_STATE(314)] = 11167,
  [SMALL_STATE(315)] = 11186,
  [SMALL_STATE(316)] = 11203,
  [SMALL_STATE(317)] = 11213,
  [SMALL_STATE(318)] = 11227,
  [SMALL_STATE(319)] = 11243,
  [SMALL_STATE(320)] = 11259,
  [SMALL_STATE(321)] = 11273,
  [SMALL_STATE(322)] = 11283,
  [SMALL_STATE(323)] = 11296,
  [SMALL_STATE(324)] = 11309,
  [SMALL_STATE(325)] = 11316,
  [SMALL_STATE(326)] = 11329,
  [SMALL_STATE(327)] = 11336,
  [SMALL_STATE(328)] = 11349,
  [SMALL_STATE(329)] = 11362,
  [SMALL_STATE(330)] = 11375,
  [SMALL_STATE(331)] = 11385,
  [SMALL_STATE(332)] = 11395,
  [SMALL_STATE(333)] = 11405,
  [SMALL_STATE(334)] = 11415,
  [SMALL_STATE(335)] = 11425,
  [SMALL_STATE(336)] = 11435,
  [SMALL_STATE(337)] = 11445,
  [SMALL_STATE(338)] = 11455,
  [SMALL_STATE(339)] = 11465,
  [SMALL_STATE(340)] = 11475,
  [SMALL_STATE(341)] = 11481,
  [SMALL_STATE(342)] = 11491,
  [SMALL_STATE(343)] = 11501,
  [SMALL_STATE(344)] = 11511,
  [SMALL_STATE(345)] = 11521,
  [SMALL_STATE(346)] = 11531,
  [SMALL_STATE(347)] = 11541,
  [SMALL_STATE(348)] = 11551,
  [SMALL_STATE(349)] = 11561,
  [SMALL_STATE(350)] = 11571,
  [SMALL_STATE(351)] = 11581,
  [SMALL_STATE(352)] = 11591,
  [SMALL_STATE(353)] = 11601,
  [SMALL_STATE(354)] = 11611,
  [SMALL_STATE(355)] = 11621,
  [SMALL_STATE(356)] = 11628,
  [SMALL_STATE(357)] = 11635,
  [SMALL_STATE(358)] = 11642,
  [SMALL_STATE(359)] = 11649,
  [SMALL_STATE(360)] = 11656,
  [SMALL_STATE(361)] = 11663,
  [SMALL_STATE(362)] = 11668,
  [SMALL_STATE(363)] = 11675,
  [SMALL_STATE(364)] = 11682,
  [SMALL_STATE(365)] = 11689,
  [SMALL_STATE(366)] = 11696,
  [SMALL_STATE(367)] = 11700,
  [SMALL_STATE(368)] = 11704,
  [SMALL_STATE(369)] = 11708,
  [SMALL_STATE(370)] = 11712,
  [SMALL_STATE(371)] = 11716,
  [SMALL_STATE(372)] = 11720,
  [SMALL_STATE(373)] = 11724,
  [SMALL_STATE(374)] = 11728,
  [SMALL_STATE(375)] = 11732,
  [SMALL_STATE(376)] = 11736,
  [SMALL_STATE(377)] = 11740,
  [SMALL_STATE(378)] = 11744,
  [SMALL_STATE(379)] = 11748,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary_expression, 1), REDUCE(sym_ref, 1, .production_id = 9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 1, .production_id = 9),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__primary_expression, 1), REDUCE(sym_ref, 1, .production_id = 9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_refs_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2), SHIFT_REPEAT(335),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refs, 2, .production_id = 18),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refs, 2, .production_id = 18),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 1, .production_id = 9),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refs, 1, .production_id = 9),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refs, 1, .production_id = 9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 26),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 26),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 23),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary_expressions, 1), REDUCE(aux_sym__primary_expressions_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT(115),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__primary_expressions, 1), REDUCE(aux_sym__primary_expressions_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__primary_expressions_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expressions, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expressions, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 15),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 15),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expressions, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expressions, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(62),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 22),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 22),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 16),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 16),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 19),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 19),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(368),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(55),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(375),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(346),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(57),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(356),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(59),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(314),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(328),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(262),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(248),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 25),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2), SHIFT_REPEAT(349),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2), SHIFT_REPEAT(351),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2), SHIFT_REPEAT(354),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(95),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(106),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(115),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(366),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(273),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(273),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(313),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(281),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(376),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(379),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(279),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(279),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(313),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(288),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 4, .production_id = 11),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4, .production_id = 24),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2, .production_id = 10),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_statement, 3, .production_id = 20),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_call, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 17),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_statement, 3, .production_id = 17),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 17),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case_statement, 6, .production_id = 27),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 10),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(234),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_section, 1, .production_id = 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_section, 1, .production_id = 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_section, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_section, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(235),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_text, 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_text, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_block, 4, .production_id = 12),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_block, 4, .production_id = 12),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_section, 2, .production_id = 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_section, 2, .production_id = 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 4, .production_id = 11),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_text, 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_text, 4),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_section, 3, .production_id = 4),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_section, 3, .production_id = 4),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(109),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(358),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(316),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(317),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(317),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2), SHIFT_REPEAT(355),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2), SHIFT_REPEAT(355),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_name, 1, .production_id = 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, .production_id = 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_name, 2, .production_id = 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 2, .production_id = 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 1),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 2, .production_id = 1),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(320),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(320),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2, .production_id = 5),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2, .production_id = 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_block, 2), SHIFT_REPEAT(323),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_block, 2), SHIFT_REPEAT(343),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_block, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case, 3, .production_id = 28),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_declaration_repeat1, 2), SHIFT_REPEAT(329),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_declaration_repeat1, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_declaration_repeat1, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toggle_value, 2, .production_id = 14),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(338),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_block, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toggle_value, 1, .production_id = 7),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2), SHIFT_REPEAT(373),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(350),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(108),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2, .production_id = 21),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 6),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_value, 1),
  [939] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 4, .production_id = 13),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_toggle, 3, .production_id = 8),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_gupta_external_scanner_create(void);
void tree_sitter_gupta_external_scanner_destroy(void *);
bool tree_sitter_gupta_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_gupta_external_scanner_serialize(void *, char *);
void tree_sitter_gupta_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gupta(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_gupta_external_scanner_create,
      tree_sitter_gupta_external_scanner_destroy,
      tree_sitter_gupta_external_scanner_scan,
      tree_sitter_gupta_external_scanner_serialize,
      tree_sitter_gupta_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
