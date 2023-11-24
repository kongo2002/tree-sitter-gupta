#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 324
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 4
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
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_STAR = 27,
  anon_sym_PERCENT = 28,
  anon_sym_PIPE = 29,
  anon_sym_AMP = 30,
  anon_sym_CARET = 31,
  anon_sym_LT_LT = 32,
  anon_sym_GT_GT = 33,
  anon_sym_NOT = 34,
  anon_sym_AND = 35,
  anon_sym_OR = 36,
  anon_sym_Select = 37,
  anon_sym_Case = 38,
  anon_sym_Default = 39,
  anon_sym_If = 40,
  anon_sym_When = 41,
  anon_sym_Else = 42,
  anon_sym_On = 43,
  anon_sym_Loop = 44,
  anon_sym_While = 45,
  anon_sym_Call = 46,
  anon_sym_Return = 47,
  anon_sym_DOT = 48,
  anon_sym_Set = 49,
  sym_type_name = 50,
  sym_true = 51,
  sym_false = 52,
  sym_break = 53,
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
  sym_boolean_operator = 92,
  sym__simple_statement = 93,
  sym_select_case_statement = 94,
  sym_select_case = 95,
  sym_default_case = 96,
  sym_if_statement = 97,
  sym_when_statement = 98,
  sym_else_if_statement = 99,
  sym_on_statement = 100,
  sym_loop = 101,
  sym_while = 102,
  sym_else_statement = 103,
  sym_explicit_call = 104,
  sym_return_statement = 105,
  sym_ref = 106,
  sym_refs = 107,
  sym_assignment = 108,
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
  anon_alias_sym_ref = 130,
  anon_alias_sym_value = 131,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_NOT] = "NOT",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_Select] = "Select",
  [anon_sym_Case] = "Case",
  [anon_sym_Default] = "Default",
  [anon_sym_If] = "If",
  [anon_sym_When] = "When",
  [anon_sym_Else] = "Else",
  [anon_sym_On] = "On",
  [anon_sym_Loop] = "Loop",
  [anon_sym_While] = "While",
  [anon_sym_Call] = "Call",
  [anon_sym_Return] = "Return",
  [anon_sym_DOT] = ".",
  [anon_sym_Set] = "Set",
  [sym_type_name] = "type_name",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_break] = "break",
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
  [sym_array_expression] = "array_expression",
  [sym_call] = "call",
  [sym_function] = "function",
  [sym_argument_list] = "argument_list",
  [sym_comparison_operator] = "comparison_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_not_operator] = "not_operator",
  [sym_boolean_operator] = "boolean_operator",
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
  [anon_alias_sym_ref] = "ref",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_Select] = anon_sym_Select,
  [anon_sym_Case] = anon_sym_Case,
  [anon_sym_Default] = anon_sym_Default,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_When] = anon_sym_When,
  [anon_sym_Else] = anon_sym_Else,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_Loop] = anon_sym_Loop,
  [anon_sym_While] = anon_sym_While,
  [anon_sym_Call] = anon_sym_Call,
  [anon_sym_Return] = anon_sym_Return,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Set] = anon_sym_Set,
  [sym_type_name] = sym_type_name,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_break] = sym_break,
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
  [sym_boolean_operator] = sym_boolean_operator,
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
  [anon_alias_sym_ref] = anon_alias_sym_ref,
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
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_When] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_On] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_While] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
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
  [sym_break] = {
    .visible = true,
    .named = true,
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
    .named = true,
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
  [sym_boolean_operator] = {
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
  [anon_alias_sym_ref] = {
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
  [2] = {.index = 0, .length = 1},
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
  [1] = {
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
    [0] = anon_alias_sym_ref,
  },
  [12] = {
    [1] = anon_alias_sym_ident,
  },
  [14] = {
    [0] = anon_alias_sym_value,
    [1] = anon_alias_sym_value,
  },
  [18] = {
    [0] = anon_alias_sym_ref,
    [1] = anon_alias_sym_ref,
  },
  [21] = {
    [1] = anon_alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_array_expression, 2,
    sym_array_expression,
    anon_alias_sym_ref,
  sym_ref, 2,
    sym_ref,
    anon_alias_sym_ref,
  aux_sym_declaration_name_repeat1, 2,
    aux_sym_declaration_name_repeat1,
    anon_alias_sym_declaration,
  aux_sym_toggle_value_repeat1, 2,
    aux_sym_toggle_value_repeat1,
    anon_alias_sym_value,
  aux_sym_refs_repeat1, 2,
    aux_sym_refs_repeat1,
    anon_alias_sym_ref,
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 22,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 27,
  [34] = 34,
  [35] = 32,
  [36] = 26,
  [37] = 37,
  [38] = 28,
  [39] = 28,
  [40] = 26,
  [41] = 41,
  [42] = 32,
  [43] = 43,
  [44] = 32,
  [45] = 45,
  [46] = 46,
  [47] = 34,
  [48] = 27,
  [49] = 49,
  [50] = 34,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 52,
  [55] = 55,
  [56] = 3,
  [57] = 5,
  [58] = 3,
  [59] = 4,
  [60] = 4,
  [61] = 6,
  [62] = 5,
  [63] = 63,
  [64] = 8,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 67,
  [73] = 68,
  [74] = 74,
  [75] = 75,
  [76] = 63,
  [77] = 77,
  [78] = 78,
  [79] = 70,
  [80] = 78,
  [81] = 78,
  [82] = 21,
  [83] = 19,
  [84] = 71,
  [85] = 77,
  [86] = 18,
  [87] = 78,
  [88] = 77,
  [89] = 75,
  [90] = 74,
  [91] = 71,
  [92] = 9,
  [93] = 10,
  [94] = 70,
  [95] = 20,
  [96] = 65,
  [97] = 63,
  [98] = 77,
  [99] = 75,
  [100] = 74,
  [101] = 71,
  [102] = 70,
  [103] = 68,
  [104] = 67,
  [105] = 17,
  [106] = 11,
  [107] = 16,
  [108] = 65,
  [109] = 14,
  [110] = 15,
  [111] = 12,
  [112] = 67,
  [113] = 7,
  [114] = 6,
  [115] = 13,
  [116] = 68,
  [117] = 12,
  [118] = 10,
  [119] = 15,
  [120] = 9,
  [121] = 19,
  [122] = 20,
  [123] = 18,
  [124] = 17,
  [125] = 11,
  [126] = 16,
  [127] = 14,
  [128] = 13,
  [129] = 21,
  [130] = 7,
  [131] = 8,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 51,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 51,
  [150] = 55,
  [151] = 5,
  [152] = 3,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 55,
  [162] = 4,
  [163] = 163,
  [164] = 164,
  [165] = 9,
  [166] = 21,
  [167] = 7,
  [168] = 13,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 171,
  [173] = 8,
  [174] = 10,
  [175] = 12,
  [176] = 171,
  [177] = 177,
  [178] = 20,
  [179] = 179,
  [180] = 171,
  [181] = 16,
  [182] = 11,
  [183] = 14,
  [184] = 18,
  [185] = 19,
  [186] = 15,
  [187] = 17,
  [188] = 188,
  [189] = 179,
  [190] = 190,
  [191] = 177,
  [192] = 169,
  [193] = 193,
  [194] = 170,
  [195] = 145,
  [196] = 146,
  [197] = 197,
  [198] = 190,
  [199] = 188,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 203,
  [208] = 146,
  [209] = 200,
  [210] = 202,
  [211] = 145,
  [212] = 212,
  [213] = 213,
  [214] = 213,
  [215] = 215,
  [216] = 215,
  [217] = 215,
  [218] = 218,
  [219] = 215,
  [220] = 213,
  [221] = 213,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 138,
  [227] = 227,
  [228] = 134,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 230,
  [233] = 233,
  [234] = 230,
  [235] = 235,
  [236] = 230,
  [237] = 134,
  [238] = 238,
  [239] = 138,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 141,
  [250] = 148,
  [251] = 251,
  [252] = 251,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 144,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 268,
  [270] = 270,
  [271] = 265,
  [272] = 272,
  [273] = 272,
  [274] = 274,
  [275] = 267,
  [276] = 276,
  [277] = 277,
  [278] = 262,
  [279] = 272,
  [280] = 280,
  [281] = 262,
  [282] = 141,
  [283] = 276,
  [284] = 284,
  [285] = 285,
  [286] = 276,
  [287] = 287,
  [288] = 276,
  [289] = 148,
  [290] = 272,
  [291] = 291,
  [292] = 144,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 296,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 296,
  [303] = 300,
  [304] = 304,
  [305] = 296,
  [306] = 300,
  [307] = 299,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 313,
  [315] = 315,
  [316] = 316,
  [317] = 310,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
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
      if (eof) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (lookahead == '\r') SKIP(45)
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(159);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(173);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '~') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(59);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(55);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(123);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') ADVANCE(124);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(124);
      if (lookahead != 0) ADVANCE(132);
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
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(255);
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
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(138);
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
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      if (lookahead == '\r') SKIP(37)
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(159);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '~') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(159);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '|') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(39)
      if (lookahead == '\r') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 44:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(58);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (lookahead == '\r') SKIP(45)
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(159);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(173);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '~') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == '!') ADVANCE(253);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'D') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(210);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '\r') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(58);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(59);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'g') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 's') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead == 'u') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_section_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == '\r') ADVANCE(124);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__description_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_MenuActions);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_MenuActions);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ApplicationActions);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ApplicationActions);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_MessageActions);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_MessageActions);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(144);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'g') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'p') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '_') ADVANCE(243);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == '_') ADVANCE(243);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOTdata);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOTenddata);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'W') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Call);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Case);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Loop);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_When);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_While);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Return);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Select);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46, .external_lex_state = 2},
  [2] = {.lex_state = 37, .external_lex_state = 3},
  [3] = {.lex_state = 38, .external_lex_state = 4},
  [4] = {.lex_state = 38, .external_lex_state = 4},
  [5] = {.lex_state = 38, .external_lex_state = 4},
  [6] = {.lex_state = 37, .external_lex_state = 4},
  [7] = {.lex_state = 37, .external_lex_state = 4},
  [8] = {.lex_state = 37, .external_lex_state = 4},
  [9] = {.lex_state = 37, .external_lex_state = 4},
  [10] = {.lex_state = 37, .external_lex_state = 4},
  [11] = {.lex_state = 37, .external_lex_state = 4},
  [12] = {.lex_state = 37, .external_lex_state = 4},
  [13] = {.lex_state = 37, .external_lex_state = 4},
  [14] = {.lex_state = 37, .external_lex_state = 4},
  [15] = {.lex_state = 37, .external_lex_state = 4},
  [16] = {.lex_state = 37, .external_lex_state = 4},
  [17] = {.lex_state = 37, .external_lex_state = 4},
  [18] = {.lex_state = 37, .external_lex_state = 4},
  [19] = {.lex_state = 37, .external_lex_state = 4},
  [20] = {.lex_state = 37, .external_lex_state = 4},
  [21] = {.lex_state = 37, .external_lex_state = 4},
  [22] = {.lex_state = 37, .external_lex_state = 5},
  [23] = {.lex_state = 37, .external_lex_state = 5},
  [24] = {.lex_state = 37, .external_lex_state = 5},
  [25] = {.lex_state = 37, .external_lex_state = 5},
  [26] = {.lex_state = 37, .external_lex_state = 4},
  [27] = {.lex_state = 37, .external_lex_state = 6},
  [28] = {.lex_state = 37, .external_lex_state = 6},
  [29] = {.lex_state = 37, .external_lex_state = 6},
  [30] = {.lex_state = 37, .external_lex_state = 4},
  [31] = {.lex_state = 37, .external_lex_state = 6},
  [32] = {.lex_state = 37, .external_lex_state = 6},
  [33] = {.lex_state = 37, .external_lex_state = 6},
  [34] = {.lex_state = 37, .external_lex_state = 6},
  [35] = {.lex_state = 37, .external_lex_state = 6},
  [36] = {.lex_state = 37, .external_lex_state = 4},
  [37] = {.lex_state = 37, .external_lex_state = 6},
  [38] = {.lex_state = 37, .external_lex_state = 6},
  [39] = {.lex_state = 37, .external_lex_state = 6},
  [40] = {.lex_state = 37, .external_lex_state = 4},
  [41] = {.lex_state = 37, .external_lex_state = 6},
  [42] = {.lex_state = 37, .external_lex_state = 6},
  [43] = {.lex_state = 37, .external_lex_state = 6},
  [44] = {.lex_state = 37, .external_lex_state = 6},
  [45] = {.lex_state = 37, .external_lex_state = 6},
  [46] = {.lex_state = 37, .external_lex_state = 6},
  [47] = {.lex_state = 37, .external_lex_state = 6},
  [48] = {.lex_state = 37, .external_lex_state = 6},
  [49] = {.lex_state = 37, .external_lex_state = 6},
  [50] = {.lex_state = 37, .external_lex_state = 6},
  [51] = {.lex_state = 37, .external_lex_state = 4},
  [52] = {.lex_state = 37, .external_lex_state = 2},
  [53] = {.lex_state = 37, .external_lex_state = 2},
  [54] = {.lex_state = 37, .external_lex_state = 2},
  [55] = {.lex_state = 37, .external_lex_state = 4},
  [56] = {.lex_state = 38, .external_lex_state = 7},
  [57] = {.lex_state = 38, .external_lex_state = 7},
  [58] = {.lex_state = 38, .external_lex_state = 8},
  [59] = {.lex_state = 38, .external_lex_state = 7},
  [60] = {.lex_state = 38, .external_lex_state = 8},
  [61] = {.lex_state = 37, .external_lex_state = 7},
  [62] = {.lex_state = 38, .external_lex_state = 8},
  [63] = {.lex_state = 37, .external_lex_state = 6},
  [64] = {.lex_state = 37, .external_lex_state = 7},
  [65] = {.lex_state = 37, .external_lex_state = 6},
  [66] = {.lex_state = 37, .external_lex_state = 6},
  [67] = {.lex_state = 37, .external_lex_state = 6},
  [68] = {.lex_state = 37, .external_lex_state = 6},
  [69] = {.lex_state = 37, .external_lex_state = 6},
  [70] = {.lex_state = 37, .external_lex_state = 6},
  [71] = {.lex_state = 37, .external_lex_state = 6},
  [72] = {.lex_state = 37, .external_lex_state = 6},
  [73] = {.lex_state = 37, .external_lex_state = 6},
  [74] = {.lex_state = 37, .external_lex_state = 6},
  [75] = {.lex_state = 37, .external_lex_state = 6},
  [76] = {.lex_state = 37, .external_lex_state = 6},
  [77] = {.lex_state = 37, .external_lex_state = 6},
  [78] = {.lex_state = 37, .external_lex_state = 6},
  [79] = {.lex_state = 37, .external_lex_state = 6},
  [80] = {.lex_state = 37, .external_lex_state = 6},
  [81] = {.lex_state = 37, .external_lex_state = 6},
  [82] = {.lex_state = 37, .external_lex_state = 7},
  [83] = {.lex_state = 37, .external_lex_state = 7},
  [84] = {.lex_state = 37, .external_lex_state = 6},
  [85] = {.lex_state = 37, .external_lex_state = 6},
  [86] = {.lex_state = 37, .external_lex_state = 7},
  [87] = {.lex_state = 37, .external_lex_state = 6},
  [88] = {.lex_state = 37, .external_lex_state = 6},
  [89] = {.lex_state = 37, .external_lex_state = 6},
  [90] = {.lex_state = 37, .external_lex_state = 6},
  [91] = {.lex_state = 37, .external_lex_state = 6},
  [92] = {.lex_state = 37, .external_lex_state = 7},
  [93] = {.lex_state = 37, .external_lex_state = 7},
  [94] = {.lex_state = 37, .external_lex_state = 6},
  [95] = {.lex_state = 37, .external_lex_state = 7},
  [96] = {.lex_state = 37, .external_lex_state = 6},
  [97] = {.lex_state = 37, .external_lex_state = 6},
  [98] = {.lex_state = 37, .external_lex_state = 6},
  [99] = {.lex_state = 37, .external_lex_state = 6},
  [100] = {.lex_state = 37, .external_lex_state = 6},
  [101] = {.lex_state = 37, .external_lex_state = 6},
  [102] = {.lex_state = 37, .external_lex_state = 6},
  [103] = {.lex_state = 37, .external_lex_state = 6},
  [104] = {.lex_state = 37, .external_lex_state = 6},
  [105] = {.lex_state = 37, .external_lex_state = 7},
  [106] = {.lex_state = 37, .external_lex_state = 7},
  [107] = {.lex_state = 37, .external_lex_state = 7},
  [108] = {.lex_state = 37, .external_lex_state = 6},
  [109] = {.lex_state = 37, .external_lex_state = 7},
  [110] = {.lex_state = 37, .external_lex_state = 7},
  [111] = {.lex_state = 37, .external_lex_state = 7},
  [112] = {.lex_state = 37, .external_lex_state = 6},
  [113] = {.lex_state = 37, .external_lex_state = 7},
  [114] = {.lex_state = 37, .external_lex_state = 8},
  [115] = {.lex_state = 37, .external_lex_state = 7},
  [116] = {.lex_state = 37, .external_lex_state = 6},
  [117] = {.lex_state = 37, .external_lex_state = 8},
  [118] = {.lex_state = 37, .external_lex_state = 8},
  [119] = {.lex_state = 37, .external_lex_state = 8},
  [120] = {.lex_state = 37, .external_lex_state = 8},
  [121] = {.lex_state = 37, .external_lex_state = 8},
  [122] = {.lex_state = 37, .external_lex_state = 8},
  [123] = {.lex_state = 37, .external_lex_state = 8},
  [124] = {.lex_state = 37, .external_lex_state = 8},
  [125] = {.lex_state = 37, .external_lex_state = 8},
  [126] = {.lex_state = 37, .external_lex_state = 8},
  [127] = {.lex_state = 37, .external_lex_state = 8},
  [128] = {.lex_state = 37, .external_lex_state = 8},
  [129] = {.lex_state = 37, .external_lex_state = 8},
  [130] = {.lex_state = 37, .external_lex_state = 8},
  [131] = {.lex_state = 37, .external_lex_state = 8},
  [132] = {.lex_state = 46, .external_lex_state = 2},
  [133] = {.lex_state = 46, .external_lex_state = 2},
  [134] = {.lex_state = 37, .external_lex_state = 4},
  [135] = {.lex_state = 46, .external_lex_state = 4},
  [136] = {.lex_state = 46, .external_lex_state = 4},
  [137] = {.lex_state = 46, .external_lex_state = 4},
  [138] = {.lex_state = 37, .external_lex_state = 4},
  [139] = {.lex_state = 46, .external_lex_state = 2},
  [140] = {.lex_state = 46, .external_lex_state = 2},
  [141] = {.lex_state = 37, .external_lex_state = 4},
  [142] = {.lex_state = 37, .external_lex_state = 7},
  [143] = {.lex_state = 37, .external_lex_state = 4},
  [144] = {.lex_state = 37, .external_lex_state = 4},
  [145] = {.lex_state = 37, .external_lex_state = 4},
  [146] = {.lex_state = 37, .external_lex_state = 4},
  [147] = {.lex_state = 37, .external_lex_state = 4},
  [148] = {.lex_state = 37, .external_lex_state = 4},
  [149] = {.lex_state = 37, .external_lex_state = 8},
  [150] = {.lex_state = 37, .external_lex_state = 7},
  [151] = {.lex_state = 38},
  [152] = {.lex_state = 38},
  [153] = {.lex_state = 37, .external_lex_state = 9},
  [154] = {.lex_state = 37, .external_lex_state = 4},
  [155] = {.lex_state = 37, .external_lex_state = 4},
  [156] = {.lex_state = 37, .external_lex_state = 4},
  [157] = {.lex_state = 37, .external_lex_state = 4},
  [158] = {.lex_state = 37, .external_lex_state = 4},
  [159] = {.lex_state = 37, .external_lex_state = 4},
  [160] = {.lex_state = 37, .external_lex_state = 4},
  [161] = {.lex_state = 37, .external_lex_state = 8},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 37, .external_lex_state = 4},
  [164] = {.lex_state = 37, .external_lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 46, .external_lex_state = 10},
  [170] = {.lex_state = 44, .external_lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 46, .external_lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 46, .external_lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 46, .external_lex_state = 10},
  [189] = {.lex_state = 46, .external_lex_state = 9},
  [190] = {.lex_state = 46, .external_lex_state = 10},
  [191] = {.lex_state = 46, .external_lex_state = 9},
  [192] = {.lex_state = 46, .external_lex_state = 9},
  [193] = {.lex_state = 46, .external_lex_state = 10},
  [194] = {.lex_state = 2, .external_lex_state = 4},
  [195] = {.lex_state = 46, .external_lex_state = 2},
  [196] = {.lex_state = 46, .external_lex_state = 2},
  [197] = {.lex_state = 46, .external_lex_state = 2},
  [198] = {.lex_state = 46, .external_lex_state = 9},
  [199] = {.lex_state = 46, .external_lex_state = 9},
  [200] = {.lex_state = 46, .external_lex_state = 2},
  [201] = {.lex_state = 46, .external_lex_state = 9},
  [202] = {.lex_state = 46, .external_lex_state = 2},
  [203] = {.lex_state = 46, .external_lex_state = 2},
  [204] = {.lex_state = 46, .external_lex_state = 2},
  [205] = {.lex_state = 46, .external_lex_state = 4},
  [206] = {.lex_state = 37, .external_lex_state = 4},
  [207] = {.lex_state = 46, .external_lex_state = 4},
  [208] = {.lex_state = 46, .external_lex_state = 4},
  [209] = {.lex_state = 46, .external_lex_state = 4},
  [210] = {.lex_state = 46, .external_lex_state = 4},
  [211] = {.lex_state = 46, .external_lex_state = 4},
  [212] = {.lex_state = 37, .external_lex_state = 4},
  [213] = {.lex_state = 0, .external_lex_state = 11},
  [214] = {.lex_state = 0, .external_lex_state = 11},
  [215] = {.lex_state = 0, .external_lex_state = 11},
  [216] = {.lex_state = 0, .external_lex_state = 11},
  [217] = {.lex_state = 0, .external_lex_state = 11},
  [218] = {.lex_state = 37, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 11},
  [220] = {.lex_state = 0, .external_lex_state = 11},
  [221] = {.lex_state = 0, .external_lex_state = 11},
  [222] = {.lex_state = 0, .external_lex_state = 11},
  [223] = {.lex_state = 36, .external_lex_state = 12},
  [224] = {.lex_state = 36, .external_lex_state = 12},
  [225] = {.lex_state = 36, .external_lex_state = 12},
  [226] = {.lex_state = 37, .external_lex_state = 7},
  [227] = {.lex_state = 37},
  [228] = {.lex_state = 37, .external_lex_state = 7},
  [229] = {.lex_state = 36, .external_lex_state = 12},
  [230] = {.lex_state = 37, .external_lex_state = 7},
  [231] = {.lex_state = 3, .external_lex_state = 12},
  [232] = {.lex_state = 37, .external_lex_state = 7},
  [233] = {.lex_state = 0, .external_lex_state = 11},
  [234] = {.lex_state = 37, .external_lex_state = 7},
  [235] = {.lex_state = 0, .external_lex_state = 11},
  [236] = {.lex_state = 37, .external_lex_state = 7},
  [237] = {.lex_state = 37, .external_lex_state = 8},
  [238] = {.lex_state = 37, .external_lex_state = 9},
  [239] = {.lex_state = 37, .external_lex_state = 8},
  [240] = {.lex_state = 3, .external_lex_state = 12},
  [241] = {.lex_state = 37},
  [242] = {.lex_state = 37, .external_lex_state = 8},
  [243] = {.lex_state = 38},
  [244] = {.lex_state = 38},
  [245] = {.lex_state = 4, .external_lex_state = 13},
  [246] = {.lex_state = 4, .external_lex_state = 13},
  [247] = {.lex_state = 37, .external_lex_state = 8},
  [248] = {.lex_state = 37, .external_lex_state = 4},
  [249] = {.lex_state = 37, .external_lex_state = 7},
  [250] = {.lex_state = 37, .external_lex_state = 7},
  [251] = {.lex_state = 4, .external_lex_state = 13},
  [252] = {.lex_state = 4, .external_lex_state = 13},
  [253] = {.lex_state = 37, .external_lex_state = 8},
  [254] = {.lex_state = 37, .external_lex_state = 4},
  [255] = {.lex_state = 3, .external_lex_state = 12},
  [256] = {.lex_state = 37, .external_lex_state = 7},
  [257] = {.lex_state = 37, .external_lex_state = 7},
  [258] = {.lex_state = 37, .external_lex_state = 8},
  [259] = {.lex_state = 38},
  [260] = {.lex_state = 38},
  [261] = {.lex_state = 37, .external_lex_state = 8},
  [262] = {.lex_state = 4, .external_lex_state = 14},
  [263] = {.lex_state = 38},
  [264] = {.lex_state = 0, .external_lex_state = 7},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 38},
  [267] = {.lex_state = 0, .external_lex_state = 12},
  [268] = {.lex_state = 4, .external_lex_state = 8},
  [269] = {.lex_state = 4, .external_lex_state = 8},
  [270] = {.lex_state = 36, .external_lex_state = 12},
  [271] = {.lex_state = 4, .external_lex_state = 14},
  [272] = {.lex_state = 0, .external_lex_state = 7},
  [273] = {.lex_state = 0, .external_lex_state = 7},
  [274] = {.lex_state = 4, .external_lex_state = 13},
  [275] = {.lex_state = 0, .external_lex_state = 12},
  [276] = {.lex_state = 37, .external_lex_state = 7},
  [277] = {.lex_state = 37, .external_lex_state = 8},
  [278] = {.lex_state = 4, .external_lex_state = 14},
  [279] = {.lex_state = 0, .external_lex_state = 7},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 4, .external_lex_state = 14},
  [282] = {.lex_state = 37, .external_lex_state = 8},
  [283] = {.lex_state = 37, .external_lex_state = 7},
  [284] = {.lex_state = 36, .external_lex_state = 12},
  [285] = {.lex_state = 4, .external_lex_state = 8},
  [286] = {.lex_state = 37, .external_lex_state = 7},
  [287] = {.lex_state = 37, .external_lex_state = 8},
  [288] = {.lex_state = 37, .external_lex_state = 7},
  [289] = {.lex_state = 37, .external_lex_state = 8},
  [290] = {.lex_state = 0, .external_lex_state = 7},
  [291] = {.lex_state = 37},
  [292] = {.lex_state = 37, .external_lex_state = 8},
  [293] = {.lex_state = 36, .external_lex_state = 12},
  [294] = {.lex_state = 36, .external_lex_state = 12},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0, .external_lex_state = 8},
  [299] = {.lex_state = 0, .external_lex_state = 8},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 37},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 39},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0, .external_lex_state = 8},
  [308] = {.lex_state = 0, .external_lex_state = 8},
  [309] = {.lex_state = 0, .external_lex_state = 8},
  [310] = {.lex_state = 0, .external_lex_state = 12},
  [311] = {.lex_state = 0, .external_lex_state = 12},
  [312] = {.lex_state = 0, .external_lex_state = 12},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 12},
  [316] = {.lex_state = 39},
  [317] = {.lex_state = 0, .external_lex_state = 12},
  [318] = {.lex_state = 0, .external_lex_state = 12},
  [319] = {.lex_state = 37},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 37},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 39},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_Select] = ACTIONS(1),
    [anon_sym_Case] = ACTIONS(1),
    [anon_sym_Default] = ACTIONS(1),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_When] = ACTIONS(1),
    [anon_sym_Else] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_Loop] = ACTIONS(1),
    [anon_sym_While] = ACTIONS(1),
    [anon_sym_Call] = ACTIONS(1),
    [anon_sym_Return] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
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
    [sym_sections] = STATE(320),
    [sym_section] = STATE(132),
    [sym_declaration_name] = STATE(267),
    [sym_section_declaration] = STATE(317),
    [sym_section_toggle] = STATE(317),
    [sym_description_section] = STATE(204),
    [sym_action_section] = STATE(204),
    [sym_multiline_comment] = STATE(132),
    [sym_data_block] = STATE(132),
    [aux_sym_sections_repeat1] = STATE(132),
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
      anon_sym_NOT,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
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
    STATE(147), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(6), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
    ACTIONS(25), 11,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [71] = 4,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 4,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [115] = 3,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 4,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [156] = 2,
    ACTIONS(45), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(43), 30,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_DOT,
      anon_sym_Set,
      sym_break,
  [195] = 12,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 14,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [253] = 2,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [290] = 3,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 25,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [329] = 2,
    ACTIONS(75), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(73), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [366] = 2,
    ACTIONS(79), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(77), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [403] = 5,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 21,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [446] = 7,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 19,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [493] = 2,
    ACTIONS(83), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(81), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [530] = 2,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(85), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [567] = 2,
    ACTIONS(91), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(89), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [604] = 6,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 20,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [649] = 4,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 23,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [690] = 2,
    ACTIONS(95), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(93), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [727] = 2,
    ACTIONS(99), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(97), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [764] = 2,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(101), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [801] = 2,
    ACTIONS(107), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(105), 28,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [838] = 14,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(236), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [895] = 14,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(230), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [952] = 14,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(234), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1009] = 14,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(232), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1066] = 14,
    ACTIONS(131), 1,
      anon_sym_Select,
    ACTIONS(133), 1,
      anon_sym_If,
    ACTIONS(135), 1,
      anon_sym_When,
    ACTIONS(137), 1,
      anon_sym_Else,
    ACTIONS(139), 1,
      anon_sym_On,
    ACTIONS(141), 1,
      anon_sym_Loop,
    ACTIONS(143), 1,
      anon_sym_While,
    ACTIONS(145), 1,
      anon_sym_Call,
    ACTIONS(147), 1,
      anon_sym_Return,
    ACTIONS(149), 1,
      anon_sym_Set,
    ACTIONS(151), 1,
      sym_break,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__dedent,
    STATE(30), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1122] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(256), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1176] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(250), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1230] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(247), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1284] = 14,
    ACTIONS(171), 1,
      anon_sym_Select,
    ACTIONS(174), 1,
      anon_sym_If,
    ACTIONS(177), 1,
      anon_sym_When,
    ACTIONS(180), 1,
      anon_sym_Else,
    ACTIONS(183), 1,
      anon_sym_On,
    ACTIONS(186), 1,
      anon_sym_Loop,
    ACTIONS(189), 1,
      anon_sym_While,
    ACTIONS(192), 1,
      anon_sym_Call,
    ACTIONS(195), 1,
      anon_sym_Return,
    ACTIONS(198), 1,
      anon_sym_Set,
    ACTIONS(201), 1,
      sym_break,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__dedent,
    STATE(30), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1340] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(261), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1394] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(276), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1448] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NOT,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(144), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(6), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1502] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NOT,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(141), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(6), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1556] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(286), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1610] = 14,
    ACTIONS(131), 1,
      anon_sym_Select,
    ACTIONS(133), 1,
      anon_sym_If,
    ACTIONS(135), 1,
      anon_sym_When,
    ACTIONS(137), 1,
      anon_sym_Else,
    ACTIONS(139), 1,
      anon_sym_On,
    ACTIONS(141), 1,
      anon_sym_Loop,
    ACTIONS(143), 1,
      anon_sym_While,
    ACTIONS(145), 1,
      anon_sym_Call,
    ACTIONS(147), 1,
      anon_sym_Return,
    ACTIONS(149), 1,
      anon_sym_Set,
    ACTIONS(151), 1,
      sym_break,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__dedent,
    STATE(30), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1666] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NOT,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(143), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(6), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1720] = 13,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NOT,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string_start,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(27), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(148), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(6), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1774] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(289), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1828] = 14,
    ACTIONS(131), 1,
      anon_sym_Select,
    ACTIONS(133), 1,
      anon_sym_If,
    ACTIONS(135), 1,
      anon_sym_When,
    ACTIONS(137), 1,
      anon_sym_Else,
    ACTIONS(139), 1,
      anon_sym_On,
    ACTIONS(141), 1,
      anon_sym_Loop,
    ACTIONS(143), 1,
      anon_sym_While,
    ACTIONS(145), 1,
      anon_sym_Call,
    ACTIONS(147), 1,
      anon_sym_Return,
    ACTIONS(149), 1,
      anon_sym_Set,
    ACTIONS(151), 1,
      sym_break,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__dedent,
    STATE(30), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [1884] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(253), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1938] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(288), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1992] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(242), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2046] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(283), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2100] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(258), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2154] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(257), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2208] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(282), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2262] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(292), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2316] = 13,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_NOT,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(169), 1,
      sym_string_start,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(165), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(287), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2370] = 13,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_NOT,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym_string_start,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(119), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(249), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(61), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2424] = 7,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(213), 16,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [2465] = 13,
    ACTIONS(131), 1,
      anon_sym_Select,
    ACTIONS(133), 1,
      anon_sym_If,
    ACTIONS(135), 1,
      anon_sym_When,
    ACTIONS(137), 1,
      anon_sym_Else,
    ACTIONS(139), 1,
      anon_sym_On,
    ACTIONS(141), 1,
      anon_sym_Loop,
    ACTIONS(143), 1,
      anon_sym_While,
    ACTIONS(145), 1,
      anon_sym_Call,
    ACTIONS(147), 1,
      anon_sym_Return,
    ACTIONS(149), 1,
      anon_sym_Set,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_break,
    STATE(36), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [2518] = 13,
    ACTIONS(131), 1,
      anon_sym_Select,
    ACTIONS(133), 1,
      anon_sym_If,
    ACTIONS(135), 1,
      anon_sym_When,
    ACTIONS(137), 1,
      anon_sym_Else,
    ACTIONS(139), 1,
      anon_sym_On,
    ACTIONS(141), 1,
      anon_sym_Loop,
    ACTIONS(143), 1,
      anon_sym_While,
    ACTIONS(145), 1,
      anon_sym_Call,
    ACTIONS(147), 1,
      anon_sym_Return,
    ACTIONS(149), 1,
      anon_sym_Set,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_break,
    STATE(40), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [2571] = 13,
    ACTIONS(131), 1,
      anon_sym_Select,
    ACTIONS(133), 1,
      anon_sym_If,
    ACTIONS(135), 1,
      anon_sym_When,
    ACTIONS(137), 1,
      anon_sym_Else,
    ACTIONS(139), 1,
      anon_sym_On,
    ACTIONS(141), 1,
      anon_sym_Loop,
    ACTIONS(143), 1,
      anon_sym_While,
    ACTIONS(145), 1,
      anon_sym_Call,
    ACTIONS(147), 1,
      anon_sym_Return,
    ACTIONS(149), 1,
      anon_sym_Set,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_break,
    STATE(26), 14,
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
      sym_multiline_comment,
      aux_sym__block_repeat1,
  [2624] = 7,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(223), 15,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [2664] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [2697] = 2,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(43), 20,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
  [2725] = 4,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [2757] = 3,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [2787] = 3,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 3,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [2816] = 11,
    ACTIONS(231), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(243), 1,
      anon_sym_CARET,
    STATE(228), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(235), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2861] = 2,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(43), 19,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
  [2888] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(249), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(247), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(126), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2932] = 3,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 15,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [2960] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_string_start,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(257), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(180), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3004] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(265), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(263), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(171), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3048] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(269), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(267), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(17), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3092] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(273), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(271), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(11), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3136] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(277), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(275), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(16), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3180] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(281), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(279), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(12), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3224] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(285), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(283), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(8), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3268] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(289), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(287), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(187), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3312] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(293), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(291), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(182), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3356] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(297), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(295), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(55), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3400] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(299), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(51), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3444] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(305), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(303), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(181), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3488] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(309), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(307), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(7), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3532] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(313), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(311), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(184), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3576] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(317), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(315), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(175), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3620] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(321), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(319), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(86), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3664] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(325), 1,
      sym_float,
    STATE(4), 1,
      sym_array_expression,
    STATE(21), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(323), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(18), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3708] = 2,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(105), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [3734] = 2,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(97), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [3760] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(329), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(327), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(173), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3804] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(333), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(331), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(167), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3848] = 2,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(93), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [3874] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(337), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(335), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(123), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3918] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(341), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(339), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(113), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3962] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(345), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(343), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(142), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4006] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(349), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(347), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(150), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4050] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(353), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(351), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(64), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4094] = 2,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(73), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4120] = 2,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(77), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4146] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(357), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(355), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(111), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4190] = 2,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(101), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4216] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(361), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(359), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(172), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4260] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(365), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(363), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(107), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4304] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(369), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(367), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(130), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4348] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(373), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(371), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(149), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4392] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(377), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(375), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(161), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4436] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(381), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(379), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(131), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4480] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(385), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(383), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(117), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4524] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(389), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(387), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(125), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4568] = 11,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_string_start,
    ACTIONS(393), 1,
      sym_float,
    STATE(60), 1,
      sym_array_expression,
    STATE(129), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(297), 1,
      sym_refs,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(391), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(124), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4612] = 4,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 13,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4642] = 5,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 11,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_AND,
      anon_sym_OR,
  [4674] = 6,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 10,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_AND,
      anon_sym_OR,
  [4708] = 11,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_string_start,
    ACTIONS(397), 1,
      sym_float,
    STATE(162), 1,
      sym_array_expression,
    STATE(166), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(305), 1,
      sym_refs,
    ACTIONS(255), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(395), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(176), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4752] = 2,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(85), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4778] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(89), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4804] = 7,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
  [4840] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(401), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(399), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(105), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4884] = 2,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(69), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4910] = 11,
    ACTIONS(405), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(413), 1,
      anon_sym_PIPE,
    ACTIONS(415), 1,
      anon_sym_AMP,
    ACTIONS(417), 1,
      anon_sym_CARET,
    STATE(237), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(407), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(65), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(409), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4954] = 2,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(81), 18,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [4980] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(423), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(82), 1,
      sym_function,
    STATE(259), 1,
      sym_ref,
    STATE(296), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(421), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(106), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [5024] = 7,
    ACTIONS(415), 1,
      anon_sym_AMP,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 8,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
  [5059] = 2,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(77), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5084] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(89), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5109] = 2,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(73), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5134] = 2,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(97), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5159] = 2,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(101), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5184] = 2,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(93), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5209] = 4,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 12,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5238] = 5,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 10,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_AND,
      anon_sym_OR,
  [5269] = 6,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 9,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_AND,
      anon_sym_OR,
  [5302] = 2,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(85), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5327] = 2,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(81), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5352] = 2,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(105), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5377] = 2,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(69), 17,
      sym__indent,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5402] = 3,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 14,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AND,
      anon_sym_OR,
  [5429] = 11,
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
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(317), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(9), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(133), 4,
      sym_section,
      sym_multiline_comment,
      sym_data_block,
      aux_sym_sections_repeat1,
  [5470] = 11,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      anon_sym_Description,
    ACTIONS(432), 1,
      anon_sym_Actions,
    ACTIONS(438), 1,
      sym_type_name,
    ACTIONS(441), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOTdata,
    STATE(267), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(317), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(435), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(133), 4,
      sym_section,
      sym_multiline_comment,
      sym_data_block,
      aux_sym_sections_repeat1,
  [5511] = 3,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    STATE(138), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(447), 15,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5535] = 10,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(449), 1,
      anon_sym_Description,
    ACTIONS(451), 1,
      anon_sym_Actions,
    ACTIONS(455), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(275), 1,
      sym_declaration_name,
    STATE(205), 2,
      sym_description_section,
      sym_action_section,
    STATE(310), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(453), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(136), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5573] = 10,
    ACTIONS(459), 1,
      anon_sym_Description,
    ACTIONS(462), 1,
      anon_sym_Actions,
    ACTIONS(468), 1,
      sym_type_name,
    ACTIONS(471), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__dedent,
    STATE(275), 1,
      sym_declaration_name,
    STATE(205), 2,
      sym_description_section,
      sym_action_section,
    STATE(310), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(465), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(136), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5611] = 10,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(449), 1,
      anon_sym_Description,
    ACTIONS(451), 1,
      anon_sym_Actions,
    ACTIONS(455), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__dedent,
    STATE(275), 1,
      sym_declaration_name,
    STATE(205), 2,
      sym_description_section,
      sym_action_section,
    STATE(310), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(453), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(136), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5649] = 3,
    ACTIONS(478), 1,
      anon_sym_PIPE_PIPE,
    STATE(138), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(213), 15,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5673] = 9,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(449), 1,
      anon_sym_Description,
    ACTIONS(451), 1,
      anon_sym_Actions,
    ACTIONS(455), 1,
      sym_comment,
    STATE(275), 1,
      sym_declaration_name,
    STATE(205), 2,
      sym_description_section,
      sym_action_section,
    STATE(310), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(453), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(135), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5708] = 9,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(449), 1,
      anon_sym_Description,
    ACTIONS(451), 1,
      anon_sym_Actions,
    ACTIONS(455), 1,
      sym_comment,
    STATE(275), 1,
      sym_declaration_name,
    STATE(205), 2,
      sym_description_section,
      sym_action_section,
    STATE(310), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(453), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(137), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5743] = 2,
    ACTIONS(481), 1,
      anon_sym_AND,
    ACTIONS(483), 14,
      sym__dedent,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5763] = 7,
    ACTIONS(239), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(213), 5,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [5793] = 3,
    ACTIONS(481), 1,
      anon_sym_AND,
    ACTIONS(485), 1,
      anon_sym_OR,
    ACTIONS(487), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5815] = 1,
    ACTIONS(483), 15,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5833] = 1,
    ACTIONS(489), 15,
      sym__dedent,
      anon_sym_Select,
      anon_sym_Case,
      anon_sym_Default,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5851] = 1,
    ACTIONS(491), 15,
      sym__dedent,
      anon_sym_Select,
      anon_sym_Case,
      anon_sym_Default,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5869] = 3,
    ACTIONS(481), 1,
      anon_sym_AND,
    ACTIONS(485), 1,
      anon_sym_OR,
    ACTIONS(493), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5891] = 1,
    ACTIONS(495), 15,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5909] = 7,
    ACTIONS(413), 1,
      anon_sym_PIPE,
    ACTIONS(415), 1,
      anon_sym_AMP,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(213), 4,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [5938] = 7,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(243), 1,
      anon_sym_CARET,
    ACTIONS(497), 1,
      anon_sym_PIPE,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(223), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [5967] = 1,
    ACTIONS(43), 14,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOT,
  [5984] = 3,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(35), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6005] = 2,
    ACTIONS(503), 1,
      sym__indent,
    ACTIONS(501), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6024] = 1,
    ACTIONS(505), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6040] = 1,
    ACTIONS(507), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6056] = 1,
    ACTIONS(509), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6072] = 1,
    ACTIONS(511), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6088] = 1,
    ACTIONS(513), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6104] = 1,
    ACTIONS(515), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6120] = 1,
    ACTIONS(517), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6136] = 7,
    ACTIONS(415), 1,
      anon_sym_AMP,
    ACTIONS(417), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      anon_sym_PIPE,
    ACTIONS(411), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(223), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(403), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6164] = 2,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(35), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6182] = 1,
    ACTIONS(521), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6198] = 1,
    ACTIONS(523), 13,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_When,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6214] = 1,
    ACTIONS(73), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6228] = 1,
    ACTIONS(105), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6242] = 1,
    ACTIONS(69), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6256] = 1,
    ACTIONS(81), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6270] = 4,
    ACTIONS(529), 1,
      sym__indent,
    STATE(179), 1,
      aux_sym_section_repeat2,
    ACTIONS(527), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6290] = 4,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 1,
      aux_sym_section_value_token1,
    STATE(200), 1,
      sym_description_text,
    ACTIONS(535), 8,
      anon_sym_Description,
      anon_sym_Actions,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_type_name,
      sym_comment,
      anon_sym_DOTdata,
  [6310] = 7,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    ACTIONS(545), 1,
      anon_sym_AMP,
    ACTIONS(547), 1,
      anon_sym_CARET,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6336] = 7,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    ACTIONS(545), 1,
      anon_sym_AMP,
    ACTIONS(547), 1,
      anon_sym_CARET,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6362] = 2,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 8,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6378] = 1,
    ACTIONS(77), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6392] = 6,
    ACTIONS(545), 1,
      anon_sym_AMP,
    ACTIONS(547), 1,
      anon_sym_CARET,
    ACTIONS(69), 2,
      anon_sym_RBRACK,
      anon_sym_PIPE,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6416] = 7,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    ACTIONS(545), 1,
      anon_sym_AMP,
    ACTIONS(547), 1,
      anon_sym_CARET,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6442] = 4,
    ACTIONS(529), 1,
      sym__indent,
    STATE(169), 1,
      aux_sym_section_repeat2,
    ACTIONS(557), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(555), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6462] = 1,
    ACTIONS(101), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6476] = 4,
    ACTIONS(563), 1,
      sym__indent,
    STATE(179), 1,
      aux_sym_section_repeat2,
    ACTIONS(561), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6496] = 7,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    ACTIONS(545), 1,
      anon_sym_AMP,
    ACTIONS(547), 1,
      anon_sym_CARET,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6522] = 5,
    ACTIONS(547), 1,
      anon_sym_CARET,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 3,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6544] = 4,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(549), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [6564] = 1,
    ACTIONS(85), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6578] = 1,
    ACTIONS(93), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6592] = 1,
    ACTIONS(97), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6606] = 1,
    ACTIONS(89), 11,
      anon_sym_SLASH,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6620] = 3,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(537), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 6,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6638] = 3,
    ACTIONS(572), 1,
      sym__indent,
    ACTIONS(570), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(568), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6655] = 4,
    ACTIONS(574), 1,
      sym__indent,
    STATE(189), 1,
      aux_sym_section_repeat2,
    ACTIONS(561), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(559), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6674] = 2,
    ACTIONS(579), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(577), 7,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6689] = 4,
    ACTIONS(581), 1,
      sym__indent,
    STATE(192), 1,
      aux_sym_section_repeat2,
    ACTIONS(557), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(555), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6708] = 4,
    ACTIONS(581), 1,
      sym__indent,
    STATE(189), 1,
      aux_sym_section_repeat2,
    ACTIONS(527), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(525), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6727] = 3,
    ACTIONS(587), 1,
      sym__indent,
    ACTIONS(585), 3,
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
  [6744] = 4,
    ACTIONS(531), 1,
      sym__dedent,
    ACTIONS(589), 1,
      aux_sym_section_value_token1,
    STATE(209), 1,
      sym_description_text,
    ACTIONS(535), 7,
      anon_sym_Description,
      anon_sym_Actions,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_type_name,
      sym_comment,
  [6763] = 2,
    ACTIONS(591), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(489), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6777] = 2,
    ACTIONS(593), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(491), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6791] = 2,
    ACTIONS(597), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6805] = 2,
    ACTIONS(579), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(577), 6,
      sym__indent,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6819] = 3,
    ACTIONS(599), 1,
      sym__indent,
    ACTIONS(570), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(568), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6835] = 2,
    ACTIONS(603), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(601), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6849] = 3,
    ACTIONS(609), 1,
      sym__indent,
    ACTIONS(605), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(607), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6865] = 2,
    ACTIONS(613), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(611), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6879] = 2,
    ACTIONS(617), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(615), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6893] = 2,
    ACTIONS(621), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(619), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6907] = 2,
    ACTIONS(621), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(619), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6920] = 5,
    ACTIONS(623), 1,
      anon_sym_Case,
    ACTIONS(625), 1,
      anon_sym_Default,
    ACTIONS(627), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__dedent,
    STATE(212), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [6939] = 2,
    ACTIONS(617), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(615), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6952] = 2,
    ACTIONS(593), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(491), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6965] = 2,
    ACTIONS(603), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(601), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6978] = 2,
    ACTIONS(613), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(611), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6991] = 2,
    ACTIONS(591), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(489), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [7004] = 5,
    ACTIONS(631), 1,
      anon_sym_Case,
    ACTIONS(634), 1,
      anon_sym_Default,
    ACTIONS(637), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__dedent,
    STATE(212), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [7023] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(646), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(215), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7041] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(648), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(216), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7059] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(650), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(222), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7077] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(652), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(222), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7095] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(654), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(222), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7113] = 4,
    ACTIONS(623), 1,
      anon_sym_Case,
    ACTIONS(625), 1,
      anon_sym_Default,
    ACTIONS(627), 1,
      sym_comment,
    STATE(206), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [7129] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(656), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(222), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7147] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(658), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(217), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7165] = 5,
    ACTIONS(644), 1,
      sym__not_escape_sequence,
    ACTIONS(660), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(642), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(219), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7183] = 5,
    ACTIONS(665), 1,
      sym__not_escape_sequence,
    ACTIONS(668), 1,
      sym_string_end,
    STATE(235), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(662), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(222), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7201] = 5,
    ACTIONS(670), 1,
      anon_sym_,
    ACTIONS(672), 1,
      anon_sym_SLASH,
    ACTIONS(676), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(674), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7218] = 5,
    ACTIONS(670), 1,
      anon_sym_,
    ACTIONS(672), 1,
      anon_sym_SLASH,
    ACTIONS(680), 1,
      sym__newline,
    STATE(223), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(678), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7235] = 5,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(685), 1,
      anon_sym_SLASH,
    ACTIONS(690), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(688), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7252] = 3,
    ACTIONS(692), 1,
      anon_sym_PIPE_PIPE,
    STATE(226), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(213), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7265] = 6,
    ACTIONS(695), 1,
      sym_identifier,
    STATE(21), 1,
      sym_function,
    STATE(158), 1,
      sym_call,
    STATE(259), 1,
      sym_ref,
    STATE(266), 1,
      sym_array_expression,
    STATE(302), 1,
      sym_refs,
  [7284] = 3,
    ACTIONS(231), 1,
      anon_sym_PIPE_PIPE,
    STATE(226), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(447), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7297] = 2,
    ACTIONS(697), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(699), 3,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7307] = 5,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    STATE(290), 1,
      aux_sym_argument_list_repeat1,
  [7323] = 5,
    ACTIONS(709), 1,
      anon_sym_,
    ACTIONS(711), 1,
      aux_sym_section_value_token1,
    ACTIONS(713), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym_section_declaration_repeat1,
    STATE(312), 1,
      sym_section_value,
  [7339] = 5,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_argument_list_repeat1,
  [7355] = 4,
    ACTIONS(720), 1,
      sym__not_escape_sequence,
    ACTIONS(723), 1,
      sym_string_end,
    STATE(233), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(717), 2,
      sym__string_content,
      sym_escape_sequence,
  [7369] = 5,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_argument_list_repeat1,
  [7385] = 4,
    ACTIONS(729), 1,
      sym__not_escape_sequence,
    ACTIONS(731), 1,
      sym_string_end,
    STATE(233), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(727), 2,
      sym__string_content,
      sym_escape_sequence,
  [7399] = 5,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_argument_list_repeat1,
  [7415] = 3,
    ACTIONS(405), 1,
      anon_sym_PIPE_PIPE,
    STATE(239), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(447), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7427] = 2,
    ACTIONS(503), 1,
      sym__indent,
    ACTIONS(735), 4,
      sym__dedent,
      anon_sym_Case,
      anon_sym_Default,
      sym_comment,
  [7437] = 3,
    ACTIONS(737), 1,
      anon_sym_PIPE_PIPE,
    STATE(239), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(213), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7449] = 5,
    ACTIONS(711), 1,
      aux_sym_section_value_token1,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 1,
      sym__newline,
    STATE(231), 1,
      aux_sym_section_declaration_repeat1,
    STATE(315), 1,
      sym_section_value,
  [7465] = 4,
    ACTIONS(695), 1,
      sym_identifier,
    STATE(259), 1,
      sym_ref,
    STATE(266), 1,
      sym_array_expression,
    STATE(322), 1,
      sym_refs,
  [7478] = 4,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(746), 1,
      anon_sym_OR,
    ACTIONS(748), 1,
      sym__indent,
    STATE(163), 1,
      sym__block,
  [7491] = 3,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(244), 1,
      aux_sym_refs_repeat1,
    ACTIONS(750), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [7502] = 3,
    ACTIONS(756), 1,
      anon_sym_DOT,
    STATE(244), 1,
      aux_sym_refs_repeat1,
    ACTIONS(754), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [7513] = 4,
    ACTIONS(759), 1,
      aux_sym__description_block_token1,
    ACTIONS(761), 1,
      sym__indent,
    ACTIONS(763), 1,
      sym__dedent,
    STATE(246), 1,
      aux_sym__description_block,
  [7526] = 4,
    ACTIONS(765), 1,
      aux_sym__description_block_token1,
    ACTIONS(768), 1,
      sym__indent,
    ACTIONS(771), 1,
      sym__dedent,
    STATE(246), 1,
      aux_sym__description_block,
  [7539] = 4,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(746), 1,
      anon_sym_OR,
    ACTIONS(748), 1,
      sym__indent,
    STATE(159), 1,
      sym__block,
  [7552] = 1,
    ACTIONS(773), 4,
      sym__dedent,
      anon_sym_Case,
      anon_sym_Default,
      sym_comment,
  [7559] = 2,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(483), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_OR,
  [7568] = 1,
    ACTIONS(495), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7575] = 4,
    ACTIONS(759), 1,
      aux_sym__description_block_token1,
    ACTIONS(761), 1,
      sym__indent,
    ACTIONS(775), 1,
      sym__dedent,
    STATE(246), 1,
      aux_sym__description_block,
  [7588] = 4,
    ACTIONS(759), 1,
      aux_sym__description_block_token1,
    ACTIONS(761), 1,
      sym__indent,
    ACTIONS(777), 1,
      sym__dedent,
    STATE(246), 1,
      aux_sym__description_block,
  [7601] = 4,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(746), 1,
      anon_sym_OR,
    ACTIONS(748), 1,
      sym__indent,
    STATE(248), 1,
      sym__block,
  [7614] = 1,
    ACTIONS(779), 4,
      sym__dedent,
      anon_sym_Case,
      anon_sym_Default,
      sym_comment,
  [7621] = 4,
    ACTIONS(781), 1,
      anon_sym_,
    ACTIONS(784), 1,
      aux_sym_section_value_token1,
    ACTIONS(786), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym_section_declaration_repeat1,
  [7634] = 1,
    ACTIONS(483), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7641] = 3,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(788), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7652] = 4,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(746), 1,
      anon_sym_OR,
    ACTIONS(748), 1,
      sym__indent,
    STATE(157), 1,
      sym__block,
  [7665] = 3,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(243), 1,
      aux_sym_refs_repeat1,
    ACTIONS(790), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [7676] = 2,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [7685] = 4,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(746), 1,
      anon_sym_OR,
    ACTIONS(748), 1,
      sym__indent,
    STATE(164), 1,
      sym__block,
  [7698] = 3,
    ACTIONS(792), 1,
      aux_sym__description_block_token1,
    ACTIONS(794), 1,
      sym__dedent,
    STATE(271), 1,
      aux_sym_multiline_comment_repeat1,
  [7708] = 1,
    ACTIONS(754), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [7714] = 3,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_argument_list_repeat1,
  [7724] = 3,
    ACTIONS(799), 1,
      aux_sym__description_block_token1,
    ACTIONS(802), 1,
      anon_sym_DOTenddata,
    STATE(265), 1,
      aux_sym_multiline_comment_repeat1,
  [7734] = 1,
    ACTIONS(37), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [7740] = 3,
    ACTIONS(804), 1,
      anon_sym_COLON,
    ACTIONS(806), 1,
      anon_sym_QMARK,
    ACTIONS(808), 1,
      sym__newline,
  [7750] = 3,
    ACTIONS(761), 1,
      sym__indent,
    ACTIONS(810), 1,
      aux_sym__description_block_token1,
    STATE(251), 1,
      aux_sym__description_block,
  [7760] = 3,
    ACTIONS(761), 1,
      sym__indent,
    ACTIONS(812), 1,
      aux_sym__description_block_token1,
    STATE(252), 1,
      aux_sym__description_block,
  [7770] = 3,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(816), 1,
      sym__newline,
    STATE(284), 1,
      aux_sym_toggle_value_repeat1,
  [7780] = 3,
    ACTIONS(818), 1,
      aux_sym__description_block_token1,
    ACTIONS(821), 1,
      sym__dedent,
    STATE(271), 1,
      aux_sym_multiline_comment_repeat1,
  [7790] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_argument_list_repeat1,
  [7800] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_argument_list_repeat1,
  [7810] = 1,
    ACTIONS(827), 3,
      sym__indent,
      sym__dedent,
      aux_sym__description_block_token1,
  [7816] = 3,
    ACTIONS(804), 1,
      anon_sym_COLON,
    ACTIONS(806), 1,
      anon_sym_QMARK,
    ACTIONS(829), 1,
      sym__newline,
  [7826] = 3,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [7836] = 3,
    ACTIONS(748), 1,
      sym__indent,
    ACTIONS(833), 1,
      anon_sym_If,
    STATE(155), 1,
      sym__block,
  [7846] = 3,
    ACTIONS(792), 1,
      aux_sym__description_block_token1,
    ACTIONS(835), 1,
      sym__dedent,
    STATE(271), 1,
      aux_sym_multiline_comment_repeat1,
  [7856] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_argument_list_repeat1,
  [7866] = 3,
    ACTIONS(839), 1,
      aux_sym__description_block_token1,
    ACTIONS(841), 1,
      anon_sym_DOTenddata,
    STATE(265), 1,
      aux_sym_multiline_comment_repeat1,
  [7876] = 3,
    ACTIONS(792), 1,
      aux_sym__description_block_token1,
    ACTIONS(843), 1,
      sym__dedent,
    STATE(271), 1,
      aux_sym_multiline_comment_repeat1,
  [7886] = 2,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(483), 2,
      sym__indent,
      anon_sym_OR,
  [7894] = 3,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [7904] = 3,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(847), 1,
      sym__newline,
    STATE(293), 1,
      aux_sym_toggle_value_repeat1,
  [7914] = 3,
    ACTIONS(761), 1,
      sym__indent,
    ACTIONS(849), 1,
      aux_sym__description_block_token1,
    STATE(245), 1,
      aux_sym__description_block,
  [7924] = 3,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [7934] = 3,
    ACTIONS(744), 1,
      anon_sym_AND,
    ACTIONS(746), 1,
      anon_sym_OR,
    ACTIONS(853), 1,
      sym__indent,
  [7944] = 3,
    ACTIONS(705), 1,
      anon_sym_AND,
    ACTIONS(707), 1,
      anon_sym_OR,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [7954] = 1,
    ACTIONS(495), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7960] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_argument_list_repeat1,
  [7970] = 3,
    ACTIONS(695), 1,
      sym_identifier,
    STATE(263), 1,
      sym_ref,
    STATE(266), 1,
      sym_array_expression,
  [7980] = 1,
    ACTIONS(483), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7986] = 3,
    ACTIONS(859), 1,
      anon_sym_,
    ACTIONS(862), 1,
      sym__newline,
    STATE(293), 1,
      aux_sym_toggle_value_repeat1,
  [7996] = 1,
    ACTIONS(864), 2,
      sym__newline,
      anon_sym_,
  [8001] = 2,
    ACTIONS(866), 1,
      aux_sym__description_block_token1,
    STATE(280), 1,
      aux_sym_multiline_comment_repeat1,
  [8008] = 2,
    ACTIONS(868), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_argument_list,
  [8015] = 2,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_argument_list,
  [8022] = 2,
    ACTIONS(748), 1,
      sym__indent,
    STATE(160), 1,
      sym__block,
  [8029] = 2,
    ACTIONS(872), 1,
      sym__indent,
    STATE(202), 1,
      sym__block,
  [8036] = 2,
    ACTIONS(874), 1,
      aux_sym__description_block_token1,
    STATE(262), 1,
      aux_sym_multiline_comment_repeat1,
  [8043] = 2,
    ACTIONS(876), 1,
      sym_identifier,
    ACTIONS(878), 1,
      sym_type_name,
  [8050] = 2,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_argument_list,
  [8057] = 2,
    ACTIONS(882), 1,
      aux_sym__description_block_token1,
    STATE(278), 1,
      aux_sym_multiline_comment_repeat1,
  [8064] = 2,
    ACTIONS(884), 1,
      sym_type_name,
    STATE(318), 1,
      sym_toggle_value,
  [8071] = 2,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_argument_list,
  [8078] = 2,
    ACTIONS(888), 1,
      aux_sym__description_block_token1,
    STATE(281), 1,
      aux_sym_multiline_comment_repeat1,
  [8085] = 2,
    ACTIONS(890), 1,
      sym__indent,
    STATE(210), 1,
      sym__block,
  [8092] = 2,
    ACTIONS(748), 1,
      sym__indent,
    STATE(254), 1,
      sym__block,
  [8099] = 2,
    ACTIONS(748), 1,
      sym__indent,
    STATE(154), 1,
      sym__block,
  [8106] = 1,
    ACTIONS(829), 1,
      sym__newline,
  [8110] = 1,
    ACTIONS(892), 1,
      sym__newline,
  [8114] = 1,
    ACTIONS(894), 1,
      sym__newline,
  [8118] = 1,
    ACTIONS(896), 1,
      anon_sym_COLON,
  [8122] = 1,
    ACTIONS(898), 1,
      anon_sym_COLON,
  [8126] = 1,
    ACTIONS(900), 1,
      sym__newline,
  [8130] = 1,
    ACTIONS(902), 1,
      sym_type_name,
  [8134] = 1,
    ACTIONS(808), 1,
      sym__newline,
  [8138] = 1,
    ACTIONS(904), 1,
      sym__newline,
  [8142] = 1,
    ACTIONS(906), 1,
      anon_sym_Case,
  [8146] = 1,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
  [8150] = 1,
    ACTIONS(910), 1,
      sym_identifier,
  [8154] = 1,
    ACTIONS(912), 1,
      anon_sym_EQ,
  [8158] = 1,
    ACTIONS(914), 1,
      sym_type_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 115,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 195,
  [SMALL_STATE(7)] = 253,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 329,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 403,
  [SMALL_STATE(12)] = 446,
  [SMALL_STATE(13)] = 493,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 604,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 690,
  [SMALL_STATE(19)] = 727,
  [SMALL_STATE(20)] = 764,
  [SMALL_STATE(21)] = 801,
  [SMALL_STATE(22)] = 838,
  [SMALL_STATE(23)] = 895,
  [SMALL_STATE(24)] = 952,
  [SMALL_STATE(25)] = 1009,
  [SMALL_STATE(26)] = 1066,
  [SMALL_STATE(27)] = 1122,
  [SMALL_STATE(28)] = 1176,
  [SMALL_STATE(29)] = 1230,
  [SMALL_STATE(30)] = 1284,
  [SMALL_STATE(31)] = 1340,
  [SMALL_STATE(32)] = 1394,
  [SMALL_STATE(33)] = 1448,
  [SMALL_STATE(34)] = 1502,
  [SMALL_STATE(35)] = 1556,
  [SMALL_STATE(36)] = 1610,
  [SMALL_STATE(37)] = 1666,
  [SMALL_STATE(38)] = 1720,
  [SMALL_STATE(39)] = 1774,
  [SMALL_STATE(40)] = 1828,
  [SMALL_STATE(41)] = 1884,
  [SMALL_STATE(42)] = 1938,
  [SMALL_STATE(43)] = 1992,
  [SMALL_STATE(44)] = 2046,
  [SMALL_STATE(45)] = 2100,
  [SMALL_STATE(46)] = 2154,
  [SMALL_STATE(47)] = 2208,
  [SMALL_STATE(48)] = 2262,
  [SMALL_STATE(49)] = 2316,
  [SMALL_STATE(50)] = 2370,
  [SMALL_STATE(51)] = 2424,
  [SMALL_STATE(52)] = 2465,
  [SMALL_STATE(53)] = 2518,
  [SMALL_STATE(54)] = 2571,
  [SMALL_STATE(55)] = 2624,
  [SMALL_STATE(56)] = 2664,
  [SMALL_STATE(57)] = 2697,
  [SMALL_STATE(58)] = 2725,
  [SMALL_STATE(59)] = 2757,
  [SMALL_STATE(60)] = 2787,
  [SMALL_STATE(61)] = 2816,
  [SMALL_STATE(62)] = 2861,
  [SMALL_STATE(63)] = 2888,
  [SMALL_STATE(64)] = 2932,
  [SMALL_STATE(65)] = 2960,
  [SMALL_STATE(66)] = 3004,
  [SMALL_STATE(67)] = 3048,
  [SMALL_STATE(68)] = 3092,
  [SMALL_STATE(69)] = 3136,
  [SMALL_STATE(70)] = 3180,
  [SMALL_STATE(71)] = 3224,
  [SMALL_STATE(72)] = 3268,
  [SMALL_STATE(73)] = 3312,
  [SMALL_STATE(74)] = 3356,
  [SMALL_STATE(75)] = 3400,
  [SMALL_STATE(76)] = 3444,
  [SMALL_STATE(77)] = 3488,
  [SMALL_STATE(78)] = 3532,
  [SMALL_STATE(79)] = 3576,
  [SMALL_STATE(80)] = 3620,
  [SMALL_STATE(81)] = 3664,
  [SMALL_STATE(82)] = 3708,
  [SMALL_STATE(83)] = 3734,
  [SMALL_STATE(84)] = 3760,
  [SMALL_STATE(85)] = 3804,
  [SMALL_STATE(86)] = 3848,
  [SMALL_STATE(87)] = 3874,
  [SMALL_STATE(88)] = 3918,
  [SMALL_STATE(89)] = 3962,
  [SMALL_STATE(90)] = 4006,
  [SMALL_STATE(91)] = 4050,
  [SMALL_STATE(92)] = 4094,
  [SMALL_STATE(93)] = 4120,
  [SMALL_STATE(94)] = 4146,
  [SMALL_STATE(95)] = 4190,
  [SMALL_STATE(96)] = 4216,
  [SMALL_STATE(97)] = 4260,
  [SMALL_STATE(98)] = 4304,
  [SMALL_STATE(99)] = 4348,
  [SMALL_STATE(100)] = 4392,
  [SMALL_STATE(101)] = 4436,
  [SMALL_STATE(102)] = 4480,
  [SMALL_STATE(103)] = 4524,
  [SMALL_STATE(104)] = 4568,
  [SMALL_STATE(105)] = 4612,
  [SMALL_STATE(106)] = 4642,
  [SMALL_STATE(107)] = 4674,
  [SMALL_STATE(108)] = 4708,
  [SMALL_STATE(109)] = 4752,
  [SMALL_STATE(110)] = 4778,
  [SMALL_STATE(111)] = 4804,
  [SMALL_STATE(112)] = 4840,
  [SMALL_STATE(113)] = 4884,
  [SMALL_STATE(114)] = 4910,
  [SMALL_STATE(115)] = 4954,
  [SMALL_STATE(116)] = 4980,
  [SMALL_STATE(117)] = 5024,
  [SMALL_STATE(118)] = 5059,
  [SMALL_STATE(119)] = 5084,
  [SMALL_STATE(120)] = 5109,
  [SMALL_STATE(121)] = 5134,
  [SMALL_STATE(122)] = 5159,
  [SMALL_STATE(123)] = 5184,
  [SMALL_STATE(124)] = 5209,
  [SMALL_STATE(125)] = 5238,
  [SMALL_STATE(126)] = 5269,
  [SMALL_STATE(127)] = 5302,
  [SMALL_STATE(128)] = 5327,
  [SMALL_STATE(129)] = 5352,
  [SMALL_STATE(130)] = 5377,
  [SMALL_STATE(131)] = 5402,
  [SMALL_STATE(132)] = 5429,
  [SMALL_STATE(133)] = 5470,
  [SMALL_STATE(134)] = 5511,
  [SMALL_STATE(135)] = 5535,
  [SMALL_STATE(136)] = 5573,
  [SMALL_STATE(137)] = 5611,
  [SMALL_STATE(138)] = 5649,
  [SMALL_STATE(139)] = 5673,
  [SMALL_STATE(140)] = 5708,
  [SMALL_STATE(141)] = 5743,
  [SMALL_STATE(142)] = 5763,
  [SMALL_STATE(143)] = 5793,
  [SMALL_STATE(144)] = 5815,
  [SMALL_STATE(145)] = 5833,
  [SMALL_STATE(146)] = 5851,
  [SMALL_STATE(147)] = 5869,
  [SMALL_STATE(148)] = 5891,
  [SMALL_STATE(149)] = 5909,
  [SMALL_STATE(150)] = 5938,
  [SMALL_STATE(151)] = 5967,
  [SMALL_STATE(152)] = 5984,
  [SMALL_STATE(153)] = 6005,
  [SMALL_STATE(154)] = 6024,
  [SMALL_STATE(155)] = 6040,
  [SMALL_STATE(156)] = 6056,
  [SMALL_STATE(157)] = 6072,
  [SMALL_STATE(158)] = 6088,
  [SMALL_STATE(159)] = 6104,
  [SMALL_STATE(160)] = 6120,
  [SMALL_STATE(161)] = 6136,
  [SMALL_STATE(162)] = 6164,
  [SMALL_STATE(163)] = 6182,
  [SMALL_STATE(164)] = 6198,
  [SMALL_STATE(165)] = 6214,
  [SMALL_STATE(166)] = 6228,
  [SMALL_STATE(167)] = 6242,
  [SMALL_STATE(168)] = 6256,
  [SMALL_STATE(169)] = 6270,
  [SMALL_STATE(170)] = 6290,
  [SMALL_STATE(171)] = 6310,
  [SMALL_STATE(172)] = 6336,
  [SMALL_STATE(173)] = 6362,
  [SMALL_STATE(174)] = 6378,
  [SMALL_STATE(175)] = 6392,
  [SMALL_STATE(176)] = 6416,
  [SMALL_STATE(177)] = 6442,
  [SMALL_STATE(178)] = 6462,
  [SMALL_STATE(179)] = 6476,
  [SMALL_STATE(180)] = 6496,
  [SMALL_STATE(181)] = 6522,
  [SMALL_STATE(182)] = 6544,
  [SMALL_STATE(183)] = 6564,
  [SMALL_STATE(184)] = 6578,
  [SMALL_STATE(185)] = 6592,
  [SMALL_STATE(186)] = 6606,
  [SMALL_STATE(187)] = 6620,
  [SMALL_STATE(188)] = 6638,
  [SMALL_STATE(189)] = 6655,
  [SMALL_STATE(190)] = 6674,
  [SMALL_STATE(191)] = 6689,
  [SMALL_STATE(192)] = 6708,
  [SMALL_STATE(193)] = 6727,
  [SMALL_STATE(194)] = 6744,
  [SMALL_STATE(195)] = 6763,
  [SMALL_STATE(196)] = 6777,
  [SMALL_STATE(197)] = 6791,
  [SMALL_STATE(198)] = 6805,
  [SMALL_STATE(199)] = 6819,
  [SMALL_STATE(200)] = 6835,
  [SMALL_STATE(201)] = 6849,
  [SMALL_STATE(202)] = 6865,
  [SMALL_STATE(203)] = 6879,
  [SMALL_STATE(204)] = 6893,
  [SMALL_STATE(205)] = 6907,
  [SMALL_STATE(206)] = 6920,
  [SMALL_STATE(207)] = 6939,
  [SMALL_STATE(208)] = 6952,
  [SMALL_STATE(209)] = 6965,
  [SMALL_STATE(210)] = 6978,
  [SMALL_STATE(211)] = 6991,
  [SMALL_STATE(212)] = 7004,
  [SMALL_STATE(213)] = 7023,
  [SMALL_STATE(214)] = 7041,
  [SMALL_STATE(215)] = 7059,
  [SMALL_STATE(216)] = 7077,
  [SMALL_STATE(217)] = 7095,
  [SMALL_STATE(218)] = 7113,
  [SMALL_STATE(219)] = 7129,
  [SMALL_STATE(220)] = 7147,
  [SMALL_STATE(221)] = 7165,
  [SMALL_STATE(222)] = 7183,
  [SMALL_STATE(223)] = 7201,
  [SMALL_STATE(224)] = 7218,
  [SMALL_STATE(225)] = 7235,
  [SMALL_STATE(226)] = 7252,
  [SMALL_STATE(227)] = 7265,
  [SMALL_STATE(228)] = 7284,
  [SMALL_STATE(229)] = 7297,
  [SMALL_STATE(230)] = 7307,
  [SMALL_STATE(231)] = 7323,
  [SMALL_STATE(232)] = 7339,
  [SMALL_STATE(233)] = 7355,
  [SMALL_STATE(234)] = 7369,
  [SMALL_STATE(235)] = 7385,
  [SMALL_STATE(236)] = 7399,
  [SMALL_STATE(237)] = 7415,
  [SMALL_STATE(238)] = 7427,
  [SMALL_STATE(239)] = 7437,
  [SMALL_STATE(240)] = 7449,
  [SMALL_STATE(241)] = 7465,
  [SMALL_STATE(242)] = 7478,
  [SMALL_STATE(243)] = 7491,
  [SMALL_STATE(244)] = 7502,
  [SMALL_STATE(245)] = 7513,
  [SMALL_STATE(246)] = 7526,
  [SMALL_STATE(247)] = 7539,
  [SMALL_STATE(248)] = 7552,
  [SMALL_STATE(249)] = 7559,
  [SMALL_STATE(250)] = 7568,
  [SMALL_STATE(251)] = 7575,
  [SMALL_STATE(252)] = 7588,
  [SMALL_STATE(253)] = 7601,
  [SMALL_STATE(254)] = 7614,
  [SMALL_STATE(255)] = 7621,
  [SMALL_STATE(256)] = 7634,
  [SMALL_STATE(257)] = 7641,
  [SMALL_STATE(258)] = 7652,
  [SMALL_STATE(259)] = 7665,
  [SMALL_STATE(260)] = 7676,
  [SMALL_STATE(261)] = 7685,
  [SMALL_STATE(262)] = 7698,
  [SMALL_STATE(263)] = 7708,
  [SMALL_STATE(264)] = 7714,
  [SMALL_STATE(265)] = 7724,
  [SMALL_STATE(266)] = 7734,
  [SMALL_STATE(267)] = 7740,
  [SMALL_STATE(268)] = 7750,
  [SMALL_STATE(269)] = 7760,
  [SMALL_STATE(270)] = 7770,
  [SMALL_STATE(271)] = 7780,
  [SMALL_STATE(272)] = 7790,
  [SMALL_STATE(273)] = 7800,
  [SMALL_STATE(274)] = 7810,
  [SMALL_STATE(275)] = 7816,
  [SMALL_STATE(276)] = 7826,
  [SMALL_STATE(277)] = 7836,
  [SMALL_STATE(278)] = 7846,
  [SMALL_STATE(279)] = 7856,
  [SMALL_STATE(280)] = 7866,
  [SMALL_STATE(281)] = 7876,
  [SMALL_STATE(282)] = 7886,
  [SMALL_STATE(283)] = 7894,
  [SMALL_STATE(284)] = 7904,
  [SMALL_STATE(285)] = 7914,
  [SMALL_STATE(286)] = 7924,
  [SMALL_STATE(287)] = 7934,
  [SMALL_STATE(288)] = 7944,
  [SMALL_STATE(289)] = 7954,
  [SMALL_STATE(290)] = 7960,
  [SMALL_STATE(291)] = 7970,
  [SMALL_STATE(292)] = 7980,
  [SMALL_STATE(293)] = 7986,
  [SMALL_STATE(294)] = 7996,
  [SMALL_STATE(295)] = 8001,
  [SMALL_STATE(296)] = 8008,
  [SMALL_STATE(297)] = 8015,
  [SMALL_STATE(298)] = 8022,
  [SMALL_STATE(299)] = 8029,
  [SMALL_STATE(300)] = 8036,
  [SMALL_STATE(301)] = 8043,
  [SMALL_STATE(302)] = 8050,
  [SMALL_STATE(303)] = 8057,
  [SMALL_STATE(304)] = 8064,
  [SMALL_STATE(305)] = 8071,
  [SMALL_STATE(306)] = 8078,
  [SMALL_STATE(307)] = 8085,
  [SMALL_STATE(308)] = 8092,
  [SMALL_STATE(309)] = 8099,
  [SMALL_STATE(310)] = 8106,
  [SMALL_STATE(311)] = 8110,
  [SMALL_STATE(312)] = 8114,
  [SMALL_STATE(313)] = 8118,
  [SMALL_STATE(314)] = 8122,
  [SMALL_STATE(315)] = 8126,
  [SMALL_STATE(316)] = 8130,
  [SMALL_STATE(317)] = 8134,
  [SMALL_STATE(318)] = 8138,
  [SMALL_STATE(319)] = 8142,
  [SMALL_STATE(320)] = 8146,
  [SMALL_STATE(321)] = 8150,
  [SMALL_STATE(322)] = 8154,
  [SMALL_STATE(323)] = 8158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 1, .production_id = 9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 26),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expressions, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expressions, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 22),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 22),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 19),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 15),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(319),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(45),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(323),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(277),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(29),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(309),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(31),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(227),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(241),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(30),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(153),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 23),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(313),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(299),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(299),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(224),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(193),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(321),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expressions, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(314),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(307),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(307),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(224),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(201),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 22),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 25),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 4, .production_id = 11),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 16),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2, .production_id = 10),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case_statement, 6, .production_id = 27),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 17),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_call, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_statement, 3, .production_id = 17),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_statement, 3, .production_id = 20),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4, .production_id = 24),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 17),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_section, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_section, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(140),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_text, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_text, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(139),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 4, .production_id = 11),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_block, 4, .production_id = 12),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_block, 4, .production_id = 12),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_section, 3, .production_id = 4),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_section, 3, .production_id = 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_section, 2, .production_id = 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_section, 2, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_text, 4),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_text, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(41),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(308),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(238),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(235),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(235),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_name, 2, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 2, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_name, 1, .production_id = 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, .production_id = 1),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2), SHIFT_REPEAT(301),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2), SHIFT_REPEAT(301),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(89),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2, .production_id = 5),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2, .production_id = 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(233),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(233),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 1),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(99),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 2, .production_id = 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refs, 2, .production_id = 18),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2), SHIFT_REPEAT(291),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_block, 2), SHIFT_REPEAT(246),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_block, 2), SHIFT_REPEAT(285),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_block, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case, 3, .production_id = 28),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_declaration_repeat1, 2), SHIFT_REPEAT(255),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_declaration_repeat1, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_declaration_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refs, 1, .production_id = 9),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(46),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(265),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toggle_value, 1, .production_id = 7),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(271),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_block, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toggle_value, 2, .production_id = 14),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2), SHIFT_REPEAT(316),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2, .production_id = 21),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_value, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 4, .production_id = 13),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 6),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_toggle, 3, .production_id = 8),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [908] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
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
