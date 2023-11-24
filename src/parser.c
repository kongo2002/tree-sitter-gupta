#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 4
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 28

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
  anon_sym_Else = 41,
  anon_sym_On = 42,
  anon_sym_Loop = 43,
  anon_sym_While = 44,
  anon_sym_Call = 45,
  anon_sym_Return = 46,
  anon_sym_DOT = 47,
  anon_sym_Set = 48,
  sym_type_name = 49,
  sym_true = 50,
  sym_false = 51,
  sym_break = 52,
  sym_escape_sequence = 53,
  sym__not_escape_sequence = 54,
  anon_sym_TILDE = 55,
  sym_integer = 56,
  sym_float = 57,
  sym_comment = 58,
  anon_sym_DOTdata = 59,
  anon_sym_DOTenddata = 60,
  sym__newline = 61,
  sym__indent = 62,
  sym__dedent = 63,
  sym_string_start = 64,
  sym__string_content = 65,
  sym_string_end = 66,
  sym_sections = 67,
  sym_section = 68,
  sym__section_content = 69,
  sym_declaration_name = 70,
  sym_section_declaration = 71,
  sym_section_toggle = 72,
  sym_toggle_value = 73,
  sym_section_value = 74,
  sym_description_section = 75,
  sym_description_text = 76,
  aux_sym__description_block = 77,
  sym_action_section = 78,
  sym_paren_expression = 79,
  sym__expression = 80,
  sym__primary_expression = 81,
  sym__block = 82,
  sym__primary_expressions = 83,
  sym_array_expression = 84,
  sym_call = 85,
  sym_function = 86,
  sym_argument_list = 87,
  sym_comparison_operator = 88,
  sym_binary_operator = 89,
  sym_not_operator = 90,
  sym_boolean_operator = 91,
  sym__simple_statement = 92,
  sym_select_case_statement = 93,
  sym_select_case = 94,
  sym_default_case = 95,
  sym_if_statement = 96,
  sym_else_if_statement = 97,
  sym_on_statement = 98,
  sym_loop = 99,
  sym_while = 100,
  sym_else_statement = 101,
  sym_explicit_call = 102,
  sym_return_statement = 103,
  sym_ref = 104,
  sym_refs = 105,
  sym_assignment = 106,
  sym_string = 107,
  sym_string_content = 108,
  sym_unary_operator = 109,
  sym_multiline_comment = 110,
  sym_data_block = 111,
  aux_sym_sections_repeat1 = 112,
  aux_sym_section_repeat1 = 113,
  aux_sym_section_repeat2 = 114,
  aux_sym_declaration_name_repeat1 = 115,
  aux_sym_section_declaration_repeat1 = 116,
  aux_sym_toggle_value_repeat1 = 117,
  aux_sym__block_repeat1 = 118,
  aux_sym__primary_expressions_repeat1 = 119,
  aux_sym_argument_list_repeat1 = 120,
  aux_sym_select_case_statement_repeat1 = 121,
  aux_sym_refs_repeat1 = 122,
  aux_sym_string_repeat1 = 123,
  aux_sym_string_content_repeat1 = 124,
  aux_sym_multiline_comment_repeat1 = 125,
  anon_alias_sym_declaration = 126,
  anon_alias_sym_ident = 127,
  anon_alias_sym_ref = 128,
  anon_alias_sym_value = 129,
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
  field_type = 17,
  field_value = 18,
  field_variable = 19,
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
  [21] = {.index = 18, .length = 3},
  [22] = {.index = 21, .length = 1},
  [23] = {.index = 22, .length = 2},
  [24] = {.index = 24, .length = 2},
  [25] = {.index = 26, .length = 2},
  [26] = {.index = 28, .length = 1},
  [27] = {.index = 29, .length = 1},
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
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_operators, 1},
  [22] =
    {field_condition, 2},
    {field_expression, 3},
  [24] =
    {field_left, 1},
    {field_right, 3},
  [26] =
    {field_index, 2},
    {field_variable, 0},
  [28] =
    {field_selector, 2},
  [29] =
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
  [20] = {
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
  [30] = 28,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 33,
  [38] = 28,
  [39] = 39,
  [40] = 31,
  [41] = 41,
  [42] = 34,
  [43] = 34,
  [44] = 31,
  [45] = 45,
  [46] = 33,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 47,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 52,
  [55] = 55,
  [56] = 3,
  [57] = 3,
  [58] = 4,
  [59] = 5,
  [60] = 4,
  [61] = 5,
  [62] = 6,
  [63] = 63,
  [64] = 12,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 74,
  [75] = 75,
  [76] = 63,
  [77] = 77,
  [78] = 67,
  [79] = 67,
  [80] = 17,
  [81] = 70,
  [82] = 71,
  [83] = 72,
  [84] = 77,
  [85] = 20,
  [86] = 19,
  [87] = 67,
  [88] = 77,
  [89] = 75,
  [90] = 74,
  [91] = 10,
  [92] = 6,
  [93] = 21,
  [94] = 65,
  [95] = 72,
  [96] = 77,
  [97] = 75,
  [98] = 74,
  [99] = 72,
  [100] = 71,
  [101] = 70,
  [102] = 68,
  [103] = 65,
  [104] = 18,
  [105] = 11,
  [106] = 71,
  [107] = 70,
  [108] = 9,
  [109] = 63,
  [110] = 68,
  [111] = 13,
  [112] = 15,
  [113] = 16,
  [114] = 14,
  [115] = 8,
  [116] = 7,
  [117] = 9,
  [118] = 14,
  [119] = 10,
  [120] = 20,
  [121] = 21,
  [122] = 19,
  [123] = 16,
  [124] = 15,
  [125] = 13,
  [126] = 18,
  [127] = 12,
  [128] = 17,
  [129] = 11,
  [130] = 7,
  [131] = 8,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 134,
  [136] = 136,
  [137] = 137,
  [138] = 137,
  [139] = 139,
  [140] = 140,
  [141] = 48,
  [142] = 48,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 3,
  [149] = 149,
  [150] = 55,
  [151] = 4,
  [152] = 152,
  [153] = 55,
  [154] = 5,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 12,
  [168] = 165,
  [169] = 165,
  [170] = 7,
  [171] = 171,
  [172] = 10,
  [173] = 8,
  [174] = 14,
  [175] = 9,
  [176] = 21,
  [177] = 18,
  [178] = 165,
  [179] = 179,
  [180] = 11,
  [181] = 13,
  [182] = 17,
  [183] = 19,
  [184] = 20,
  [185] = 16,
  [186] = 15,
  [187] = 164,
  [188] = 188,
  [189] = 166,
  [190] = 171,
  [191] = 191,
  [192] = 179,
  [193] = 193,
  [194] = 143,
  [195] = 144,
  [196] = 191,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 188,
  [203] = 203,
  [204] = 201,
  [205] = 143,
  [206] = 203,
  [207] = 207,
  [208] = 199,
  [209] = 200,
  [210] = 210,
  [211] = 144,
  [212] = 212,
  [213] = 212,
  [214] = 212,
  [215] = 215,
  [216] = 212,
  [217] = 217,
  [218] = 215,
  [219] = 219,
  [220] = 215,
  [221] = 215,
  [222] = 222,
  [223] = 223,
  [224] = 139,
  [225] = 225,
  [226] = 226,
  [227] = 140,
  [228] = 228,
  [229] = 140,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 228,
  [235] = 228,
  [236] = 139,
  [237] = 237,
  [238] = 238,
  [239] = 228,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 145,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 250,
  [253] = 149,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 147,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 264,
  [269] = 265,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 145,
  [274] = 263,
  [275] = 262,
  [276] = 276,
  [277] = 261,
  [278] = 270,
  [279] = 279,
  [280] = 270,
  [281] = 281,
  [282] = 149,
  [283] = 262,
  [284] = 147,
  [285] = 285,
  [286] = 286,
  [287] = 270,
  [288] = 288,
  [289] = 261,
  [290] = 290,
  [291] = 291,
  [292] = 262,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 293,
  [300] = 300,
  [301] = 301,
  [302] = 298,
  [303] = 298,
  [304] = 293,
  [305] = 296,
  [306] = 306,
  [307] = 298,
  [308] = 308,
  [309] = 309,
  [310] = 308,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 313,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
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
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Call);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Case);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Loop);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_While);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Return);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Select);
      END_STATE();
    case 64:
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
  [26] = {.lex_state = 37, .external_lex_state = 6},
  [27] = {.lex_state = 37, .external_lex_state = 6},
  [28] = {.lex_state = 37, .external_lex_state = 6},
  [29] = {.lex_state = 37, .external_lex_state = 6},
  [30] = {.lex_state = 37, .external_lex_state = 6},
  [31] = {.lex_state = 37, .external_lex_state = 6},
  [32] = {.lex_state = 37, .external_lex_state = 6},
  [33] = {.lex_state = 37, .external_lex_state = 6},
  [34] = {.lex_state = 37, .external_lex_state = 6},
  [35] = {.lex_state = 37, .external_lex_state = 6},
  [36] = {.lex_state = 37, .external_lex_state = 6},
  [37] = {.lex_state = 37, .external_lex_state = 6},
  [38] = {.lex_state = 37, .external_lex_state = 6},
  [39] = {.lex_state = 37, .external_lex_state = 6},
  [40] = {.lex_state = 37, .external_lex_state = 6},
  [41] = {.lex_state = 37, .external_lex_state = 6},
  [42] = {.lex_state = 37, .external_lex_state = 6},
  [43] = {.lex_state = 37, .external_lex_state = 6},
  [44] = {.lex_state = 37, .external_lex_state = 6},
  [45] = {.lex_state = 37, .external_lex_state = 6},
  [46] = {.lex_state = 37, .external_lex_state = 6},
  [47] = {.lex_state = 37, .external_lex_state = 4},
  [48] = {.lex_state = 37, .external_lex_state = 4},
  [49] = {.lex_state = 37, .external_lex_state = 4},
  [50] = {.lex_state = 37, .external_lex_state = 4},
  [51] = {.lex_state = 37, .external_lex_state = 4},
  [52] = {.lex_state = 37, .external_lex_state = 2},
  [53] = {.lex_state = 37, .external_lex_state = 2},
  [54] = {.lex_state = 37, .external_lex_state = 2},
  [55] = {.lex_state = 37, .external_lex_state = 4},
  [56] = {.lex_state = 38, .external_lex_state = 7},
  [57] = {.lex_state = 38, .external_lex_state = 8},
  [58] = {.lex_state = 38, .external_lex_state = 7},
  [59] = {.lex_state = 38, .external_lex_state = 7},
  [60] = {.lex_state = 38, .external_lex_state = 8},
  [61] = {.lex_state = 38, .external_lex_state = 8},
  [62] = {.lex_state = 37, .external_lex_state = 7},
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
  [80] = {.lex_state = 37, .external_lex_state = 7},
  [81] = {.lex_state = 37, .external_lex_state = 6},
  [82] = {.lex_state = 37, .external_lex_state = 6},
  [83] = {.lex_state = 37, .external_lex_state = 6},
  [84] = {.lex_state = 37, .external_lex_state = 6},
  [85] = {.lex_state = 37, .external_lex_state = 7},
  [86] = {.lex_state = 37, .external_lex_state = 7},
  [87] = {.lex_state = 37, .external_lex_state = 6},
  [88] = {.lex_state = 37, .external_lex_state = 6},
  [89] = {.lex_state = 37, .external_lex_state = 6},
  [90] = {.lex_state = 37, .external_lex_state = 6},
  [91] = {.lex_state = 37, .external_lex_state = 7},
  [92] = {.lex_state = 37, .external_lex_state = 8},
  [93] = {.lex_state = 37, .external_lex_state = 7},
  [94] = {.lex_state = 37, .external_lex_state = 6},
  [95] = {.lex_state = 37, .external_lex_state = 6},
  [96] = {.lex_state = 37, .external_lex_state = 6},
  [97] = {.lex_state = 37, .external_lex_state = 6},
  [98] = {.lex_state = 37, .external_lex_state = 6},
  [99] = {.lex_state = 37, .external_lex_state = 6},
  [100] = {.lex_state = 37, .external_lex_state = 6},
  [101] = {.lex_state = 37, .external_lex_state = 6},
  [102] = {.lex_state = 37, .external_lex_state = 6},
  [103] = {.lex_state = 37, .external_lex_state = 6},
  [104] = {.lex_state = 37, .external_lex_state = 7},
  [105] = {.lex_state = 37, .external_lex_state = 7},
  [106] = {.lex_state = 37, .external_lex_state = 6},
  [107] = {.lex_state = 37, .external_lex_state = 6},
  [108] = {.lex_state = 37, .external_lex_state = 7},
  [109] = {.lex_state = 37, .external_lex_state = 6},
  [110] = {.lex_state = 37, .external_lex_state = 6},
  [111] = {.lex_state = 37, .external_lex_state = 7},
  [112] = {.lex_state = 37, .external_lex_state = 7},
  [113] = {.lex_state = 37, .external_lex_state = 7},
  [114] = {.lex_state = 37, .external_lex_state = 7},
  [115] = {.lex_state = 37, .external_lex_state = 7},
  [116] = {.lex_state = 37, .external_lex_state = 7},
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
  [134] = {.lex_state = 46, .external_lex_state = 4},
  [135] = {.lex_state = 46, .external_lex_state = 4},
  [136] = {.lex_state = 46, .external_lex_state = 4},
  [137] = {.lex_state = 46, .external_lex_state = 2},
  [138] = {.lex_state = 46, .external_lex_state = 2},
  [139] = {.lex_state = 37, .external_lex_state = 4},
  [140] = {.lex_state = 37, .external_lex_state = 4},
  [141] = {.lex_state = 37, .external_lex_state = 7},
  [142] = {.lex_state = 37, .external_lex_state = 8},
  [143] = {.lex_state = 37, .external_lex_state = 4},
  [144] = {.lex_state = 37, .external_lex_state = 4},
  [145] = {.lex_state = 37, .external_lex_state = 4},
  [146] = {.lex_state = 37, .external_lex_state = 4},
  [147] = {.lex_state = 37, .external_lex_state = 4},
  [148] = {.lex_state = 38},
  [149] = {.lex_state = 37, .external_lex_state = 4},
  [150] = {.lex_state = 37, .external_lex_state = 7},
  [151] = {.lex_state = 38},
  [152] = {.lex_state = 37, .external_lex_state = 4},
  [153] = {.lex_state = 37, .external_lex_state = 8},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 37, .external_lex_state = 9},
  [156] = {.lex_state = 37, .external_lex_state = 4},
  [157] = {.lex_state = 37, .external_lex_state = 4},
  [158] = {.lex_state = 37, .external_lex_state = 4},
  [159] = {.lex_state = 37, .external_lex_state = 4},
  [160] = {.lex_state = 37, .external_lex_state = 4},
  [161] = {.lex_state = 37, .external_lex_state = 4},
  [162] = {.lex_state = 37, .external_lex_state = 4},
  [163] = {.lex_state = 37, .external_lex_state = 4},
  [164] = {.lex_state = 46, .external_lex_state = 10},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 46, .external_lex_state = 10},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 44, .external_lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 46, .external_lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 46, .external_lex_state = 9},
  [188] = {.lex_state = 46, .external_lex_state = 10},
  [189] = {.lex_state = 46, .external_lex_state = 9},
  [190] = {.lex_state = 2, .external_lex_state = 4},
  [191] = {.lex_state = 46, .external_lex_state = 10},
  [192] = {.lex_state = 46, .external_lex_state = 9},
  [193] = {.lex_state = 46, .external_lex_state = 10},
  [194] = {.lex_state = 46, .external_lex_state = 2},
  [195] = {.lex_state = 46, .external_lex_state = 2},
  [196] = {.lex_state = 46, .external_lex_state = 9},
  [197] = {.lex_state = 46, .external_lex_state = 2},
  [198] = {.lex_state = 46, .external_lex_state = 9},
  [199] = {.lex_state = 46, .external_lex_state = 2},
  [200] = {.lex_state = 46, .external_lex_state = 2},
  [201] = {.lex_state = 46, .external_lex_state = 2},
  [202] = {.lex_state = 46, .external_lex_state = 9},
  [203] = {.lex_state = 46, .external_lex_state = 2},
  [204] = {.lex_state = 46, .external_lex_state = 4},
  [205] = {.lex_state = 46, .external_lex_state = 4},
  [206] = {.lex_state = 46, .external_lex_state = 4},
  [207] = {.lex_state = 37, .external_lex_state = 4},
  [208] = {.lex_state = 46, .external_lex_state = 4},
  [209] = {.lex_state = 46, .external_lex_state = 4},
  [210] = {.lex_state = 37, .external_lex_state = 4},
  [211] = {.lex_state = 46, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 11},
  [213] = {.lex_state = 0, .external_lex_state = 11},
  [214] = {.lex_state = 0, .external_lex_state = 11},
  [215] = {.lex_state = 0, .external_lex_state = 11},
  [216] = {.lex_state = 0, .external_lex_state = 11},
  [217] = {.lex_state = 37, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 11},
  [219] = {.lex_state = 0, .external_lex_state = 11},
  [220] = {.lex_state = 0, .external_lex_state = 11},
  [221] = {.lex_state = 0, .external_lex_state = 11},
  [222] = {.lex_state = 36, .external_lex_state = 12},
  [223] = {.lex_state = 36, .external_lex_state = 12},
  [224] = {.lex_state = 37, .external_lex_state = 7},
  [225] = {.lex_state = 36, .external_lex_state = 12},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 37, .external_lex_state = 7},
  [228] = {.lex_state = 37, .external_lex_state = 7},
  [229] = {.lex_state = 37, .external_lex_state = 8},
  [230] = {.lex_state = 3, .external_lex_state = 12},
  [231] = {.lex_state = 3, .external_lex_state = 12},
  [232] = {.lex_state = 36, .external_lex_state = 12},
  [233] = {.lex_state = 0, .external_lex_state = 11},
  [234] = {.lex_state = 37, .external_lex_state = 7},
  [235] = {.lex_state = 37, .external_lex_state = 7},
  [236] = {.lex_state = 37, .external_lex_state = 8},
  [237] = {.lex_state = 37, .external_lex_state = 9},
  [238] = {.lex_state = 0, .external_lex_state = 11},
  [239] = {.lex_state = 37, .external_lex_state = 7},
  [240] = {.lex_state = 37, .external_lex_state = 8},
  [241] = {.lex_state = 37, .external_lex_state = 8},
  [242] = {.lex_state = 37, .external_lex_state = 4},
  [243] = {.lex_state = 37, .external_lex_state = 7},
  [244] = {.lex_state = 37, .external_lex_state = 8},
  [245] = {.lex_state = 38},
  [246] = {.lex_state = 37, .external_lex_state = 7},
  [247] = {.lex_state = 37, .external_lex_state = 4},
  [248] = {.lex_state = 37, .external_lex_state = 8},
  [249] = {.lex_state = 38},
  [250] = {.lex_state = 4, .external_lex_state = 13},
  [251] = {.lex_state = 37},
  [252] = {.lex_state = 4, .external_lex_state = 13},
  [253] = {.lex_state = 37, .external_lex_state = 7},
  [254] = {.lex_state = 3, .external_lex_state = 12},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 4, .external_lex_state = 13},
  [257] = {.lex_state = 4, .external_lex_state = 13},
  [258] = {.lex_state = 37, .external_lex_state = 7},
  [259] = {.lex_state = 38},
  [260] = {.lex_state = 37, .external_lex_state = 8},
  [261] = {.lex_state = 4, .external_lex_state = 14},
  [262] = {.lex_state = 37, .external_lex_state = 7},
  [263] = {.lex_state = 0, .external_lex_state = 12},
  [264] = {.lex_state = 4, .external_lex_state = 14},
  [265] = {.lex_state = 4, .external_lex_state = 8},
  [266] = {.lex_state = 38},
  [267] = {.lex_state = 0, .external_lex_state = 7},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 4, .external_lex_state = 8},
  [270] = {.lex_state = 0, .external_lex_state = 7},
  [271] = {.lex_state = 36, .external_lex_state = 12},
  [272] = {.lex_state = 37},
  [273] = {.lex_state = 37, .external_lex_state = 8},
  [274] = {.lex_state = 0, .external_lex_state = 12},
  [275] = {.lex_state = 37, .external_lex_state = 7},
  [276] = {.lex_state = 37, .external_lex_state = 8},
  [277] = {.lex_state = 4, .external_lex_state = 14},
  [278] = {.lex_state = 0, .external_lex_state = 7},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 0, .external_lex_state = 7},
  [281] = {.lex_state = 36, .external_lex_state = 12},
  [282] = {.lex_state = 37, .external_lex_state = 8},
  [283] = {.lex_state = 37, .external_lex_state = 7},
  [284] = {.lex_state = 37, .external_lex_state = 8},
  [285] = {.lex_state = 37, .external_lex_state = 8},
  [286] = {.lex_state = 38},
  [287] = {.lex_state = 0, .external_lex_state = 7},
  [288] = {.lex_state = 36, .external_lex_state = 12},
  [289] = {.lex_state = 4, .external_lex_state = 14},
  [290] = {.lex_state = 4, .external_lex_state = 8},
  [291] = {.lex_state = 4, .external_lex_state = 13},
  [292] = {.lex_state = 37, .external_lex_state = 7},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 8},
  [295] = {.lex_state = 0, .external_lex_state = 8},
  [296] = {.lex_state = 0, .external_lex_state = 8},
  [297] = {.lex_state = 36, .external_lex_state = 12},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 37},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0, .external_lex_state = 8},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 12},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 39},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 12},
  [314] = {.lex_state = 0, .external_lex_state = 12},
  [315] = {.lex_state = 0, .external_lex_state = 12},
  [316] = {.lex_state = 0, .external_lex_state = 12},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 37},
  [319] = {.lex_state = 0, .external_lex_state = 12},
  [320] = {.lex_state = 37},
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
    [sym_sections] = STATE(317),
    [sym_section] = STATE(132),
    [sym_declaration_name] = STATE(263),
    [sym_section_declaration] = STATE(314),
    [sym_section_toggle] = STATE(314),
    [sym_description_section] = STATE(201),
    [sym_action_section] = STATE(201),
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
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
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
    STATE(152), 5,
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
    ACTIONS(25), 10,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [70] = 4,
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
    ACTIONS(35), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [113] = 2,
    ACTIONS(45), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(43), 29,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_DOT,
      anon_sym_Set,
      sym_break,
  [151] = 3,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(41), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(35), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [191] = 12,
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
    STATE(140), 1,
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
    ACTIONS(65), 13,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [248] = 3,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 24,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [286] = 7,
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
    ACTIONS(69), 18,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [332] = 5,
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
      anon_sym_CARET,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [374] = 2,
    ACTIONS(75), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(73), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [410] = 4,
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
    ACTIONS(69), 22,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [450] = 2,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(69), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [486] = 2,
    ACTIONS(79), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(77), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [522] = 6,
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
      anon_sym_AMP,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [566] = 2,
    ACTIONS(83), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(81), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [602] = 2,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(85), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [638] = 2,
    ACTIONS(91), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(89), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [674] = 2,
    ACTIONS(95), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(93), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [710] = 2,
    ACTIONS(99), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(97), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [746] = 2,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(101), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [782] = 2,
    ACTIONS(107), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      sym_comment,
    ACTIONS(105), 27,
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
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
  [818] = 14,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(235), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [875] = 14,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(228), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [932] = 14,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [989] = 14,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(239), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1046] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(260), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1100] = 13,
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
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
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
    STATE(146), 5,
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
  [1154] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(246), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1208] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(241), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1262] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(273), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1316] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(275), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1370] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(262), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1424] = 13,
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
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
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
    STATE(149), 5,
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
  [1478] = 13,
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
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
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
  [1532] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(243), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1586] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(240), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1640] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
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
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1694] = 13,
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
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
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
    STATE(145), 5,
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
  [1748] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
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
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1802] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(292), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1856] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(244), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1910] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(258), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [1964] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(284), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2018] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2072] = 13,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_NOT,
    ACTIONS(141), 1,
      sym_float,
    ACTIONS(143), 1,
      sym_string_start,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(139), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(248), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(92), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2126] = 13,
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
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
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
    STATE(253), 5,
      sym__expression,
      sym__primary_expressions,
      sym_comparison_operator,
      sym_not_operator,
      sym_boolean_operator,
    STATE(62), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2180] = 13,
    ACTIONS(145), 1,
      anon_sym_Select,
    ACTIONS(147), 1,
      anon_sym_If,
    ACTIONS(149), 1,
      anon_sym_Else,
    ACTIONS(151), 1,
      anon_sym_On,
    ACTIONS(153), 1,
      anon_sym_Loop,
    ACTIONS(155), 1,
      anon_sym_While,
    ACTIONS(157), 1,
      anon_sym_Call,
    ACTIONS(159), 1,
      anon_sym_Return,
    ACTIONS(161), 1,
      anon_sym_Set,
    ACTIONS(163), 1,
      sym_break,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym__dedent,
    STATE(51), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2232] = 7,
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
    ACTIONS(169), 15,
      sym__dedent,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [2272] = 13,
    ACTIONS(145), 1,
      anon_sym_Select,
    ACTIONS(147), 1,
      anon_sym_If,
    ACTIONS(149), 1,
      anon_sym_Else,
    ACTIONS(151), 1,
      anon_sym_On,
    ACTIONS(153), 1,
      anon_sym_Loop,
    ACTIONS(155), 1,
      anon_sym_While,
    ACTIONS(157), 1,
      anon_sym_Call,
    ACTIONS(159), 1,
      anon_sym_Return,
    ACTIONS(161), 1,
      anon_sym_Set,
    ACTIONS(163), 1,
      sym_break,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__dedent,
    STATE(51), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2324] = 13,
    ACTIONS(145), 1,
      anon_sym_Select,
    ACTIONS(147), 1,
      anon_sym_If,
    ACTIONS(149), 1,
      anon_sym_Else,
    ACTIONS(151), 1,
      anon_sym_On,
    ACTIONS(153), 1,
      anon_sym_Loop,
    ACTIONS(155), 1,
      anon_sym_While,
    ACTIONS(157), 1,
      anon_sym_Call,
    ACTIONS(159), 1,
      anon_sym_Return,
    ACTIONS(161), 1,
      anon_sym_Set,
    ACTIONS(163), 1,
      sym_break,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym__dedent,
    STATE(51), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2376] = 13,
    ACTIONS(175), 1,
      anon_sym_Select,
    ACTIONS(178), 1,
      anon_sym_If,
    ACTIONS(181), 1,
      anon_sym_Else,
    ACTIONS(184), 1,
      anon_sym_On,
    ACTIONS(187), 1,
      anon_sym_Loop,
    ACTIONS(190), 1,
      anon_sym_While,
    ACTIONS(193), 1,
      anon_sym_Call,
    ACTIONS(196), 1,
      anon_sym_Return,
    ACTIONS(199), 1,
      anon_sym_Set,
    ACTIONS(202), 1,
      sym_break,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__dedent,
    STATE(51), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2428] = 12,
    ACTIONS(145), 1,
      anon_sym_Select,
    ACTIONS(147), 1,
      anon_sym_If,
    ACTIONS(149), 1,
      anon_sym_Else,
    ACTIONS(151), 1,
      anon_sym_On,
    ACTIONS(153), 1,
      anon_sym_Loop,
    ACTIONS(155), 1,
      anon_sym_While,
    ACTIONS(157), 1,
      anon_sym_Call,
    ACTIONS(159), 1,
      anon_sym_Return,
    ACTIONS(161), 1,
      anon_sym_Set,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_break,
    STATE(47), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2477] = 12,
    ACTIONS(145), 1,
      anon_sym_Select,
    ACTIONS(147), 1,
      anon_sym_If,
    ACTIONS(149), 1,
      anon_sym_Else,
    ACTIONS(151), 1,
      anon_sym_On,
    ACTIONS(153), 1,
      anon_sym_Loop,
    ACTIONS(155), 1,
      anon_sym_While,
    ACTIONS(157), 1,
      anon_sym_Call,
    ACTIONS(159), 1,
      anon_sym_Return,
    ACTIONS(161), 1,
      anon_sym_Set,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_break,
    STATE(49), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2526] = 12,
    ACTIONS(145), 1,
      anon_sym_Select,
    ACTIONS(147), 1,
      anon_sym_If,
    ACTIONS(149), 1,
      anon_sym_Else,
    ACTIONS(151), 1,
      anon_sym_On,
    ACTIONS(153), 1,
      anon_sym_Loop,
    ACTIONS(155), 1,
      anon_sym_While,
    ACTIONS(157), 1,
      anon_sym_Call,
    ACTIONS(159), 1,
      anon_sym_Return,
    ACTIONS(161), 1,
      anon_sym_Set,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_break,
    STATE(50), 13,
      sym__simple_statement,
      sym_select_case_statement,
      sym_if_statement,
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
  [2575] = 7,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(216), 1,
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
    ACTIONS(218), 14,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [2614] = 4,
    ACTIONS(220), 1,
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
  [2647] = 4,
    ACTIONS(222), 1,
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
  [2679] = 2,
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
  [2707] = 3,
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
  [2737] = 2,
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
  [2764] = 3,
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
  [2793] = 11,
    ACTIONS(226), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_CARET,
    STATE(227), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(230), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2838] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(244), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(242), 4,
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
  [2882] = 2,
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
  [2908] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_float,
    ACTIONS(256), 1,
      sym_string_start,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(252), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(178), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2952] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(260), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(258), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(169), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [2996] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(264), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(262), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(183), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3040] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(268), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(266), 4,
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
  [3084] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(272), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(270), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(9), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3128] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(276), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(274), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(14), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3172] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(280), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(278), 4,
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
  [3216] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(284), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [3260] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(288), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(286), 4,
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
  [3304] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(292), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(290), 4,
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
  [3348] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(296), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(294), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(48), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3392] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(300), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(298), 4,
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
  [3436] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(304), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(302), 4,
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
  [3480] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(308), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(306), 4,
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
  [3524] = 11,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_string_start,
    ACTIONS(312), 1,
      sym_float,
    STATE(5), 1,
      sym_array_expression,
    STATE(17), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(298), 1,
      sym_refs,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(310), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(19), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3568] = 2,
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
  [3594] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(316), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(314), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(174), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3638] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(320), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(318), 4,
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
  [3682] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(324), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(322), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(170), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3726] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(328), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(326), 4,
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
  [3770] = 2,
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
  [3796] = 2,
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
  [3822] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(332), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(330), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(122), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3866] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(336), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(334), 4,
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
  [3910] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(340), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(338), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(141), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [3954] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(344), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(342), 4,
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
  [3998] = 2,
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
  [4024] = 11,
    ACTIONS(348), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(356), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      anon_sym_CARET,
    STATE(229), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(65), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(346), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4068] = 2,
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
  [4094] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(366), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(364), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(168), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4138] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(370), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(368), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(116), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4182] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(374), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(372), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(127), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4226] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(378), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(376), 4,
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
  [4270] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(382), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(380), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(153), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4314] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(386), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(384), 4,
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
  [4358] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(390), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(388), 4,
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
  [4402] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(394), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(392), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(118), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4446] = 11,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_string_start,
    ACTIONS(398), 1,
      sym_float,
    STATE(61), 1,
      sym_array_expression,
    STATE(128), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(303), 1,
      sym_refs,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(396), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(129), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4490] = 11,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_string_start,
    ACTIONS(402), 1,
      sym_float,
    STATE(154), 1,
      sym_array_expression,
    STATE(182), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(302), 1,
      sym_refs,
    ACTIONS(250), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(400), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(165), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4534] = 2,
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
  [4560] = 4,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(224), 3,
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
  [4590] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(406), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(404), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(115), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4634] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(410), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(408), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(114), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4678] = 5,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(224), 3,
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
  [4710] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(414), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(412), 4,
      sym_type_name,
      sym_true,
      sym_false,
      sym_integer,
    STATE(108), 6,
      sym_paren_expression,
      sym__primary_expression,
      sym_call,
      sym_binary_operator,
      sym_string,
      sym_unary_operator,
  [4754] = 11,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string_start,
    ACTIONS(418), 1,
      sym_float,
    STATE(59), 1,
      sym_array_expression,
    STATE(80), 1,
      sym_function,
    STATE(255), 1,
      sym_ref,
    STATE(307), 1,
      sym_refs,
    ACTIONS(115), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(416), 4,
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
  [4798] = 2,
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
  [4824] = 2,
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
  [4850] = 2,
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
  [4876] = 6,
    ACTIONS(238), 1,
      anon_sym_CARET,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(224), 3,
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
  [4910] = 7,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_CARET,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(224), 3,
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
  [4946] = 3,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(224), 3,
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
  [4974] = 5,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(346), 3,
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
  [5005] = 6,
    ACTIONS(360), 1,
      anon_sym_CARET,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(346), 3,
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
  [5038] = 2,
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
  [5063] = 2,
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
  [5088] = 2,
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
  [5113] = 2,
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
  [5138] = 2,
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
  [5163] = 2,
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
  [5188] = 2,
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
  [5213] = 2,
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
  [5238] = 2,
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
  [5263] = 2,
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
  [5288] = 4,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(346), 3,
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
  [5317] = 3,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(346), 3,
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
  [5344] = 7,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      anon_sym_CARET,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(346), 3,
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
  [5379] = 11,
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
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_declaration_name,
    STATE(201), 2,
      sym_description_section,
      sym_action_section,
    STATE(314), 2,
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
  [5420] = 11,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      anon_sym_Description,
    ACTIONS(427), 1,
      anon_sym_Actions,
    ACTIONS(433), 1,
      sym_type_name,
    ACTIONS(436), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOTdata,
    STATE(263), 1,
      sym_declaration_name,
    STATE(201), 2,
      sym_description_section,
      sym_action_section,
    STATE(314), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(430), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(133), 4,
      sym_section,
      sym_multiline_comment,
      sym_data_block,
      aux_sym_sections_repeat1,
  [5461] = 10,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(442), 1,
      anon_sym_Description,
    ACTIONS(444), 1,
      anon_sym_Actions,
    ACTIONS(448), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym__dedent,
    STATE(274), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(313), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(446), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(136), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5499] = 10,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(442), 1,
      anon_sym_Description,
    ACTIONS(444), 1,
      anon_sym_Actions,
    ACTIONS(448), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym__dedent,
    STATE(274), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(313), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(446), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(136), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5537] = 10,
    ACTIONS(454), 1,
      anon_sym_Description,
    ACTIONS(457), 1,
      anon_sym_Actions,
    ACTIONS(463), 1,
      sym_type_name,
    ACTIONS(466), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__dedent,
    STATE(274), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(313), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(460), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(136), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5575] = 9,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(442), 1,
      anon_sym_Description,
    ACTIONS(444), 1,
      anon_sym_Actions,
    ACTIONS(448), 1,
      sym_comment,
    STATE(274), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(313), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(446), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(134), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5610] = 9,
    ACTIONS(11), 1,
      sym_type_name,
    ACTIONS(442), 1,
      anon_sym_Description,
    ACTIONS(444), 1,
      anon_sym_Actions,
    ACTIONS(448), 1,
      sym_comment,
    STATE(274), 1,
      sym_declaration_name,
    STATE(204), 2,
      sym_description_section,
      sym_action_section,
    STATE(313), 2,
      sym_section_declaration,
      sym_section_toggle,
    ACTIONS(446), 3,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
    STATE(135), 4,
      sym_section,
      sym__section_content,
      sym_multiline_comment,
      aux_sym_section_repeat1,
  [5645] = 3,
    ACTIONS(471), 1,
      anon_sym_PIPE_PIPE,
    STATE(139), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(169), 14,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5668] = 3,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    STATE(139), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(474), 14,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5691] = 7,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_CARET,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 5,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [5721] = 7,
    ACTIONS(356), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      anon_sym_CARET,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(346), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 4,
      sym__indent,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [5750] = 1,
    ACTIONS(476), 14,
      sym__dedent,
      anon_sym_Select,
      anon_sym_Case,
      anon_sym_Default,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5767] = 1,
    ACTIONS(478), 14,
      sym__dedent,
      anon_sym_Select,
      anon_sym_Case,
      anon_sym_Default,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5784] = 1,
    ACTIONS(480), 14,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5801] = 3,
    ACTIONS(482), 1,
      anon_sym_AND,
    ACTIONS(484), 1,
      anon_sym_OR,
    ACTIONS(486), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5822] = 2,
    ACTIONS(482), 1,
      anon_sym_AND,
    ACTIONS(488), 13,
      sym__dedent,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5841] = 3,
    ACTIONS(490), 1,
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
  [5862] = 1,
    ACTIONS(488), 14,
      sym__dedent,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5879] = 7,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_CARET,
    ACTIONS(492), 1,
      anon_sym_PIPE,
    ACTIONS(232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(218), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [5908] = 1,
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
  [5925] = 3,
    ACTIONS(482), 1,
      anon_sym_AND,
    ACTIONS(484), 1,
      anon_sym_OR,
    ACTIONS(494), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [5946] = 7,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      anon_sym_CARET,
    ACTIONS(496), 1,
      anon_sym_PIPE,
    ACTIONS(354), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(218), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(346), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5974] = 2,
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
  [5992] = 2,
    ACTIONS(500), 1,
      sym__indent,
    ACTIONS(498), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6010] = 1,
    ACTIONS(502), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6025] = 1,
    ACTIONS(504), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
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
    ACTIONS(506), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6055] = 1,
    ACTIONS(508), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6070] = 1,
    ACTIONS(510), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6085] = 1,
    ACTIONS(512), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6100] = 1,
    ACTIONS(514), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6115] = 1,
    ACTIONS(516), 12,
      sym__dedent,
      anon_sym_Select,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_On,
      anon_sym_Loop,
      anon_sym_While,
      anon_sym_Call,
      anon_sym_Return,
      anon_sym_Set,
      sym_break,
      sym_comment,
  [6130] = 4,
    ACTIONS(522), 1,
      sym__indent,
    STATE(166), 1,
      aux_sym_section_repeat2,
    ACTIONS(520), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(518), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6150] = 7,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      anon_sym_AMP,
    ACTIONS(534), 1,
      anon_sym_CARET,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6176] = 4,
    ACTIONS(542), 1,
      sym__indent,
    STATE(166), 1,
      aux_sym_section_repeat2,
    ACTIONS(540), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(538), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6196] = 1,
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
  [6210] = 7,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      anon_sym_AMP,
    ACTIONS(534), 1,
      anon_sym_CARET,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6236] = 7,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      anon_sym_AMP,
    ACTIONS(534), 1,
      anon_sym_CARET,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6262] = 2,
    ACTIONS(524), 3,
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
  [6278] = 4,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    ACTIONS(551), 1,
      aux_sym_section_value_token1,
    STATE(199), 1,
      sym_description_text,
    ACTIONS(553), 8,
      anon_sym_Description,
      anon_sym_Actions,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_type_name,
      sym_comment,
      anon_sym_DOTdata,
  [6298] = 1,
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
  [6312] = 6,
    ACTIONS(532), 1,
      anon_sym_AMP,
    ACTIONS(534), 1,
      anon_sym_CARET,
    ACTIONS(69), 2,
      anon_sym_RBRACK,
      anon_sym_PIPE,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6336] = 5,
    ACTIONS(534), 1,
      anon_sym_CARET,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 3,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6358] = 4,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [6378] = 1,
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
  [6392] = 1,
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
  [6406] = 7,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      anon_sym_AMP,
    ACTIONS(534), 1,
      anon_sym_CARET,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6432] = 4,
    ACTIONS(522), 1,
      sym__indent,
    STATE(164), 1,
      aux_sym_section_repeat2,
    ACTIONS(559), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6452] = 3,
    ACTIONS(528), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(524), 3,
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
  [6470] = 1,
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
  [6484] = 1,
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
  [6498] = 1,
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
  [6512] = 1,
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
  [6526] = 1,
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
  [6540] = 1,
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
  [6554] = 4,
    ACTIONS(561), 1,
      sym__indent,
    STATE(189), 1,
      aux_sym_section_repeat2,
    ACTIONS(520), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(518), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6573] = 3,
    ACTIONS(567), 1,
      sym__indent,
    ACTIONS(565), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(563), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6590] = 4,
    ACTIONS(569), 1,
      sym__indent,
    STATE(189), 1,
      aux_sym_section_repeat2,
    ACTIONS(540), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(538), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6609] = 4,
    ACTIONS(549), 1,
      sym__dedent,
    ACTIONS(572), 1,
      aux_sym_section_value_token1,
    STATE(208), 1,
      sym_description_text,
    ACTIONS(553), 7,
      anon_sym_Description,
      anon_sym_Actions,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_type_name,
      sym_comment,
  [6628] = 2,
    ACTIONS(576), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(574), 7,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6643] = 4,
    ACTIONS(561), 1,
      sym__indent,
    STATE(187), 1,
      aux_sym_section_repeat2,
    ACTIONS(559), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(557), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6662] = 3,
    ACTIONS(582), 1,
      sym__indent,
    ACTIONS(580), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(578), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6679] = 2,
    ACTIONS(584), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(476), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6693] = 2,
    ACTIONS(586), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(478), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6707] = 2,
    ACTIONS(576), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(574), 6,
      sym__indent,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6721] = 2,
    ACTIONS(590), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(588), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6735] = 3,
    ACTIONS(596), 1,
      sym__indent,
    ACTIONS(592), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(594), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6751] = 2,
    ACTIONS(600), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(598), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6765] = 2,
    ACTIONS(604), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(602), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6779] = 2,
    ACTIONS(608), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(606), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6793] = 3,
    ACTIONS(610), 1,
      sym__indent,
    ACTIONS(565), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(563), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6809] = 2,
    ACTIONS(614), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(612), 6,
      ts_builtin_sym_end,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
      anon_sym_DOTdata,
  [6823] = 2,
    ACTIONS(608), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(606), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6836] = 2,
    ACTIONS(584), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(476), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6849] = 2,
    ACTIONS(614), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(612), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6862] = 5,
    ACTIONS(616), 1,
      anon_sym_Case,
    ACTIONS(618), 1,
      anon_sym_Default,
    ACTIONS(620), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__dedent,
    STATE(210), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [6881] = 2,
    ACTIONS(600), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(598), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6894] = 2,
    ACTIONS(604), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(602), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6907] = 5,
    ACTIONS(624), 1,
      anon_sym_Case,
    ACTIONS(627), 1,
      anon_sym_Default,
    ACTIONS(630), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__dedent,
    STATE(210), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [6926] = 2,
    ACTIONS(586), 3,
      anon_sym_Description,
      anon_sym_Actions,
      sym_type_name,
    ACTIONS(478), 5,
      sym__dedent,
      anon_sym_MenuActions,
      anon_sym_ApplicationActions,
      anon_sym_MessageActions,
      sym_comment,
  [6939] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(639), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(219), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [6957] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(641), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(219), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [6975] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(643), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(219), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [6993] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(645), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(214), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7011] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(647), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(219), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7029] = 4,
    ACTIONS(616), 1,
      anon_sym_Case,
    ACTIONS(618), 1,
      anon_sym_Default,
    ACTIONS(620), 1,
      sym_comment,
    STATE(207), 4,
      sym_select_case,
      sym_default_case,
      sym_multiline_comment,
      aux_sym_select_case_statement_repeat1,
  [7045] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(649), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(216), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7063] = 5,
    ACTIONS(654), 1,
      sym__not_escape_sequence,
    ACTIONS(657), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(651), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(219), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7081] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(659), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(213), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7099] = 5,
    ACTIONS(637), 1,
      sym__not_escape_sequence,
    ACTIONS(661), 1,
      sym_string_end,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(635), 2,
      sym__string_content,
      sym_escape_sequence,
    STATE(212), 2,
      sym_string_content,
      aux_sym_string_repeat1,
  [7117] = 5,
    ACTIONS(663), 1,
      anon_sym_,
    ACTIONS(666), 1,
      anon_sym_SLASH,
    ACTIONS(671), 1,
      sym__newline,
    STATE(222), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(669), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7134] = 5,
    ACTIONS(673), 1,
      anon_sym_,
    ACTIONS(675), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(677), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7151] = 3,
    ACTIONS(681), 1,
      anon_sym_PIPE_PIPE,
    STATE(224), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(169), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7164] = 5,
    ACTIONS(673), 1,
      anon_sym_,
    ACTIONS(675), 1,
      anon_sym_SLASH,
    ACTIONS(686), 1,
      sym__newline,
    STATE(222), 1,
      aux_sym_declaration_name_repeat1,
    ACTIONS(684), 2,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7181] = 6,
    ACTIONS(688), 1,
      sym_identifier,
    STATE(17), 1,
      sym_function,
    STATE(157), 1,
      sym_call,
    STATE(255), 1,
      sym_ref,
    STATE(266), 1,
      sym_array_expression,
    STATE(298), 1,
      sym_refs,
  [7200] = 3,
    ACTIONS(226), 1,
      anon_sym_PIPE_PIPE,
    STATE(224), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(474), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7213] = 5,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    STATE(287), 1,
      aux_sym_argument_list_repeat1,
  [7229] = 3,
    ACTIONS(348), 1,
      anon_sym_PIPE_PIPE,
    STATE(236), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(474), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7241] = 5,
    ACTIONS(698), 1,
      anon_sym_,
    ACTIONS(700), 1,
      aux_sym_section_value_token1,
    ACTIONS(702), 1,
      sym__newline,
    STATE(231), 1,
      aux_sym_section_declaration_repeat1,
    STATE(316), 1,
      sym_section_value,
  [7257] = 5,
    ACTIONS(700), 1,
      aux_sym_section_value_token1,
    ACTIONS(704), 1,
      anon_sym_,
    ACTIONS(706), 1,
      sym__newline,
    STATE(254), 1,
      aux_sym_section_declaration_repeat1,
    STATE(315), 1,
      sym_section_value,
  [7273] = 2,
    ACTIONS(708), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(710), 3,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_QMARK,
  [7283] = 4,
    ACTIONS(715), 1,
      sym__not_escape_sequence,
    ACTIONS(718), 1,
      sym_string_end,
    STATE(233), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(712), 2,
      sym__string_content,
      sym_escape_sequence,
  [7297] = 5,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_argument_list_repeat1,
  [7313] = 5,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_argument_list_repeat1,
  [7329] = 3,
    ACTIONS(724), 1,
      anon_sym_PIPE_PIPE,
    STATE(236), 1,
      aux_sym__primary_expressions_repeat1,
    ACTIONS(169), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7341] = 2,
    ACTIONS(500), 1,
      sym__indent,
    ACTIONS(727), 4,
      sym__dedent,
      anon_sym_Case,
      anon_sym_Default,
      sym_comment,
  [7351] = 4,
    ACTIONS(731), 1,
      sym__not_escape_sequence,
    ACTIONS(733), 1,
      sym_string_end,
    STATE(233), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(729), 2,
      sym__string_content,
      sym_escape_sequence,
  [7365] = 5,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_argument_list_repeat1,
  [7381] = 4,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(739), 1,
      anon_sym_OR,
    ACTIONS(741), 1,
      sym__indent,
    STATE(156), 1,
      sym__block,
  [7394] = 4,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(739), 1,
      anon_sym_OR,
    ACTIONS(741), 1,
      sym__indent,
    STATE(161), 1,
      sym__block,
  [7407] = 1,
    ACTIONS(743), 4,
      sym__dedent,
      anon_sym_Case,
      anon_sym_Default,
      sym_comment,
  [7414] = 3,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(745), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7425] = 4,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(739), 1,
      anon_sym_OR,
    ACTIONS(741), 1,
      sym__indent,
    STATE(160), 1,
      sym__block,
  [7438] = 3,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(249), 1,
      aux_sym_refs_repeat1,
    ACTIONS(747), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [7449] = 1,
    ACTIONS(480), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7456] = 1,
    ACTIONS(751), 4,
      sym__dedent,
      anon_sym_Case,
      anon_sym_Default,
      sym_comment,
  [7463] = 4,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(739), 1,
      anon_sym_OR,
    ACTIONS(741), 1,
      sym__indent,
    STATE(242), 1,
      sym__block,
  [7476] = 3,
    ACTIONS(755), 1,
      anon_sym_DOT,
    STATE(249), 1,
      aux_sym_refs_repeat1,
    ACTIONS(753), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [7487] = 4,
    ACTIONS(758), 1,
      aux_sym__description_block_token1,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(762), 1,
      sym__dedent,
    STATE(257), 1,
      aux_sym__description_block,
  [7500] = 4,
    ACTIONS(688), 1,
      sym_identifier,
    STATE(255), 1,
      sym_ref,
    STATE(266), 1,
      sym_array_expression,
    STATE(312), 1,
      sym_refs,
  [7513] = 4,
    ACTIONS(758), 1,
      aux_sym__description_block_token1,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(764), 1,
      sym__dedent,
    STATE(257), 1,
      aux_sym__description_block,
  [7526] = 1,
    ACTIONS(488), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [7533] = 4,
    ACTIONS(766), 1,
      anon_sym_,
    ACTIONS(769), 1,
      aux_sym_section_value_token1,
    ACTIONS(771), 1,
      sym__newline,
    STATE(254), 1,
      aux_sym_section_declaration_repeat1,
  [7546] = 3,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(245), 1,
      aux_sym_refs_repeat1,
    ACTIONS(773), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [7557] = 4,
    ACTIONS(758), 1,
      aux_sym__description_block_token1,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(775), 1,
      sym__dedent,
    STATE(257), 1,
      aux_sym__description_block,
  [7570] = 4,
    ACTIONS(777), 1,
      aux_sym__description_block_token1,
    ACTIONS(780), 1,
      sym__indent,
    ACTIONS(783), 1,
      sym__dedent,
    STATE(257), 1,
      aux_sym__description_block,
  [7583] = 2,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(488), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_OR,
  [7592] = 2,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [7601] = 4,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(739), 1,
      anon_sym_OR,
    ACTIONS(741), 1,
      sym__indent,
    STATE(162), 1,
      sym__block,
  [7614] = 3,
    ACTIONS(785), 1,
      aux_sym__description_block_token1,
    ACTIONS(787), 1,
      sym__dedent,
    STATE(264), 1,
      aux_sym_multiline_comment_repeat1,
  [7624] = 3,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [7634] = 3,
    ACTIONS(791), 1,
      anon_sym_COLON,
    ACTIONS(793), 1,
      anon_sym_QMARK,
    ACTIONS(795), 1,
      sym__newline,
  [7644] = 3,
    ACTIONS(797), 1,
      aux_sym__description_block_token1,
    ACTIONS(800), 1,
      sym__dedent,
    STATE(264), 1,
      aux_sym_multiline_comment_repeat1,
  [7654] = 3,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(802), 1,
      aux_sym__description_block_token1,
    STATE(252), 1,
      aux_sym__description_block,
  [7664] = 1,
    ACTIONS(37), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [7670] = 3,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_argument_list_repeat1,
  [7680] = 3,
    ACTIONS(807), 1,
      aux_sym__description_block_token1,
    ACTIONS(810), 1,
      anon_sym_DOTenddata,
    STATE(268), 1,
      aux_sym_multiline_comment_repeat1,
  [7690] = 3,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(812), 1,
      aux_sym__description_block_token1,
    STATE(250), 1,
      aux_sym__description_block,
  [7700] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_argument_list_repeat1,
  [7710] = 3,
    ACTIONS(816), 1,
      anon_sym_,
    ACTIONS(818), 1,
      sym__newline,
    STATE(288), 1,
      aux_sym_toggle_value_repeat1,
  [7720] = 3,
    ACTIONS(688), 1,
      sym_identifier,
    STATE(266), 1,
      sym_array_expression,
    STATE(286), 1,
      sym_ref,
  [7730] = 1,
    ACTIONS(480), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7736] = 3,
    ACTIONS(791), 1,
      anon_sym_COLON,
    ACTIONS(793), 1,
      anon_sym_QMARK,
    ACTIONS(820), 1,
      sym__newline,
  [7746] = 3,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [7756] = 3,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(739), 1,
      anon_sym_OR,
    ACTIONS(824), 1,
      sym__indent,
  [7766] = 3,
    ACTIONS(785), 1,
      aux_sym__description_block_token1,
    ACTIONS(826), 1,
      sym__dedent,
    STATE(264), 1,
      aux_sym_multiline_comment_repeat1,
  [7776] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_argument_list_repeat1,
  [7786] = 3,
    ACTIONS(830), 1,
      aux_sym__description_block_token1,
    ACTIONS(832), 1,
      anon_sym_DOTenddata,
    STATE(268), 1,
      aux_sym_multiline_comment_repeat1,
  [7796] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_argument_list_repeat1,
  [7806] = 3,
    ACTIONS(836), 1,
      anon_sym_,
    ACTIONS(839), 1,
      sym__newline,
    STATE(281), 1,
      aux_sym_toggle_value_repeat1,
  [7816] = 1,
    ACTIONS(488), 3,
      sym__indent,
      anon_sym_AND,
      anon_sym_OR,
  [7822] = 3,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [7832] = 2,
    ACTIONS(737), 1,
      anon_sym_AND,
    ACTIONS(488), 2,
      sym__indent,
      anon_sym_OR,
  [7840] = 3,
    ACTIONS(741), 1,
      sym__indent,
    ACTIONS(843), 1,
      anon_sym_If,
    STATE(163), 1,
      sym__block,
  [7850] = 1,
    ACTIONS(753), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
  [7856] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_argument_list_repeat1,
  [7866] = 3,
    ACTIONS(816), 1,
      anon_sym_,
    ACTIONS(847), 1,
      sym__newline,
    STATE(281), 1,
      aux_sym_toggle_value_repeat1,
  [7876] = 3,
    ACTIONS(785), 1,
      aux_sym__description_block_token1,
    ACTIONS(849), 1,
      sym__dedent,
    STATE(264), 1,
      aux_sym_multiline_comment_repeat1,
  [7886] = 3,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(851), 1,
      aux_sym__description_block_token1,
    STATE(256), 1,
      aux_sym__description_block,
  [7896] = 1,
    ACTIONS(853), 3,
      sym__indent,
      sym__dedent,
      aux_sym__description_block_token1,
  [7902] = 3,
    ACTIONS(694), 1,
      anon_sym_AND,
    ACTIONS(696), 1,
      anon_sym_OR,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [7912] = 2,
    ACTIONS(857), 1,
      aux_sym__description_block_token1,
    STATE(261), 1,
      aux_sym_multiline_comment_repeat1,
  [7919] = 2,
    ACTIONS(741), 1,
      sym__indent,
    STATE(247), 1,
      sym__block,
  [7926] = 2,
    ACTIONS(741), 1,
      sym__indent,
    STATE(159), 1,
      sym__block,
  [7933] = 2,
    ACTIONS(859), 1,
      sym__indent,
    STATE(200), 1,
      sym__block,
  [7940] = 1,
    ACTIONS(861), 2,
      sym__newline,
      anon_sym_,
  [7945] = 2,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_argument_list,
  [7952] = 2,
    ACTIONS(865), 1,
      aux_sym__description_block_token1,
    STATE(289), 1,
      aux_sym_multiline_comment_repeat1,
  [7959] = 2,
    ACTIONS(867), 1,
      sym_identifier,
    ACTIONS(869), 1,
      sym_type_name,
  [7966] = 2,
    ACTIONS(871), 1,
      sym_type_name,
    STATE(309), 1,
      sym_toggle_value,
  [7973] = 2,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_argument_list,
  [7980] = 2,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_argument_list,
  [7987] = 2,
    ACTIONS(877), 1,
      aux_sym__description_block_token1,
    STATE(277), 1,
      aux_sym_multiline_comment_repeat1,
  [7994] = 2,
    ACTIONS(879), 1,
      sym__indent,
    STATE(209), 1,
      sym__block,
  [8001] = 2,
    ACTIONS(881), 1,
      aux_sym__description_block_token1,
    STATE(279), 1,
      aux_sym_multiline_comment_repeat1,
  [8008] = 2,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_argument_list,
  [8015] = 1,
    ACTIONS(885), 1,
      anon_sym_COLON,
  [8019] = 1,
    ACTIONS(887), 1,
      sym__newline,
  [8023] = 1,
    ACTIONS(889), 1,
      anon_sym_COLON,
  [8027] = 1,
    ACTIONS(891), 1,
      sym_type_name,
  [8031] = 1,
    ACTIONS(893), 1,
      anon_sym_EQ,
  [8035] = 1,
    ACTIONS(820), 1,
      sym__newline,
  [8039] = 1,
    ACTIONS(795), 1,
      sym__newline,
  [8043] = 1,
    ACTIONS(895), 1,
      sym__newline,
  [8047] = 1,
    ACTIONS(897), 1,
      sym__newline,
  [8051] = 1,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
  [8055] = 1,
    ACTIONS(901), 1,
      sym_identifier,
  [8059] = 1,
    ACTIONS(903), 1,
      sym__newline,
  [8063] = 1,
    ACTIONS(905), 1,
      anon_sym_Case,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 113,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 191,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 450,
  [SMALL_STATE(13)] = 486,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 710,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 782,
  [SMALL_STATE(22)] = 818,
  [SMALL_STATE(23)] = 875,
  [SMALL_STATE(24)] = 932,
  [SMALL_STATE(25)] = 989,
  [SMALL_STATE(26)] = 1046,
  [SMALL_STATE(27)] = 1100,
  [SMALL_STATE(28)] = 1154,
  [SMALL_STATE(29)] = 1208,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1316,
  [SMALL_STATE(32)] = 1370,
  [SMALL_STATE(33)] = 1424,
  [SMALL_STATE(34)] = 1478,
  [SMALL_STATE(35)] = 1532,
  [SMALL_STATE(36)] = 1586,
  [SMALL_STATE(37)] = 1640,
  [SMALL_STATE(38)] = 1694,
  [SMALL_STATE(39)] = 1748,
  [SMALL_STATE(40)] = 1802,
  [SMALL_STATE(41)] = 1856,
  [SMALL_STATE(42)] = 1910,
  [SMALL_STATE(43)] = 1964,
  [SMALL_STATE(44)] = 2018,
  [SMALL_STATE(45)] = 2072,
  [SMALL_STATE(46)] = 2126,
  [SMALL_STATE(47)] = 2180,
  [SMALL_STATE(48)] = 2232,
  [SMALL_STATE(49)] = 2272,
  [SMALL_STATE(50)] = 2324,
  [SMALL_STATE(51)] = 2376,
  [SMALL_STATE(52)] = 2428,
  [SMALL_STATE(53)] = 2477,
  [SMALL_STATE(54)] = 2526,
  [SMALL_STATE(55)] = 2575,
  [SMALL_STATE(56)] = 2614,
  [SMALL_STATE(57)] = 2647,
  [SMALL_STATE(58)] = 2679,
  [SMALL_STATE(59)] = 2707,
  [SMALL_STATE(60)] = 2737,
  [SMALL_STATE(61)] = 2764,
  [SMALL_STATE(62)] = 2793,
  [SMALL_STATE(63)] = 2838,
  [SMALL_STATE(64)] = 2882,
  [SMALL_STATE(65)] = 2908,
  [SMALL_STATE(66)] = 2952,
  [SMALL_STATE(67)] = 2996,
  [SMALL_STATE(68)] = 3040,
  [SMALL_STATE(69)] = 3084,
  [SMALL_STATE(70)] = 3128,
  [SMALL_STATE(71)] = 3172,
  [SMALL_STATE(72)] = 3216,
  [SMALL_STATE(73)] = 3260,
  [SMALL_STATE(74)] = 3304,
  [SMALL_STATE(75)] = 3348,
  [SMALL_STATE(76)] = 3392,
  [SMALL_STATE(77)] = 3436,
  [SMALL_STATE(78)] = 3480,
  [SMALL_STATE(79)] = 3524,
  [SMALL_STATE(80)] = 3568,
  [SMALL_STATE(81)] = 3594,
  [SMALL_STATE(82)] = 3638,
  [SMALL_STATE(83)] = 3682,
  [SMALL_STATE(84)] = 3726,
  [SMALL_STATE(85)] = 3770,
  [SMALL_STATE(86)] = 3796,
  [SMALL_STATE(87)] = 3822,
  [SMALL_STATE(88)] = 3866,
  [SMALL_STATE(89)] = 3910,
  [SMALL_STATE(90)] = 3954,
  [SMALL_STATE(91)] = 3998,
  [SMALL_STATE(92)] = 4024,
  [SMALL_STATE(93)] = 4068,
  [SMALL_STATE(94)] = 4094,
  [SMALL_STATE(95)] = 4138,
  [SMALL_STATE(96)] = 4182,
  [SMALL_STATE(97)] = 4226,
  [SMALL_STATE(98)] = 4270,
  [SMALL_STATE(99)] = 4314,
  [SMALL_STATE(100)] = 4358,
  [SMALL_STATE(101)] = 4402,
  [SMALL_STATE(102)] = 4446,
  [SMALL_STATE(103)] = 4490,
  [SMALL_STATE(104)] = 4534,
  [SMALL_STATE(105)] = 4560,
  [SMALL_STATE(106)] = 4590,
  [SMALL_STATE(107)] = 4634,
  [SMALL_STATE(108)] = 4678,
  [SMALL_STATE(109)] = 4710,
  [SMALL_STATE(110)] = 4754,
  [SMALL_STATE(111)] = 4798,
  [SMALL_STATE(112)] = 4824,
  [SMALL_STATE(113)] = 4850,
  [SMALL_STATE(114)] = 4876,
  [SMALL_STATE(115)] = 4910,
  [SMALL_STATE(116)] = 4946,
  [SMALL_STATE(117)] = 4974,
  [SMALL_STATE(118)] = 5005,
  [SMALL_STATE(119)] = 5038,
  [SMALL_STATE(120)] = 5063,
  [SMALL_STATE(121)] = 5088,
  [SMALL_STATE(122)] = 5113,
  [SMALL_STATE(123)] = 5138,
  [SMALL_STATE(124)] = 5163,
  [SMALL_STATE(125)] = 5188,
  [SMALL_STATE(126)] = 5213,
  [SMALL_STATE(127)] = 5238,
  [SMALL_STATE(128)] = 5263,
  [SMALL_STATE(129)] = 5288,
  [SMALL_STATE(130)] = 5317,
  [SMALL_STATE(131)] = 5344,
  [SMALL_STATE(132)] = 5379,
  [SMALL_STATE(133)] = 5420,
  [SMALL_STATE(134)] = 5461,
  [SMALL_STATE(135)] = 5499,
  [SMALL_STATE(136)] = 5537,
  [SMALL_STATE(137)] = 5575,
  [SMALL_STATE(138)] = 5610,
  [SMALL_STATE(139)] = 5645,
  [SMALL_STATE(140)] = 5668,
  [SMALL_STATE(141)] = 5691,
  [SMALL_STATE(142)] = 5721,
  [SMALL_STATE(143)] = 5750,
  [SMALL_STATE(144)] = 5767,
  [SMALL_STATE(145)] = 5784,
  [SMALL_STATE(146)] = 5801,
  [SMALL_STATE(147)] = 5822,
  [SMALL_STATE(148)] = 5841,
  [SMALL_STATE(149)] = 5862,
  [SMALL_STATE(150)] = 5879,
  [SMALL_STATE(151)] = 5908,
  [SMALL_STATE(152)] = 5925,
  [SMALL_STATE(153)] = 5946,
  [SMALL_STATE(154)] = 5974,
  [SMALL_STATE(155)] = 5992,
  [SMALL_STATE(156)] = 6010,
  [SMALL_STATE(157)] = 6025,
  [SMALL_STATE(158)] = 6040,
  [SMALL_STATE(159)] = 6055,
  [SMALL_STATE(160)] = 6070,
  [SMALL_STATE(161)] = 6085,
  [SMALL_STATE(162)] = 6100,
  [SMALL_STATE(163)] = 6115,
  [SMALL_STATE(164)] = 6130,
  [SMALL_STATE(165)] = 6150,
  [SMALL_STATE(166)] = 6176,
  [SMALL_STATE(167)] = 6196,
  [SMALL_STATE(168)] = 6210,
  [SMALL_STATE(169)] = 6236,
  [SMALL_STATE(170)] = 6262,
  [SMALL_STATE(171)] = 6278,
  [SMALL_STATE(172)] = 6298,
  [SMALL_STATE(173)] = 6312,
  [SMALL_STATE(174)] = 6336,
  [SMALL_STATE(175)] = 6358,
  [SMALL_STATE(176)] = 6378,
  [SMALL_STATE(177)] = 6392,
  [SMALL_STATE(178)] = 6406,
  [SMALL_STATE(179)] = 6432,
  [SMALL_STATE(180)] = 6452,
  [SMALL_STATE(181)] = 6470,
  [SMALL_STATE(182)] = 6484,
  [SMALL_STATE(183)] = 6498,
  [SMALL_STATE(184)] = 6512,
  [SMALL_STATE(185)] = 6526,
  [SMALL_STATE(186)] = 6540,
  [SMALL_STATE(187)] = 6554,
  [SMALL_STATE(188)] = 6573,
  [SMALL_STATE(189)] = 6590,
  [SMALL_STATE(190)] = 6609,
  [SMALL_STATE(191)] = 6628,
  [SMALL_STATE(192)] = 6643,
  [SMALL_STATE(193)] = 6662,
  [SMALL_STATE(194)] = 6679,
  [SMALL_STATE(195)] = 6693,
  [SMALL_STATE(196)] = 6707,
  [SMALL_STATE(197)] = 6721,
  [SMALL_STATE(198)] = 6735,
  [SMALL_STATE(199)] = 6751,
  [SMALL_STATE(200)] = 6765,
  [SMALL_STATE(201)] = 6779,
  [SMALL_STATE(202)] = 6793,
  [SMALL_STATE(203)] = 6809,
  [SMALL_STATE(204)] = 6823,
  [SMALL_STATE(205)] = 6836,
  [SMALL_STATE(206)] = 6849,
  [SMALL_STATE(207)] = 6862,
  [SMALL_STATE(208)] = 6881,
  [SMALL_STATE(209)] = 6894,
  [SMALL_STATE(210)] = 6907,
  [SMALL_STATE(211)] = 6926,
  [SMALL_STATE(212)] = 6939,
  [SMALL_STATE(213)] = 6957,
  [SMALL_STATE(214)] = 6975,
  [SMALL_STATE(215)] = 6993,
  [SMALL_STATE(216)] = 7011,
  [SMALL_STATE(217)] = 7029,
  [SMALL_STATE(218)] = 7045,
  [SMALL_STATE(219)] = 7063,
  [SMALL_STATE(220)] = 7081,
  [SMALL_STATE(221)] = 7099,
  [SMALL_STATE(222)] = 7117,
  [SMALL_STATE(223)] = 7134,
  [SMALL_STATE(224)] = 7151,
  [SMALL_STATE(225)] = 7164,
  [SMALL_STATE(226)] = 7181,
  [SMALL_STATE(227)] = 7200,
  [SMALL_STATE(228)] = 7213,
  [SMALL_STATE(229)] = 7229,
  [SMALL_STATE(230)] = 7241,
  [SMALL_STATE(231)] = 7257,
  [SMALL_STATE(232)] = 7273,
  [SMALL_STATE(233)] = 7283,
  [SMALL_STATE(234)] = 7297,
  [SMALL_STATE(235)] = 7313,
  [SMALL_STATE(236)] = 7329,
  [SMALL_STATE(237)] = 7341,
  [SMALL_STATE(238)] = 7351,
  [SMALL_STATE(239)] = 7365,
  [SMALL_STATE(240)] = 7381,
  [SMALL_STATE(241)] = 7394,
  [SMALL_STATE(242)] = 7407,
  [SMALL_STATE(243)] = 7414,
  [SMALL_STATE(244)] = 7425,
  [SMALL_STATE(245)] = 7438,
  [SMALL_STATE(246)] = 7449,
  [SMALL_STATE(247)] = 7456,
  [SMALL_STATE(248)] = 7463,
  [SMALL_STATE(249)] = 7476,
  [SMALL_STATE(250)] = 7487,
  [SMALL_STATE(251)] = 7500,
  [SMALL_STATE(252)] = 7513,
  [SMALL_STATE(253)] = 7526,
  [SMALL_STATE(254)] = 7533,
  [SMALL_STATE(255)] = 7546,
  [SMALL_STATE(256)] = 7557,
  [SMALL_STATE(257)] = 7570,
  [SMALL_STATE(258)] = 7583,
  [SMALL_STATE(259)] = 7592,
  [SMALL_STATE(260)] = 7601,
  [SMALL_STATE(261)] = 7614,
  [SMALL_STATE(262)] = 7624,
  [SMALL_STATE(263)] = 7634,
  [SMALL_STATE(264)] = 7644,
  [SMALL_STATE(265)] = 7654,
  [SMALL_STATE(266)] = 7664,
  [SMALL_STATE(267)] = 7670,
  [SMALL_STATE(268)] = 7680,
  [SMALL_STATE(269)] = 7690,
  [SMALL_STATE(270)] = 7700,
  [SMALL_STATE(271)] = 7710,
  [SMALL_STATE(272)] = 7720,
  [SMALL_STATE(273)] = 7730,
  [SMALL_STATE(274)] = 7736,
  [SMALL_STATE(275)] = 7746,
  [SMALL_STATE(276)] = 7756,
  [SMALL_STATE(277)] = 7766,
  [SMALL_STATE(278)] = 7776,
  [SMALL_STATE(279)] = 7786,
  [SMALL_STATE(280)] = 7796,
  [SMALL_STATE(281)] = 7806,
  [SMALL_STATE(282)] = 7816,
  [SMALL_STATE(283)] = 7822,
  [SMALL_STATE(284)] = 7832,
  [SMALL_STATE(285)] = 7840,
  [SMALL_STATE(286)] = 7850,
  [SMALL_STATE(287)] = 7856,
  [SMALL_STATE(288)] = 7866,
  [SMALL_STATE(289)] = 7876,
  [SMALL_STATE(290)] = 7886,
  [SMALL_STATE(291)] = 7896,
  [SMALL_STATE(292)] = 7902,
  [SMALL_STATE(293)] = 7912,
  [SMALL_STATE(294)] = 7919,
  [SMALL_STATE(295)] = 7926,
  [SMALL_STATE(296)] = 7933,
  [SMALL_STATE(297)] = 7940,
  [SMALL_STATE(298)] = 7945,
  [SMALL_STATE(299)] = 7952,
  [SMALL_STATE(300)] = 7959,
  [SMALL_STATE(301)] = 7966,
  [SMALL_STATE(302)] = 7973,
  [SMALL_STATE(303)] = 7980,
  [SMALL_STATE(304)] = 7987,
  [SMALL_STATE(305)] = 7994,
  [SMALL_STATE(306)] = 8001,
  [SMALL_STATE(307)] = 8008,
  [SMALL_STATE(308)] = 8015,
  [SMALL_STATE(309)] = 8019,
  [SMALL_STATE(310)] = 8023,
  [SMALL_STATE(311)] = 8027,
  [SMALL_STATE(312)] = 8031,
  [SMALL_STATE(313)] = 8035,
  [SMALL_STATE(314)] = 8039,
  [SMALL_STATE(315)] = 8043,
  [SMALL_STATE(316)] = 8047,
  [SMALL_STATE(317)] = 8051,
  [SMALL_STATE(318)] = 8055,
  [SMALL_STATE(319)] = 8059,
  [SMALL_STATE(320)] = 8063,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 1, .production_id = 9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 25),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expressions, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expressions, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 21),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 21),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 19),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 19),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 15),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(320),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(36),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(285),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(29),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(295),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(26),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(226),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(251),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(51),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(155),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 22),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(310),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(296),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(296),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(223),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(193),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(318),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(308),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(305),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(305),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(223),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(198),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(75),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expressions, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 4, .production_id = 11),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 16),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 24),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 21),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 17),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_call, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case_statement, 6, .production_id = 26),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2, .production_id = 10),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4, .production_id = 23),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_statement, 3, .production_id = 17),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 17),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 10),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(137),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_section, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_section, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_text, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_text, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(138),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 3),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 4, .production_id = 11),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_block, 4, .production_id = 12),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_block, 4, .production_id = 12),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_section, 3, .production_id = 4),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_section, 3, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_section, 2, .production_id = 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_section, 2, .production_id = 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_text, 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_text, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(45),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(294),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2), SHIFT_REPEAT(237),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(238),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(238),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2), SHIFT_REPEAT(300),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2), SHIFT_REPEAT(300),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_name, 1, .production_id = 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, .production_id = 1),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(89),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_name, 2, .production_id = 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 2, .production_id = 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 2, .production_id = 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_name_repeat1, 2, .production_id = 5),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_name_repeat1, 2, .production_id = 5),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(233),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(233),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primary_expressions_repeat1, 2), SHIFT_REPEAT(97),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_case_statement_repeat1, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case, 3, .production_id = 27),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refs, 2, .production_id = 18),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refs_repeat1, 2), SHIFT_REPEAT(272),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_declaration_repeat1, 2), SHIFT_REPEAT(254),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_declaration_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_declaration_repeat1, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refs, 1, .production_id = 9),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_block, 2), SHIFT_REPEAT(257),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_block, 2), SHIFT_REPEAT(290),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_block, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(264),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(35),
  [807] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(268),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toggle_value, 1, .production_id = 7),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2), SHIFT_REPEAT(311),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toggle_value, 2, .production_id = 14),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_block, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toggle_value_repeat1, 2, .production_id = 20),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_toggle, 3, .production_id = 8),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 4, .production_id = 13),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 6),
  [899] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_value, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
