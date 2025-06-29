#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 410
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 1
#define TOKEN_COUNT 124
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
    anon_sym_true = 1,
    anon_sym_false = 2,
    anon_sym_null = 3,
    anon_sym_none = 4,
    anon_sym_DASH = 5,
    anon_sym_PLUS = 6,
    sym_dec_literal = 7,
    anon_sym_e = 8,
    anon_sym_e_PLUS = 9,
    anon_sym_e_DASH = 10,
    anon_sym__ = 11,
    sym_oct_literal = 12,
    sym_bin_literal = 13,
    sym_hex_literal = 14,
    anon_sym_DOT = 15,
    anon_sym_LBRACK = 16,
    anon_sym_COMMA = 17,
    anon_sym_RBRACK = 18,
    anon_sym_LPAREN = 19,
    anon_sym_RPAREN = 20,
    anon_sym_LBRACE = 21,
    anon_sym_COLON = 22,
    anon_sym_RBRACE = 23,
    anon_sym_DQUOTE = 24,
    aux_sym_string_literal_token1 = 25,
    anon_sym_BSLASH_DQUOTE = 26,
    anon_sym_SQUOTE = 27,
    aux_sym_string_literal_token2 = 28,
    anon_sym_BSLASH_SQUOTE = 29,
    anon_sym_is = 30,
    anon_sym_boolean = 31,
    anon_sym_callable = 32,
    anon_sym_defined = 33,
    anon_sym_divisibleby = 34,
    anon_sym_eq = 35,
    anon_sym_escaped = 36,
    anon_sym_even = 37,
    anon_sym_filter = 38,
    anon_sym_float = 39,
    anon_sym_ge = 40,
    anon_sym_gt = 41,
    anon_sym_in = 42,
    anon_sym_integer = 43,
    anon_sym_iterable = 44,
    anon_sym_le = 45,
    anon_sym_lower = 46,
    anon_sym_lt = 47,
    anon_sym_mapping = 48,
    anon_sym_ne = 49,
    anon_sym_number = 50,
    anon_sym_odd = 51,
    anon_sym_sameas = 52,
    anon_sym_sequence = 53,
    anon_sym_string = 54,
    anon_sym_test = 55,
    anon_sym_undefined = 56,
    anon_sym_upper = 57,
    anon_sym_EQ = 58,
    anon_sym_STAR = 59,
    anon_sym_SLASH = 60,
    anon_sym_SLASH_SLASH = 61,
    anon_sym_PERCENT = 62,
    anon_sym_STAR_STAR = 63,
    anon_sym_EQ_EQ = 64,
    anon_sym_BANG_EQ = 65,
    anon_sym_GT = 66,
    anon_sym_GT_EQ = 67,
    anon_sym_LT = 68,
    anon_sym_LT_EQ = 69,
    anon_sym_and = 70,
    anon_sym_or = 71,
    anon_sym_PIPE = 72,
    anon_sym_TILDE = 73,
    anon_sym_not = 74,
    anon_sym_BANG = 75,
    anon_sym_do = 76,
    anon_sym_autoescape = 77,
    anon_sym_trans = 78,
    anon_sym_pluralize = 79,
    anon_sym_if = 80,
    anon_sym_else = 81,
    anon_sym_block = 82,
    anon_sym_macro = 83,
    anon_sym_extends = 84,
    anon_sym_call = 85,
    anon_sym_with = 86,
    anon_sym_import = 87,
    anon_sym_from = 88,
    anon_sym_as = 89,
    anon_sym_include = 90,
    anon_sym_ignore = 91,
    anon_sym_missing = 92,
    anon_sym_without = 93,
    anon_sym_context = 94,
    anon_sym_set = 95,
    anon_sym_for = 96,
    anon_sym_recursive = 97,
    anon_sym_POUND = 98,
    sym_identifier = 99,
    anon_sym_POUND_POUND = 100,
    aux_sym_comment_token1 = 101,
    aux_sym_comment_token2 = 102,
    anon_sym_LBRACE_POUND = 103,
    aux_sym_comment_token3 = 104,
    anon_sym_POUND_RBRACE = 105,
    anon_sym_endfor = 106,
    anon_sym_elif = 107,
    anon_sym_endif = 108,
    anon_sym_endblock = 109,
    anon_sym_endwith = 110,
    anon_sym_endfilter = 111,
    anon_sym_endmacro = 112,
    anon_sym_endcall = 113,
    anon_sym_endset = 114,
    anon_sym_endtrans = 115,
    anon_sym_continue = 116,
    anon_sym_break = 117,
    anon_sym_debug = 118,
    anon_sym_endautoescape = 119,
    anon_sym_raw = 120,
    sym__raw_char = 121,
    sym_raw_end = 122,
    sym__eof = 123,
    sym_source = 124,
    sym_literal = 125,
    sym_boolean_literal = 126,
    sym_null_literal = 127,
    sym_number_literal = 128,
    sym_big_dec_literal = 129,
    sym_float_literal = 130,
    sym_list_literal = 131,
    sym_tuple_literal = 132,
    sym_dict_literal = 133,
    sym_string_literal = 134,
    sym_expression = 135,
    sym_binary_expression = 136,
    sym_builtin_test = 137,
    sym_assignment_expression = 138,
    sym_in_expression = 139,
    sym_binary_operator = 140,
    sym_unary_expression = 141,
    sym_unary_operator = 142,
    sym_primary_expression = 143,
    sym_function_call = 144,
    sym_arg = 145,
    sym_inline_trans = 146,
    sym_do_statement = 147,
    sym_autoescape_statement = 148,
    sym_trans_statement = 149,
    sym_pluralize_statement = 150,
    sym_ternary_expression = 151,
    sym_block_statement = 152,
    sym_filter_statement = 153,
    sym_macro_statement = 154,
    sym_extends_statement = 155,
    sym_call_statement = 156,
    sym_with_statement = 157,
    sym_import_statement = 158,
    sym_import_from = 159,
    sym_import_as = 160,
    sym_import_attribute = 161,
    sym_include_statement = 162,
    sym_include_attribute = 163,
    sym_attribute_ignore = 164,
    sym_attribute_context = 165,
    sym_set_statement = 166,
    sym_for_statement = 167,
    sym_if_expression = 168,
    sym_comment = 169,
    sym_statement = 170,
    sym_line_statement = 171,
    sym_raw_block = 172,
    sym__END = 173,
    sym__NEWLINE = 174,
    aux_sym_source_repeat1 = 175,
    aux_sym_list_literal_repeat1 = 176,
    aux_sym_dict_literal_repeat1 = 177,
    aux_sym_string_literal_repeat1 = 178,
    aux_sym_string_literal_repeat2 = 179,
    aux_sym_assignment_expression_repeat1 = 180,
    aux_sym_in_expression_repeat1 = 181,
    aux_sym_function_call_repeat1 = 182,
    aux_sym_trans_statement_repeat1 = 183,
    aux_sym_with_statement_repeat1 = 184,
    aux_sym_include_statement_repeat1 = 185,
    aux_sym_comment_repeat1 = 186,
    aux_sym_raw_block_repeat1 = 187,
    alias_sym_raw_body = 188,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [anon_sym_null] = "null",
    [anon_sym_none] = "none",
    [anon_sym_DASH] = "-",
    [anon_sym_PLUS] = "+",
    [sym_dec_literal] = "dec_literal",
    [anon_sym_e] = "e",
    [anon_sym_e_PLUS] = "e+",
    [anon_sym_e_DASH] = "e-",
    [anon_sym__] = "_",
    [sym_oct_literal] = "oct_literal",
    [sym_bin_literal] = "bin_literal",
    [sym_hex_literal] = "hex_literal",
    [anon_sym_DOT] = ".",
    [anon_sym_LBRACK] = "[",
    [anon_sym_COMMA] = ",",
    [anon_sym_RBRACK] = "]",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_LBRACE] = "{",
    [anon_sym_COLON] = ":",
    [anon_sym_RBRACE] = "}",
    [anon_sym_DQUOTE] = "\"",
    [aux_sym_string_literal_token1] = "string_literal_token1",
    [anon_sym_BSLASH_DQUOTE] = "\\\"",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_string_literal_token2] = "string_literal_token2",
    [anon_sym_BSLASH_SQUOTE] = "\\'",
    [anon_sym_is] = "binary_operator",
    [anon_sym_boolean] = "boolean",
    [anon_sym_callable] = "callable",
    [anon_sym_defined] = "defined",
    [anon_sym_divisibleby] = "divisibleby",
    [anon_sym_eq] = "eq",
    [anon_sym_escaped] = "escaped",
    [anon_sym_even] = "even",
    [anon_sym_filter] = "filter",
    [anon_sym_float] = "float",
    [anon_sym_ge] = "ge",
    [anon_sym_gt] = "gt",
    [anon_sym_in] = "in",
    [anon_sym_integer] = "integer",
    [anon_sym_iterable] = "iterable",
    [anon_sym_le] = "le",
    [anon_sym_lower] = "lower",
    [anon_sym_lt] = "lt",
    [anon_sym_mapping] = "mapping",
    [anon_sym_ne] = "ne",
    [anon_sym_number] = "number",
    [anon_sym_odd] = "odd",
    [anon_sym_sameas] = "sameas",
    [anon_sym_sequence] = "sequence",
    [anon_sym_string] = "string",
    [anon_sym_test] = "test",
    [anon_sym_undefined] = "undefined",
    [anon_sym_upper] = "upper",
    [anon_sym_EQ] = "binary_operator",
    [anon_sym_STAR] = "*",
    [anon_sym_SLASH] = "/",
    [anon_sym_SLASH_SLASH] = "//",
    [anon_sym_PERCENT] = "%",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym_EQ_EQ] = "==",
    [anon_sym_BANG_EQ] = "!=",
    [anon_sym_GT] = ">",
    [anon_sym_GT_EQ] = ">=",
    [anon_sym_LT] = "<",
    [anon_sym_LT_EQ] = "<=",
    [anon_sym_and] = "and",
    [anon_sym_or] = "or",
    [anon_sym_PIPE] = "|",
    [anon_sym_TILDE] = "~",
    [anon_sym_not] = "not",
    [anon_sym_BANG] = "!",
    [anon_sym_do] = "do",
    [anon_sym_autoescape] = "autoescape",
    [anon_sym_trans] = "trans",
    [anon_sym_pluralize] = "pluralize",
    [anon_sym_if] = "if",
    [anon_sym_else] = "else",
    [anon_sym_block] = "block",
    [anon_sym_macro] = "macro",
    [anon_sym_extends] = "extends",
    [anon_sym_call] = "call",
    [anon_sym_with] = "with",
    [anon_sym_import] = "import",
    [anon_sym_from] = "from",
    [anon_sym_as] = "as",
    [anon_sym_include] = "include",
    [anon_sym_ignore] = "ignore",
    [anon_sym_missing] = "missing",
    [anon_sym_without] = "without",
    [anon_sym_context] = "context",
    [anon_sym_set] = "set",
    [anon_sym_for] = "for",
    [anon_sym_recursive] = "recursive",
    [anon_sym_POUND] = "#",
    [sym_identifier] = "identifier",
    [anon_sym_POUND_POUND] = "##",
    [aux_sym_comment_token1] = "comment_token1",
    [aux_sym_comment_token2] = "comment_token2",
    [anon_sym_LBRACE_POUND] = "{#",
    [aux_sym_comment_token3] = "comment_token3",
    [anon_sym_POUND_RBRACE] = "#}",
    [anon_sym_endfor] = "endfor",
    [anon_sym_elif] = "elif",
    [anon_sym_endif] = "endif",
    [anon_sym_endblock] = "endblock",
    [anon_sym_endwith] = "endwith",
    [anon_sym_endfilter] = "endfilter",
    [anon_sym_endmacro] = "endmacro",
    [anon_sym_endcall] = "endcall",
    [anon_sym_endset] = "endset",
    [anon_sym_endtrans] = "endtrans",
    [anon_sym_continue] = "continue",
    [anon_sym_break] = "break",
    [anon_sym_debug] = "debug",
    [anon_sym_endautoescape] = "endautoescape",
    [anon_sym_raw] = "raw",
    [sym__raw_char] = "_raw_char",
    [sym_raw_end] = "raw_end",
    [sym__eof] = "_eof",
    [sym_source] = "source",
    [sym_literal] = "literal",
    [sym_boolean_literal] = "boolean_literal",
    [sym_null_literal] = "null_literal",
    [sym_number_literal] = "number_literal",
    [sym_big_dec_literal] = "big_dec_literal",
    [sym_float_literal] = "float_literal",
    [sym_list_literal] = "list_literal",
    [sym_tuple_literal] = "tuple_literal",
    [sym_dict_literal] = "dict_literal",
    [sym_string_literal] = "string_literal",
    [sym_expression] = "expression",
    [sym_binary_expression] = "binary_expression",
    [sym_builtin_test] = "builtin_test",
    [sym_assignment_expression] = "assignment_expression",
    [sym_in_expression] = "in_expression",
    [sym_binary_operator] = "binary_operator",
    [sym_unary_expression] = "unary_expression",
    [sym_unary_operator] = "unary_operator",
    [sym_primary_expression] = "primary_expression",
    [sym_function_call] = "function_call",
    [sym_arg] = "arg",
    [sym_inline_trans] = "inline_trans",
    [sym_do_statement] = "do_statement",
    [sym_autoescape_statement] = "autoescape_statement",
    [sym_trans_statement] = "trans_statement",
    [sym_pluralize_statement] = "pluralize_statement",
    [sym_ternary_expression] = "ternary_expression",
    [sym_block_statement] = "block_statement",
    [sym_filter_statement] = "filter_statement",
    [sym_macro_statement] = "macro_statement",
    [sym_extends_statement] = "extends_statement",
    [sym_call_statement] = "call_statement",
    [sym_with_statement] = "with_statement",
    [sym_import_statement] = "import_statement",
    [sym_import_from] = "import_from",
    [sym_import_as] = "import_as",
    [sym_import_attribute] = "import_attribute",
    [sym_include_statement] = "include_statement",
    [sym_include_attribute] = "include_attribute",
    [sym_attribute_ignore] = "attribute_ignore",
    [sym_attribute_context] = "attribute_context",
    [sym_set_statement] = "set_statement",
    [sym_for_statement] = "for_statement",
    [sym_if_expression] = "if_expression",
    [sym_comment] = "comment",
    [sym_statement] = "statement",
    [sym_line_statement] = "line_statement",
    [sym_raw_block] = "raw_block",
    [sym__END] = "_END",
    [sym__NEWLINE] = "_NEWLINE",
    [aux_sym_source_repeat1] = "source_repeat1",
    [aux_sym_list_literal_repeat1] = "list_literal_repeat1",
    [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
    [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
    [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
    [aux_sym_assignment_expression_repeat1] = "assignment_expression_repeat1",
    [aux_sym_in_expression_repeat1] = "in_expression_repeat1",
    [aux_sym_function_call_repeat1] = "function_call_repeat1",
    [aux_sym_trans_statement_repeat1] = "trans_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_include_statement_repeat1] = "include_statement_repeat1",
    [aux_sym_comment_repeat1] = "comment_repeat1",
    [aux_sym_raw_block_repeat1] = "raw_block_repeat1",
    [alias_sym_raw_body] = "raw_body",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_true] = anon_sym_true,
    [anon_sym_false] = anon_sym_false,
    [anon_sym_null] = anon_sym_null,
    [anon_sym_none] = anon_sym_none,
    [anon_sym_DASH] = anon_sym_DASH,
    [anon_sym_PLUS] = anon_sym_PLUS,
    [sym_dec_literal] = sym_dec_literal,
    [anon_sym_e] = anon_sym_e,
    [anon_sym_e_PLUS] = anon_sym_e_PLUS,
    [anon_sym_e_DASH] = anon_sym_e_DASH,
    [anon_sym__] = anon_sym__,
    [sym_oct_literal] = sym_oct_literal,
    [sym_bin_literal] = sym_bin_literal,
    [sym_hex_literal] = sym_hex_literal,
    [anon_sym_DOT] = anon_sym_DOT,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
    [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
    [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
    [anon_sym_is] = sym_binary_operator,
    [anon_sym_boolean] = anon_sym_boolean,
    [anon_sym_callable] = anon_sym_callable,
    [anon_sym_defined] = anon_sym_defined,
    [anon_sym_divisibleby] = anon_sym_divisibleby,
    [anon_sym_eq] = anon_sym_eq,
    [anon_sym_escaped] = anon_sym_escaped,
    [anon_sym_even] = anon_sym_even,
    [anon_sym_filter] = anon_sym_filter,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_ge] = anon_sym_ge,
    [anon_sym_gt] = anon_sym_gt,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_integer] = anon_sym_integer,
    [anon_sym_iterable] = anon_sym_iterable,
    [anon_sym_le] = anon_sym_le,
    [anon_sym_lower] = anon_sym_lower,
    [anon_sym_lt] = anon_sym_lt,
    [anon_sym_mapping] = anon_sym_mapping,
    [anon_sym_ne] = anon_sym_ne,
    [anon_sym_number] = anon_sym_number,
    [anon_sym_odd] = anon_sym_odd,
    [anon_sym_sameas] = anon_sym_sameas,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_test] = anon_sym_test,
    [anon_sym_undefined] = anon_sym_undefined,
    [anon_sym_upper] = anon_sym_upper,
    [anon_sym_EQ] = sym_binary_operator,
    [anon_sym_STAR] = anon_sym_STAR,
    [anon_sym_SLASH] = anon_sym_SLASH,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [anon_sym_PERCENT] = anon_sym_PERCENT,
    [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
    [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
    [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_GT_EQ] = anon_sym_GT_EQ,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_LT_EQ] = anon_sym_LT_EQ,
    [anon_sym_and] = anon_sym_and,
    [anon_sym_or] = anon_sym_or,
    [anon_sym_PIPE] = anon_sym_PIPE,
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_not] = anon_sym_not,
    [anon_sym_BANG] = anon_sym_BANG,
    [anon_sym_do] = anon_sym_do,
    [anon_sym_autoescape] = anon_sym_autoescape,
    [anon_sym_trans] = anon_sym_trans,
    [anon_sym_pluralize] = anon_sym_pluralize,
    [anon_sym_if] = anon_sym_if,
    [anon_sym_else] = anon_sym_else,
    [anon_sym_block] = anon_sym_block,
    [anon_sym_macro] = anon_sym_macro,
    [anon_sym_extends] = anon_sym_extends,
    [anon_sym_call] = anon_sym_call,
    [anon_sym_with] = anon_sym_with,
    [anon_sym_import] = anon_sym_import,
    [anon_sym_from] = anon_sym_from,
    [anon_sym_as] = anon_sym_as,
    [anon_sym_include] = anon_sym_include,
    [anon_sym_ignore] = anon_sym_ignore,
    [anon_sym_missing] = anon_sym_missing,
    [anon_sym_without] = anon_sym_without,
    [anon_sym_context] = anon_sym_context,
    [anon_sym_set] = anon_sym_set,
    [anon_sym_for] = anon_sym_for,
    [anon_sym_recursive] = anon_sym_recursive,
    [anon_sym_POUND] = anon_sym_POUND,
    [sym_identifier] = sym_identifier,
    [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [aux_sym_comment_token2] = aux_sym_comment_token2,
    [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
    [aux_sym_comment_token3] = aux_sym_comment_token3,
    [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
    [anon_sym_endfor] = anon_sym_endfor,
    [anon_sym_elif] = anon_sym_elif,
    [anon_sym_endif] = anon_sym_endif,
    [anon_sym_endblock] = anon_sym_endblock,
    [anon_sym_endwith] = anon_sym_endwith,
    [anon_sym_endfilter] = anon_sym_endfilter,
    [anon_sym_endmacro] = anon_sym_endmacro,
    [anon_sym_endcall] = anon_sym_endcall,
    [anon_sym_endset] = anon_sym_endset,
    [anon_sym_endtrans] = anon_sym_endtrans,
    [anon_sym_continue] = anon_sym_continue,
    [anon_sym_break] = anon_sym_break,
    [anon_sym_debug] = anon_sym_debug,
    [anon_sym_endautoescape] = anon_sym_endautoescape,
    [anon_sym_raw] = anon_sym_raw,
    [sym__raw_char] = sym__raw_char,
    [sym_raw_end] = sym_raw_end,
    [sym__eof] = sym__eof,
    [sym_source] = sym_source,
    [sym_literal] = sym_literal,
    [sym_boolean_literal] = sym_boolean_literal,
    [sym_null_literal] = sym_null_literal,
    [sym_number_literal] = sym_number_literal,
    [sym_big_dec_literal] = sym_big_dec_literal,
    [sym_float_literal] = sym_float_literal,
    [sym_list_literal] = sym_list_literal,
    [sym_tuple_literal] = sym_tuple_literal,
    [sym_dict_literal] = sym_dict_literal,
    [sym_string_literal] = sym_string_literal,
    [sym_expression] = sym_expression,
    [sym_binary_expression] = sym_binary_expression,
    [sym_builtin_test] = sym_builtin_test,
    [sym_assignment_expression] = sym_assignment_expression,
    [sym_in_expression] = sym_in_expression,
    [sym_binary_operator] = sym_binary_operator,
    [sym_unary_expression] = sym_unary_expression,
    [sym_unary_operator] = sym_unary_operator,
    [sym_primary_expression] = sym_primary_expression,
    [sym_function_call] = sym_function_call,
    [sym_arg] = sym_arg,
    [sym_inline_trans] = sym_inline_trans,
    [sym_do_statement] = sym_do_statement,
    [sym_autoescape_statement] = sym_autoescape_statement,
    [sym_trans_statement] = sym_trans_statement,
    [sym_pluralize_statement] = sym_pluralize_statement,
    [sym_ternary_expression] = sym_ternary_expression,
    [sym_block_statement] = sym_block_statement,
    [sym_filter_statement] = sym_filter_statement,
    [sym_macro_statement] = sym_macro_statement,
    [sym_extends_statement] = sym_extends_statement,
    [sym_call_statement] = sym_call_statement,
    [sym_with_statement] = sym_with_statement,
    [sym_import_statement] = sym_import_statement,
    [sym_import_from] = sym_import_from,
    [sym_import_as] = sym_import_as,
    [sym_import_attribute] = sym_import_attribute,
    [sym_include_statement] = sym_include_statement,
    [sym_include_attribute] = sym_include_attribute,
    [sym_attribute_ignore] = sym_attribute_ignore,
    [sym_attribute_context] = sym_attribute_context,
    [sym_set_statement] = sym_set_statement,
    [sym_for_statement] = sym_for_statement,
    [sym_if_expression] = sym_if_expression,
    [sym_comment] = sym_comment,
    [sym_statement] = sym_statement,
    [sym_line_statement] = sym_line_statement,
    [sym_raw_block] = sym_raw_block,
    [sym__END] = sym__END,
    [sym__NEWLINE] = sym__NEWLINE,
    [aux_sym_source_repeat1] = aux_sym_source_repeat1,
    [aux_sym_list_literal_repeat1] = aux_sym_list_literal_repeat1,
    [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
    [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
    [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
    [aux_sym_assignment_expression_repeat1] = aux_sym_assignment_expression_repeat1,
    [aux_sym_in_expression_repeat1] = aux_sym_in_expression_repeat1,
    [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
    [aux_sym_trans_statement_repeat1] = aux_sym_trans_statement_repeat1,
    [aux_sym_with_statement_repeat1] = aux_sym_with_statement_repeat1,
    [aux_sym_include_statement_repeat1] = aux_sym_include_statement_repeat1,
    [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
    [aux_sym_raw_block_repeat1] = aux_sym_raw_block_repeat1,
    [alias_sym_raw_body] = alias_sym_raw_body,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_true] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_false] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_null] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_none] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
    },
    [sym_dec_literal] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_e] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_e_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_e_DASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym__] = {
        .visible = true,
        .named = false,
    },
    [sym_oct_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_bin_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_hex_literal] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
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
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_string_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_string_literal_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_BSLASH_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_is] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_boolean] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_callable] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_defined] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_divisibleby] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_eq] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_escaped] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_even] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_filter] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ge] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_gt] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_in] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_integer] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_iterable] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_le] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_lower] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_lt] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_mapping] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ne] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_number] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_odd] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_sameas] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_sequence] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_test] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_undefined] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_upper] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PERCENT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BANG_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT_EQ] = {
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
    [anon_sym_and] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_or] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_TILDE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_not] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_BANG] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_do] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_autoescape] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_trans] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_pluralize] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_if] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_else] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_block] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_macro] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_extends] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_call] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_with] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_import] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_from] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_as] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_include] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ignore] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_missing] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_without] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_context] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_set] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_for] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_recursive] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUND] = {
        .visible = true,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_POUND_POUND] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_comment_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_LBRACE_POUND] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token3] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_POUND_RBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endfor] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_elif] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endif] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endblock] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endwith] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endfilter] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endmacro] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endcall] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endset] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endtrans] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_continue] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_break] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_debug] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_endautoescape] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_raw] = {
        .visible = true,
        .named = false,
    },
    [sym__raw_char] = {
        .visible = false,
        .named = true,
    },
    [sym_raw_end] = {
        .visible = true,
        .named = true,
    },
    [sym__eof] = {
        .visible = false,
        .named = true,
    },
    [sym_source] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_null_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_number_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_big_dec_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_float_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_list_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_tuple_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_dict_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_string_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_binary_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_builtin_test] = {
        .visible = true,
        .named = true,
    },
    [sym_assignment_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_in_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_binary_operator] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_operator] = {
        .visible = true,
        .named = true,
    },
    [sym_primary_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_function_call] = {
        .visible = true,
        .named = true,
    },
    [sym_arg] = {
        .visible = true,
        .named = true,
    },
    [sym_inline_trans] = {
        .visible = true,
        .named = true,
    },
    [sym_do_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_autoescape_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_trans_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_pluralize_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_ternary_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_block_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_filter_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_macro_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_extends_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_call_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_with_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_import_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_import_from] = {
        .visible = true,
        .named = true,
    },
    [sym_import_as] = {
        .visible = true,
        .named = true,
    },
    [sym_import_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_include_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_include_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_attribute_ignore] = {
        .visible = true,
        .named = true,
    },
    [sym_attribute_context] = {
        .visible = true,
        .named = true,
    },
    [sym_set_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_for_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_if_expression] = {
        .visible = true,
        .named = true,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
    },
    [sym_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_line_statement] = {
        .visible = true,
        .named = true,
    },
    [sym_raw_block] = {
        .visible = true,
        .named = true,
    },
    [sym__END] = {
        .visible = false,
        .named = true,
    },
    [sym__NEWLINE] = {
        .visible = false,
        .named = true,
    },
    [aux_sym_source_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_list_literal_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_dict_literal_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_string_literal_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_string_literal_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_assignment_expression_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_in_expression_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_function_call_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_trans_statement_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_with_statement_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_include_statement_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_comment_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_raw_block_repeat1] = {
        .visible = false,
        .named = false,
    },
    [alias_sym_raw_body] = {
        .visible = true,
        .named = true,
    },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [1] = sym_binary_operator,
    },
    [2] = {
        [3] = alias_sym_raw_body,
    },
    [3] = {
        [2] = sym_binary_operator,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym_raw_block_repeat1,
    2,
    aux_sym_raw_block_repeat1,
    alias_sym_raw_body,
    0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
    [0] = 0,
    [1] = 1,
    [2] = 2,
    [3] = 3,
    [4] = 3,
    [5] = 3,
    [6] = 6,
    [7] = 7,
    [8] = 8,
    [9] = 9,
    [10] = 8,
    [11] = 9,
    [12] = 7,
    [13] = 8,
    [14] = 7,
    [15] = 9,
    [16] = 16,
    [17] = 17,
    [18] = 16,
    [19] = 19,
    [20] = 20,
    [21] = 19,
    [22] = 22,
    [23] = 17,
    [24] = 24,
    [25] = 20,
    [26] = 17,
    [27] = 22,
    [28] = 19,
    [29] = 16,
    [30] = 22,
    [31] = 20,
    [32] = 32,
    [33] = 33,
    [34] = 34,
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 37,
    [39] = 39,
    [40] = 40,
    [41] = 35,
    [42] = 36,
    [43] = 43,
    [44] = 34,
    [45] = 45,
    [46] = 46,
    [47] = 45,
    [48] = 45,
    [49] = 37,
    [50] = 36,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 35,
    [55] = 46,
    [56] = 39,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 46,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 66,
    [69] = 67,
    [70] = 67,
    [71] = 66,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 79,
    [82] = 82,
    [83] = 74,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 87,
    [89] = 73,
    [90] = 87,
    [91] = 72,
    [92] = 86,
    [93] = 87,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 74,
    [100] = 79,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 84,
    [108] = 78,
    [109] = 104,
    [110] = 105,
    [111] = 111,
    [112] = 94,
    [113] = 75,
    [114] = 76,
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 106,
    [119] = 119,
    [120] = 120,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 95,
    [125] = 125,
    [126] = 126,
    [127] = 103,
    [128] = 82,
    [129] = 80,
    [130] = 121,
    [131] = 119,
    [132] = 116,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 77,
    [137] = 85,
    [138] = 138,
    [139] = 134,
    [140] = 133,
    [141] = 126,
    [142] = 125,
    [143] = 98,
    [144] = 138,
    [145] = 97,
    [146] = 96,
    [147] = 101,
    [148] = 102,
    [149] = 117,
    [150] = 122,
    [151] = 115,
    [152] = 120,
    [153] = 135,
    [154] = 111,
    [155] = 123,
    [156] = 156,
    [157] = 86,
    [158] = 87,
    [159] = 87,
    [160] = 78,
    [161] = 125,
    [162] = 96,
    [163] = 97,
    [164] = 98,
    [165] = 111,
    [166] = 122,
    [167] = 101,
    [168] = 102,
    [169] = 103,
    [170] = 84,
    [171] = 104,
    [172] = 105,
    [173] = 126,
    [174] = 94,
    [175] = 133,
    [176] = 134,
    [177] = 75,
    [178] = 76,
    [179] = 138,
    [180] = 115,
    [181] = 117,
    [182] = 106,
    [183] = 120,
    [184] = 123,
    [185] = 72,
    [186] = 85,
    [187] = 95,
    [188] = 82,
    [189] = 80,
    [190] = 121,
    [191] = 119,
    [192] = 77,
    [193] = 116,
    [194] = 135,
    [195] = 73,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 204,
    [205] = 205,
    [206] = 206,
    [207] = 207,
    [208] = 208,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 212,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 217,
    [218] = 218,
    [219] = 219,
    [220] = 220,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 227,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 229,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 122,
    [240] = 228,
    [241] = 241,
    [242] = 227,
    [243] = 243,
    [244] = 244,
    [245] = 241,
    [246] = 230,
    [247] = 247,
    [248] = 228,
    [249] = 249,
    [250] = 111,
    [251] = 241,
    [252] = 252,
    [253] = 237,
    [254] = 237,
    [255] = 229,
    [256] = 256,
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
    [268] = 261,
    [269] = 269,
    [270] = 262,
    [271] = 271,
    [272] = 272,
    [273] = 273,
    [274] = 258,
    [275] = 275,
    [276] = 262,
    [277] = 261,
    [278] = 278,
    [279] = 279,
    [280] = 257,
    [281] = 281,
    [282] = 282,
    [283] = 258,
    [284] = 257,
    [285] = 285,
    [286] = 286,
    [287] = 287,
    [288] = 288,
    [289] = 289,
    [290] = 290,
    [291] = 291,
    [292] = 291,
    [293] = 293,
    [294] = 294,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 298,
    [299] = 297,
    [300] = 300,
    [301] = 301,
    [302] = 302,
    [303] = 303,
    [304] = 304,
    [305] = 305,
    [306] = 297,
    [307] = 307,
    [308] = 298,
    [309] = 309,
    [310] = 303,
    [311] = 311,
    [312] = 312,
    [313] = 313,
    [314] = 314,
    [315] = 315,
    [316] = 316,
    [317] = 317,
    [318] = 318,
    [319] = 319,
    [320] = 291,
    [321] = 295,
    [322] = 322,
    [323] = 312,
    [324] = 316,
    [325] = 312,
    [326] = 295,
    [327] = 209,
    [328] = 312,
    [329] = 329,
    [330] = 330,
    [331] = 317,
    [332] = 332,
    [333] = 316,
    [334] = 318,
    [335] = 318,
    [336] = 336,
    [337] = 303,
    [338] = 298,
    [339] = 339,
    [340] = 340,
    [341] = 341,
    [342] = 342,
    [343] = 343,
    [344] = 344,
    [345] = 345,
    [346] = 346,
    [347] = 347,
    [348] = 348,
    [349] = 349,
    [350] = 350,
    [351] = 351,
    [352] = 352,
    [353] = 353,
    [354] = 354,
    [355] = 355,
    [356] = 212,
    [357] = 357,
    [358] = 358,
    [359] = 349,
    [360] = 349,
    [361] = 361,
    [362] = 362,
    [363] = 363,
    [364] = 364,
    [365] = 345,
    [366] = 366,
    [367] = 345,
    [368] = 368,
    [369] = 369,
    [370] = 370,
    [371] = 371,
    [372] = 372,
    [373] = 373,
    [374] = 374,
    [375] = 375,
    [376] = 376,
    [377] = 377,
    [378] = 378,
    [379] = 379,
    [380] = 380,
    [381] = 378,
    [382] = 382,
    [383] = 383,
    [384] = 384,
    [385] = 378,
    [386] = 386,
    [387] = 387,
    [388] = 388,
    [389] = 388,
    [390] = 390,
    [391] = 391,
    [392] = 392,
    [393] = 393,
    [394] = 384,
    [395] = 380,
    [396] = 382,
    [397] = 390,
    [398] = 398,
    [399] = 399,
    [400] = 380,
    [401] = 384,
    [402] = 382,
    [403] = 403,
    [404] = 390,
    [405] = 405,
    [406] = 406,
    [407] = 407,
    [408] = 408,
    [409] = 409,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(245);
            ADVANCE_MAP(
                '\n', 646,
                '\r', 1,
                '!', 368,
                '"', 277,
                '#', 407,
                '%', 351,
                '\'', 284,
                '(', 272,
                ')', 273,
                '*', 348,
                '+', 255,
                ',', 270,
                '-', 254,
                '.', 268,
                '/', 349,
                '0', 256,
                ':', 275,
                '<', 357,
                '=', 347,
                '>', 355,
                '[', 269,
                '\\', 12,
                ']', 271,
                '_', 263,
                'a', 147,
                'b', 128,
                'c', 19,
                'd', 59,
                'e', 258,
                'f', 23,
                'g', 60,
                'i', 100,
                'l', 61,
                'm', 17,
                'n', 62,
                'o', 56,
                'p', 129,
                'r', 20,
                's', 18,
                't', 78,
                'u', 151,
                'w', 115,
                '{', 274,
                '|', 363,
                '}', 276,
                '~', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(0);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                '\n', 646,
                '\r', 1,
                '!', 368,
                '"', 277,
                '#', 407,
                '%', 351,
                '\'', 284,
                '(', 272,
                ')', 273,
                '*', 348,
                '+', 255,
                ',', 270,
                '-', 254,
                '.', 268,
                '/', 349,
                '0', 256,
                ':', 275,
                '<', 357,
                '=', 347,
                '>', 355,
                '[', 269,
                '\\', 12,
                ']', 271,
                '_', 263,
                'a', 147,
                'b', 128,
                'c', 19,
                'd', 59,
                'e', 258,
                'f', 23,
                'g', 60,
                'i', 100,
                'l', 61,
                'm', 17,
                'n', 62,
                'o', 56,
                'p', 129,
                'r', 20,
                's', 18,
                't', 78,
                'u', 151,
                'w', 115,
                '{', 274,
                '|', 363,
                '}', 276,
                '~', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(1);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            END_STATE();
        case 2:
            ADVANCE_MAP(
                '\n', 279,
                '\r', 279,
                '"', 277,
                '#', 281,
                '\\', 280,
                '{', 282,
                '\t', 279,
                0x0b, 279,
                '\f', 279,
                ' ', 279,
            );
            if(lookahead != 0)
                ADVANCE(278);
            END_STATE();
        case 3:
            ADVANCE_MAP(
                '\n', 286,
                '\r', 286,
                '#', 287,
                '\'', 284,
                '\\', 289,
                '{', 288,
                '\t', 286,
                0x0b, 286,
                '\f', 286,
                ' ', 286,
            );
            if(lookahead != 0)
                ADVANCE(285);
            END_STATE();
        case 4:
            if(lookahead == '\n')
                ADVANCE(647);
            if(lookahead == '\r')
                ADVANCE(657);
            if(lookahead == '#')
                ADVANCE(407);
            if(lookahead == '{')
                ADVANCE(658);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(657);
            if(lookahead != 0)
                ADVANCE(659);
            END_STATE();
        case 5:
            ADVANCE_MAP(
                '\n', 648,
                '\r', 5,
                '!', 367,
                '"', 277,
                '#', 406,
                '\'', 284,
                '(', 272,
                '+', 255,
                '-', 254,
                '0', 256,
                '[', 269,
                '_', 264,
                'a', 626,
                'b', 524,
                'c', 409,
                'd', 457,
                'e', 525,
                'f', 416,
                'i', 498,
                'm', 412,
                'n', 564,
                'p', 530,
                'r', 408,
                's', 475,
                't', 585,
                'w', 511,
                '{', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(5);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 6:
            ADVANCE_MAP(
                '\n', 649,
                '\r', 6,
                '!', 367,
                '"', 277,
                '#', 13,
                '\'', 284,
                '(', 272,
                '+', 255,
                '-', 254,
                '0', 256,
                '[', 269,
                '_', 264,
                'b', 572,
                'c', 427,
                'd', 477,
                'e', 583,
                'f', 415,
                'g', 467,
                'i', 548,
                'l', 468,
                'm', 419,
                'n', 469,
                'o', 454,
                's', 413,
                't', 483,
                'u', 563,
                '{', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(6);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 7:
            ADVANCE_MAP(
                '\n', 650,
                '\r', 7,
                '!', 367,
                '"', 277,
                '#', 13,
                '\'', 284,
                '(', 272,
                ')', 273,
                '+', 255,
                ',', 270,
                '-', 254,
                '0', 256,
                '[', 269,
                ']', 271,
                '_', 264,
                'f', 417,
                'n', 564,
                't', 600,
                '{', 274,
                '}', 276,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(7);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 8:
            ADVANCE_MAP(
                '\n', 651,
                '\r', 8,
                '!', 15,
                '#', 13,
                '%', 351,
                '(', 272,
                ')', 273,
                '*', 348,
                '+', 255,
                ',', 270,
                '-', 254,
                '.', 268,
                '/', 349,
                ':', 275,
                '<', 357,
                '=', 347,
                '>', 355,
                '[', 269,
                ']', 271,
                '_', 263,
                'a', 146,
                'e', 259,
                'i', 101,
                'o', 182,
                'r', 77,
                'w', 115,
                '{', 14,
                '|', 363,
                '}', 276,
                '~', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(8);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            END_STATE();
        case 9:
            ADVANCE_MAP(
                '\n', 652,
                '\r', 9,
                '!', 15,
                '#', 13,
                '%', 351,
                '*', 348,
                '+', 255,
                '-', 254,
                '.', 268,
                '/', 349,
                ':', 275,
                '<', 357,
                '=', 16,
                '>', 355,
                '[', 269,
                'a', 560,
                'e', 260,
                'i', 607,
                'o', 594,
                '{', 14,
                '|', 363,
                '~', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(9);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 10:
            ADVANCE_MAP(
                '\n', 653,
                '\r', 10,
                '!', 15,
                '#', 13,
                '%', 351,
                '(', 272,
                '*', 348,
                '+', 255,
                '-', 254,
                '.', 268,
                '/', 349,
                ':', 275,
                '<', 357,
                '=', 16,
                '>', 355,
                '[', 269,
                'a', 560,
                'i', 607,
                'o', 594,
                '{', 14,
                '|', 363,
                '~', 364,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(10);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 11:
            ADVANCE_MAP(
                '\n', 654,
                '\r', 11,
                '"', 277,
                '#', 13,
                '\'', 284,
                '(', 272,
                '.', 268,
                ':', 275,
                '[', 269,
                '{', 14,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(11);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 12:
            if(lookahead == '"')
                ADVANCE(283);
            if(lookahead == '\'')
                ADVANCE(290);
            END_STATE();
        case 13:
            if(lookahead == '#')
                ADVANCE(640);
            END_STATE();
        case 14:
            if(lookahead == '#')
                ADVANCE(655);
            END_STATE();
        case 15:
            if(lookahead == '=')
                ADVANCE(354);
            END_STATE();
        case 16:
            if(lookahead == '=')
                ADVANCE(353);
            END_STATE();
        case 17:
            if(lookahead == 'a')
                ADVANCE(44);
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 18:
            if(lookahead == 'a')
                ADVANCE(145);
            if(lookahead == 'e')
                ADVANCE(181);
            if(lookahead == 't')
                ADVANCE(199);
            END_STATE();
        case 19:
            if(lookahead == 'a')
                ADVANCE(135);
            if(lookahead == 'o')
                ADVANCE(152);
            END_STATE();
        case 20:
            if(lookahead == 'a')
                ADVANCE(236);
            if(lookahead == 'e')
                ADVANCE(46);
            END_STATE();
        case 21:
            if(lookahead == 'a')
                ADVANCE(38);
            END_STATE();
        case 22:
            if(lookahead == 'a')
                ADVANCE(126);
            END_STATE();
        case 23:
            if(lookahead == 'a')
                ADVANCE(133);
            if(lookahead == 'i')
                ADVANCE(141);
            if(lookahead == 'l')
                ADVANCE(168);
            if(lookahead == 'o')
                ADVANCE(183);
            if(lookahead == 'r')
                ADVANCE(166);
            END_STATE();
        case 24:
            if(lookahead == 'a')
                ADVANCE(159);
            if(lookahead == 'u')
                ADVANCE(66);
            END_STATE();
        case 25:
            if(lookahead == 'a')
                ADVANCE(47);
            END_STATE();
        case 26:
            ADVANCE_MAP(
                'a', 233,
                'b', 140,
                'c', 31,
                'f', 124,
                'i', 103,
                'm', 25,
                's', 87,
                't', 197,
                'w', 119,
            );
            END_STATE();
        case 27:
            if(lookahead == 'a')
                ADVANCE(216);
            END_STATE();
        case 28:
            if(lookahead == 'a')
                ADVANCE(134);
            END_STATE();
        case 29:
            if(lookahead == 'a')
                ADVANCE(201);
            END_STATE();
        case 30:
            if(lookahead == 'a')
                ADVANCE(149);
            END_STATE();
        case 31:
            if(lookahead == 'a')
                ADVANCE(137);
            END_STATE();
        case 32:
            if(lookahead == 'a')
                ADVANCE(176);
            END_STATE();
        case 33:
            if(lookahead == 'a')
                ADVANCE(161);
            END_STATE();
        case 34:
            if(lookahead == 'a')
                ADVANCE(177);
            END_STATE();
        case 35:
            if(lookahead == 'a')
                ADVANCE(178);
            END_STATE();
        case 36:
            if(lookahead == 'b')
                ADVANCE(239);
            END_STATE();
        case 37:
            if(lookahead == 'b')
                ADVANCE(227);
            if(lookahead == 'f')
                ADVANCE(116);
            END_STATE();
        case 38:
            if(lookahead == 'b')
                ADVANCE(138);
            END_STATE();
        case 39:
            if(lookahead == 'b')
                ADVANCE(139);
            END_STATE();
        case 40:
            if(lookahead == 'b')
                ADVANCE(96);
            END_STATE();
        case 41:
            if(lookahead == 'c')
                ADVANCE(125);
            END_STATE();
        case 42:
            if(lookahead == 'c')
                ADVANCE(32);
            END_STATE();
        case 43:
            if(lookahead == 'c')
                ADVANCE(127);
            END_STATE();
        case 44:
            if(lookahead == 'c')
                ADVANCE(193);
            if(lookahead == 'p')
                ADVANCE(179);
            END_STATE();
        case 45:
            if(lookahead == 'c')
                ADVANCE(72);
            END_STATE();
        case 46:
            if(lookahead == 'c')
                ADVANCE(228);
            END_STATE();
        case 47:
            if(lookahead == 'c')
                ADVANCE(196);
            END_STATE();
        case 48:
            if(lookahead == 'c')
                ADVANCE(34);
            END_STATE();
        case 49:
            if(lookahead == 'c')
                ADVANCE(35);
            END_STATE();
        case 50:
            if(lookahead == 'd')
                ADVANCE(359);
            END_STATE();
        case 51:
            if(lookahead == 'd')
                ADVANCE(26);
            END_STATE();
        case 52:
            if(lookahead == 'd')
                ADVANCE(333);
            END_STATE();
        case 53:
            if(lookahead == 'd')
                ADVANCE(296);
            END_STATE();
        case 54:
            if(lookahead == 'd')
                ADVANCE(302);
            END_STATE();
        case 55:
            if(lookahead == 'd')
                ADVANCE(343);
            END_STATE();
        case 56:
            if(lookahead == 'd')
                ADVANCE(52);
            if(lookahead == 'r')
                ADVANCE(361);
            END_STATE();
        case 57:
            if(lookahead == 'd')
                ADVANCE(82);
            END_STATE();
        case 58:
            if(lookahead == 'd')
                ADVANCE(202);
            END_STATE();
        case 59:
            if(lookahead == 'e')
                ADVANCE(37);
            if(lookahead == 'i')
                ADVANCE(234);
            if(lookahead == 'o')
                ADVANCE(369);
            END_STATE();
        case 60:
            if(lookahead == 'e')
                ADVANCE(310);
            if(lookahead == 't')
                ADVANCE(312);
            END_STATE();
        case 61:
            if(lookahead == 'e')
                ADVANCE(321);
            if(lookahead == 'o')
                ADVANCE(237);
            if(lookahead == 't')
                ADVANCE(325);
            END_STATE();
        case 62:
            if(lookahead == 'e')
                ADVANCE(329);
            if(lookahead == 'o')
                ADVANCE(157);
            if(lookahead == 'u')
                ADVANCE(136);
            END_STATE();
        case 63:
            if(lookahead == 'e')
                ADVANCE(22);
            END_STATE();
        case 64:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 65:
            if(lookahead == 'e')
                ADVANCE(252);
            END_STATE();
        case 66:
            if(lookahead == 'e')
                ADVANCE(246);
            END_STATE();
        case 67:
            if(lookahead == 'e')
                ADVANCE(238);
            if(lookahead == 'i')
                ADVANCE(160);
            END_STATE();
        case 68:
            if(lookahead == 'e')
                ADVANCE(248);
            END_STATE();
        case 69:
            if(lookahead == 'e')
                ADVANCE(397);
            END_STATE();
        case 70:
            if(lookahead == 'e')
                ADVANCE(681);
            END_STATE();
        case 71:
            if(lookahead == 'e')
                ADVANCE(319);
            END_STATE();
        case 72:
            if(lookahead == 'e')
                ADVANCE(337);
            END_STATE();
        case 73:
            if(lookahead == 'e')
                ADVANCE(375);
            END_STATE();
        case 74:
            if(lookahead == 'e')
                ADVANCE(405);
            END_STATE();
        case 75:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 76:
            if(lookahead == 'e')
                ADVANCE(687);
            END_STATE();
        case 77:
            if(lookahead == 'e')
                ADVANCE(46);
            END_STATE();
        case 78:
            if(lookahead == 'e')
                ADVANCE(207);
            if(lookahead == 'r')
                ADVANCE(24);
            END_STATE();
        case 79:
            if(lookahead == 'e')
                ADVANCE(109);
            END_STATE();
        case 80:
            if(lookahead == 'e')
                ADVANCE(148);
            END_STATE();
        case 81:
            if(lookahead == 'e')
                ADVANCE(191);
            END_STATE();
        case 82:
            if(lookahead == 'e')
                ADVANCE(104);
            END_STATE();
        case 83:
            if(lookahead == 'e')
                ADVANCE(36);
            END_STATE();
        case 84:
            if(lookahead == 'e')
                ADVANCE(53);
            END_STATE();
        case 85:
            if(lookahead == 'e')
                ADVANCE(154);
            END_STATE();
        case 86:
            if(lookahead == 'e')
                ADVANCE(54);
            END_STATE();
        case 87:
            if(lookahead == 'e')
                ADVANCE(217);
            END_STATE();
        case 88:
            if(lookahead == 'e')
                ADVANCE(184);
            END_STATE();
        case 89:
            if(lookahead == 'e')
                ADVANCE(211);
            END_STATE();
        case 90:
            if(lookahead == 'e')
                ADVANCE(55);
            END_STATE();
        case 91:
            if(lookahead == 'e')
                ADVANCE(29);
            END_STATE();
        case 92:
            if(lookahead == 'e')
                ADVANCE(185);
            END_STATE();
        case 93:
            if(lookahead == 'e')
                ADVANCE(30);
            END_STATE();
        case 94:
            if(lookahead == 'e')
                ADVANCE(158);
            END_STATE();
        case 95:
            if(lookahead == 'e')
                ADVANCE(187);
            END_STATE();
        case 96:
            if(lookahead == 'e')
                ADVANCE(188);
            END_STATE();
        case 97:
            if(lookahead == 'e')
                ADVANCE(189);
            END_STATE();
        case 98:
            if(lookahead == 'e')
                ADVANCE(190);
            END_STATE();
        case 99:
            if(lookahead == 'e')
                ADVANCE(212);
            END_STATE();
        case 100:
            if(lookahead == 'f')
                ADVANCE(377);
            if(lookahead == 'g')
                ADVANCE(156);
            if(lookahead == 'm')
                ADVANCE(175);
            if(lookahead == 'n')
                ADVANCE(315);
            if(lookahead == 's')
                ADVANCE(291);
            if(lookahead == 't')
                ADVANCE(81);
            END_STATE();
        case 101:
            if(lookahead == 'f')
                ADVANCE(377);
            if(lookahead == 'g')
                ADVANCE(156);
            if(lookahead == 'm')
                ADVANCE(175);
            if(lookahead == 'n')
                ADVANCE(314);
            if(lookahead == 's')
                ADVANCE(291);
            END_STATE();
        case 102:
            if(lookahead == 'f')
                ADVANCE(663);
            END_STATE();
        case 103:
            if(lookahead == 'f')
                ADVANCE(665);
            END_STATE();
        case 104:
            if(lookahead == 'f')
                ADVANCE(122);
            END_STATE();
        case 105:
            if(lookahead == 'g')
                ADVANCE(685);
            END_STATE();
        case 106:
            if(lookahead == 'g')
                ADVANCE(339);
            END_STATE();
        case 107:
            if(lookahead == 'g')
                ADVANCE(327);
            END_STATE();
        case 108:
            if(lookahead == 'g')
                ADVANCE(398);
            END_STATE();
        case 109:
            if(lookahead == 'g')
                ADVANCE(97);
            END_STATE();
        case 110:
            if(lookahead == 'h')
                ADVANCE(389);
            END_STATE();
        case 111:
            if(lookahead == 'h')
                ADVANCE(669);
            END_STATE();
        case 112:
            if(lookahead == 'i')
                ADVANCE(102);
            if(lookahead == 's')
                ADVANCE(64);
            END_STATE();
        case 113:
            if(lookahead == 'i')
                ADVANCE(240);
            END_STATE();
        case 114:
            if(lookahead == 'i')
                ADVANCE(235);
            END_STATE();
        case 115:
            if(lookahead == 'i')
                ADVANCE(213);
            END_STATE();
        case 116:
            if(lookahead == 'i')
                ADVANCE(162);
            END_STATE();
        case 117:
            if(lookahead == 'i')
                ADVANCE(204);
            END_STATE();
        case 118:
            if(lookahead == 'i')
                ADVANCE(150);
            END_STATE();
        case 119:
            if(lookahead == 'i')
                ADVANCE(221);
            END_STATE();
        case 120:
            if(lookahead == 'i')
                ADVANCE(153);
            END_STATE();
        case 121:
            if(lookahead == 'i')
                ADVANCE(155);
            END_STATE();
        case 122:
            if(lookahead == 'i')
                ADVANCE(163);
            END_STATE();
        case 123:
            if(lookahead == 'i')
                ADVANCE(39);
            END_STATE();
        case 124:
            if(lookahead == 'i')
                ADVANCE(143);
            if(lookahead == 'o')
                ADVANCE(186);
            END_STATE();
        case 125:
            if(lookahead == 'k')
                ADVANCE(381);
            END_STATE();
        case 126:
            if(lookahead == 'k')
                ADVANCE(683);
            END_STATE();
        case 127:
            if(lookahead == 'k')
                ADVANCE(667);
            END_STATE();
        case 128:
            if(lookahead == 'l')
                ADVANCE(167);
            if(lookahead == 'o')
                ADVANCE(169);
            if(lookahead == 'r')
                ADVANCE(63);
            END_STATE();
        case 129:
            if(lookahead == 'l')
                ADVANCE(231);
            END_STATE();
        case 130:
            if(lookahead == 'l')
                ADVANCE(387);
            END_STATE();
        case 131:
            if(lookahead == 'l')
                ADVANCE(250);
            END_STATE();
        case 132:
            if(lookahead == 'l')
                ADVANCE(675);
            END_STATE();
        case 133:
            if(lookahead == 'l')
                ADVANCE(209);
            END_STATE();
        case 134:
            if(lookahead == 'l')
                ADVANCE(113);
            END_STATE();
        case 135:
            if(lookahead == 'l')
                ADVANCE(130);
            END_STATE();
        case 136:
            if(lookahead == 'l')
                ADVANCE(131);
            if(lookahead == 'm')
                ADVANCE(40);
            END_STATE();
        case 137:
            if(lookahead == 'l')
                ADVANCE(132);
            END_STATE();
        case 138:
            if(lookahead == 'l')
                ADVANCE(71);
            END_STATE();
        case 139:
            if(lookahead == 'l')
                ADVANCE(83);
            END_STATE();
        case 140:
            if(lookahead == 'l')
                ADVANCE(170);
            END_STATE();
        case 141:
            if(lookahead == 'l')
                ADVANCE(224);
            END_STATE();
        case 142:
            if(lookahead == 'l')
                ADVANCE(93);
            END_STATE();
        case 143:
            if(lookahead == 'l')
                ADVANCE(225);
            END_STATE();
        case 144:
            if(lookahead == 'm')
                ADVANCE(393);
            END_STATE();
        case 145:
            if(lookahead == 'm')
                ADVANCE(91);
            END_STATE();
        case 146:
            if(lookahead == 'n')
                ADVANCE(50);
            if(lookahead == 's')
                ADVANCE(395);
            END_STATE();
        case 147:
            if(lookahead == 'n')
                ADVANCE(50);
            if(lookahead == 's')
                ADVANCE(395);
            if(lookahead == 'u')
                ADVANCE(222);
            END_STATE();
        case 148:
            if(lookahead == 'n')
                ADVANCE(304);
            END_STATE();
        case 149:
            if(lookahead == 'n')
                ADVANCE(293);
            END_STATE();
        case 150:
            if(lookahead == 'n')
                ADVANCE(106);
            END_STATE();
        case 151:
            if(lookahead == 'n')
                ADVANCE(57);
            if(lookahead == 'p')
                ADVANCE(180);
            END_STATE();
        case 152:
            if(lookahead == 'n')
                ADVANCE(214);
            END_STATE();
        case 153:
            if(lookahead == 'n')
                ADVANCE(107);
            END_STATE();
        case 154:
            if(lookahead == 'n')
                ADVANCE(58);
            END_STATE();
        case 155:
            if(lookahead == 'n')
                ADVANCE(108);
            END_STATE();
        case 156:
            if(lookahead == 'n')
                ADVANCE(171);
            END_STATE();
        case 157:
            if(lookahead == 'n')
                ADVANCE(65);
            if(lookahead == 't')
                ADVANCE(365);
            END_STATE();
        case 158:
            if(lookahead == 'n')
                ADVANCE(45);
            END_STATE();
        case 159:
            if(lookahead == 'n')
                ADVANCE(200);
            END_STATE();
        case 160:
            if(lookahead == 'n')
                ADVANCE(230);
            END_STATE();
        case 161:
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 162:
            if(lookahead == 'n')
                ADVANCE(84);
            END_STATE();
        case 163:
            if(lookahead == 'n')
                ADVANCE(90);
            END_STATE();
        case 164:
            if(lookahead == 'o')
                ADVANCE(383);
            END_STATE();
        case 165:
            if(lookahead == 'o')
                ADVANCE(673);
            END_STATE();
        case 166:
            if(lookahead == 'o')
                ADVANCE(144);
            END_STATE();
        case 167:
            if(lookahead == 'o')
                ADVANCE(41);
            END_STATE();
        case 168:
            if(lookahead == 'o')
                ADVANCE(27);
            END_STATE();
        case 169:
            if(lookahead == 'o')
                ADVANCE(142);
            END_STATE();
        case 170:
            if(lookahead == 'o')
                ADVANCE(43);
            END_STATE();
        case 171:
            if(lookahead == 'o')
                ADVANCE(198);
            END_STATE();
        case 172:
            if(lookahead == 'o')
                ADVANCE(195);
            END_STATE();
        case 173:
            if(lookahead == 'o')
                ADVANCE(89);
            END_STATE();
        case 174:
            if(lookahead == 'o')
                ADVANCE(99);
            END_STATE();
        case 175:
            if(lookahead == 'p')
                ADVANCE(172);
            END_STATE();
        case 176:
            if(lookahead == 'p')
                ADVANCE(86);
            END_STATE();
        case 177:
            if(lookahead == 'p')
                ADVANCE(75);
            END_STATE();
        case 178:
            if(lookahead == 'p')
                ADVANCE(76);
            END_STATE();
        case 179:
            if(lookahead == 'p')
                ADVANCE(120);
            END_STATE();
        case 180:
            if(lookahead == 'p')
                ADVANCE(92);
            END_STATE();
        case 181:
            if(lookahead == 'q')
                ADVANCE(232);
            if(lookahead == 't')
                ADVANCE(401);
            END_STATE();
        case 182:
            if(lookahead == 'r')
                ADVANCE(361);
            END_STATE();
        case 183:
            if(lookahead == 'r')
                ADVANCE(403);
            END_STATE();
        case 184:
            if(lookahead == 'r')
                ADVANCE(323);
            END_STATE();
        case 185:
            if(lookahead == 'r')
                ADVANCE(345);
            END_STATE();
        case 186:
            if(lookahead == 'r')
                ADVANCE(661);
            END_STATE();
        case 187:
            if(lookahead == 'r')
                ADVANCE(306);
            END_STATE();
        case 188:
            if(lookahead == 'r')
                ADVANCE(331);
            END_STATE();
        case 189:
            if(lookahead == 'r')
                ADVANCE(317);
            END_STATE();
        case 190:
            if(lookahead == 'r')
                ADVANCE(671);
            END_STATE();
        case 191:
            if(lookahead == 'r')
                ADVANCE(21);
            END_STATE();
        case 192:
            if(lookahead == 'r')
                ADVANCE(28);
            END_STATE();
        case 193:
            if(lookahead == 'r')
                ADVANCE(164);
            END_STATE();
        case 194:
            if(lookahead == 'r')
                ADVANCE(208);
            END_STATE();
        case 195:
            if(lookahead == 'r')
                ADVANCE(218);
            END_STATE();
        case 196:
            if(lookahead == 'r')
                ADVANCE(165);
            END_STATE();
        case 197:
            if(lookahead == 'r')
                ADVANCE(33);
            END_STATE();
        case 198:
            if(lookahead == 'r')
                ADVANCE(69);
            END_STATE();
        case 199:
            if(lookahead == 'r')
                ADVANCE(118);
            END_STATE();
        case 200:
            if(lookahead == 's')
                ADVANCE(373);
            END_STATE();
        case 201:
            if(lookahead == 's')
                ADVANCE(335);
            END_STATE();
        case 202:
            if(lookahead == 's')
                ADVANCE(385);
            END_STATE();
        case 203:
            if(lookahead == 's')
                ADVANCE(679);
            END_STATE();
        case 204:
            if(lookahead == 's')
                ADVANCE(123);
            END_STATE();
        case 205:
            if(lookahead == 's')
                ADVANCE(64);
            END_STATE();
        case 206:
            if(lookahead == 's')
                ADVANCE(210);
            END_STATE();
        case 207:
            if(lookahead == 's')
                ADVANCE(215);
            END_STATE();
        case 208:
            if(lookahead == 's')
                ADVANCE(114);
            END_STATE();
        case 209:
            if(lookahead == 's')
                ADVANCE(68);
            END_STATE();
        case 210:
            if(lookahead == 's')
                ADVANCE(121);
            END_STATE();
        case 211:
            if(lookahead == 's')
                ADVANCE(48);
            END_STATE();
        case 212:
            if(lookahead == 's')
                ADVANCE(49);
            END_STATE();
        case 213:
            if(lookahead == 't')
                ADVANCE(110);
            END_STATE();
        case 214:
            if(lookahead == 't')
                ADVANCE(67);
            END_STATE();
        case 215:
            if(lookahead == 't')
                ADVANCE(341);
            END_STATE();
        case 216:
            if(lookahead == 't')
                ADVANCE(308);
            END_STATE();
        case 217:
            if(lookahead == 't')
                ADVANCE(677);
            END_STATE();
        case 218:
            if(lookahead == 't')
                ADVANCE(391);
            END_STATE();
        case 219:
            if(lookahead == 't')
                ADVANCE(400);
            END_STATE();
        case 220:
            if(lookahead == 't')
                ADVANCE(399);
            END_STATE();
        case 221:
            if(lookahead == 't')
                ADVANCE(111);
            END_STATE();
        case 222:
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 223:
            if(lookahead == 't')
                ADVANCE(85);
            END_STATE();
        case 224:
            if(lookahead == 't')
                ADVANCE(95);
            END_STATE();
        case 225:
            if(lookahead == 't')
                ADVANCE(98);
            END_STATE();
        case 226:
            if(lookahead == 't')
                ADVANCE(174);
            END_STATE();
        case 227:
            if(lookahead == 'u')
                ADVANCE(105);
            END_STATE();
        case 228:
            if(lookahead == 'u')
                ADVANCE(194);
            END_STATE();
        case 229:
            if(lookahead == 'u')
                ADVANCE(220);
            END_STATE();
        case 230:
            if(lookahead == 'u')
                ADVANCE(70);
            END_STATE();
        case 231:
            if(lookahead == 'u')
                ADVANCE(192);
            END_STATE();
        case 232:
            if(lookahead == 'u')
                ADVANCE(94);
            END_STATE();
        case 233:
            if(lookahead == 'u')
                ADVANCE(226);
            END_STATE();
        case 234:
            if(lookahead == 'v')
                ADVANCE(117);
            END_STATE();
        case 235:
            if(lookahead == 'v')
                ADVANCE(74);
            END_STATE();
        case 236:
            if(lookahead == 'w')
                ADVANCE(689);
            END_STATE();
        case 237:
            if(lookahead == 'w')
                ADVANCE(88);
            END_STATE();
        case 238:
            if(lookahead == 'x')
                ADVANCE(219);
            END_STATE();
        case 239:
            if(lookahead == 'y')
                ADVANCE(298);
            END_STATE();
        case 240:
            if(lookahead == 'z')
                ADVANCE(73);
            END_STATE();
        case 241:
            if(lookahead == '0' ||
               lookahead == '1' ||
               lookahead == '_')
                ADVANCE(266);
            END_STATE();
        case 242:
            if(('0' <= lookahead && lookahead <= '7') ||
               lookahead == '_')
                ADVANCE(265);
            END_STATE();
        case 243:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(267);
            END_STATE();
        case 244:
            if(eof)
                ADVANCE(245);
            ADVANCE_MAP(
                '\n', 648,
                '\r', 5,
                '!', 367,
                '"', 277,
                '#', 406,
                '\'', 284,
                '(', 272,
                '+', 255,
                '-', 254,
                '0', 256,
                '[', 269,
                '_', 264,
                'a', 626,
                'b', 524,
                'c', 409,
                'd', 457,
                'e', 525,
                'f', 416,
                'i', 498,
                'm', 412,
                'n', 564,
                'p', 530,
                'r', 408,
                's', 475,
                't', 585,
                'w', 511,
                '{', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(244);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(anon_sym_true);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(anon_sym_true);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(anon_sym_false);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(anon_sym_false);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(anon_sym_null);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(anon_sym_null);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(anon_sym_none);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(anon_sym_none);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym_dec_literal);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(241);
            if(lookahead == 'O' ||
               lookahead == 'o')
                ADVANCE(242);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(243);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(257);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym_dec_literal);
            if(('0' <= lookahead && lookahead <= '9') ||
               lookahead == '_')
                ADVANCE(257);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(anon_sym_e);
            ADVANCE_MAP(
                '+', 261,
                '-', 262,
                'l', 112,
                'n', 51,
                'q', 300,
                's', 42,
                'v', 80,
                'x', 223,
            );
            END_STATE();
        case 259:
            ACCEPT_TOKEN(anon_sym_e);
            if(lookahead == '+')
                ADVANCE(261);
            if(lookahead == '-')
                ADVANCE(262);
            if(lookahead == 'l')
                ADVANCE(205);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(anon_sym_e);
            if(lookahead == '+')
                ADVANCE(261);
            if(lookahead == '-')
                ADVANCE(262);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(anon_sym_e_PLUS);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(anon_sym_e_DASH);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(anon_sym__);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(anon_sym__);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym_oct_literal);
            if(('0' <= lookahead && lookahead <= '7') ||
               lookahead == '_')
                ADVANCE(265);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym_bin_literal);
            if(lookahead == '0' ||
               lookahead == '1' ||
               lookahead == '_')
                ADVANCE(266);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym_hex_literal);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(267);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(anon_sym_DOT);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            if(lookahead == '#')
                ADVANCE(655);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            ADVANCE_MAP(
                '\n', 279,
                '\r', 279,
                '#', 281,
                '\\', 280,
                '{', 282,
                '\t', 279,
                0x0b, 279,
                '\f', 279,
                ' ', 279,
            );
            if(lookahead != 0 &&
               lookahead != '"' &&
               lookahead != '#')
                ADVANCE(278);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(lookahead == '"')
                ADVANCE(283);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(lookahead == '#')
                ADVANCE(640);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(lookahead == '#')
                ADVANCE(655);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(aux_sym_string_literal_token2);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(aux_sym_string_literal_token2);
            ADVANCE_MAP(
                '\n', 286,
                '\r', 286,
                '#', 287,
                '\\', 289,
                '{', 288,
                '\t', 286,
                0x0b, 286,
                '\f', 286,
                ' ', 286,
            );
            if(lookahead != 0 &&
               lookahead != '\'')
                ADVANCE(285);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(aux_sym_string_literal_token2);
            if(lookahead == '#')
                ADVANCE(640);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_string_literal_token2);
            if(lookahead == '#')
                ADVANCE(655);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(aux_sym_string_literal_token2);
            if(lookahead == '\'')
                ADVANCE(290);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(anon_sym_is);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(anon_sym_is);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(anon_sym_boolean);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(anon_sym_boolean);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(anon_sym_callable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(anon_sym_defined);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(anon_sym_defined);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(anon_sym_divisibleby);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(anon_sym_divisibleby);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(anon_sym_eq);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(anon_sym_eq);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(anon_sym_escaped);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(anon_sym_escaped);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(anon_sym_even);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(anon_sym_even);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(anon_sym_filter);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(anon_sym_filter);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(anon_sym_ge);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(anon_sym_ge);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(anon_sym_gt);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(anon_sym_gt);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 't')
                ADVANCE(79);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 't')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(anon_sym_integer);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(anon_sym_integer);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(anon_sym_iterable);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(anon_sym_iterable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(anon_sym_le);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(anon_sym_le);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(anon_sym_lower);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(anon_sym_lower);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(anon_sym_lt);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(anon_sym_lt);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(anon_sym_mapping);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(anon_sym_mapping);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(anon_sym_ne);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(anon_sym_ne);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(anon_sym_number);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(anon_sym_number);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(anon_sym_odd);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(anon_sym_odd);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(anon_sym_sameas);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(anon_sym_sameas);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_test);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(anon_sym_test);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_undefined);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(anon_sym_undefined);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(anon_sym_upper);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(anon_sym_upper);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(anon_sym_EQ);
            if(lookahead == '=')
                ADVANCE(353);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_STAR);
            if(lookahead == '*')
                ADVANCE(352);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(350);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(anon_sym_BANG_EQ);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '=')
                ADVANCE(356);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '=')
                ADVANCE(358);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(anon_sym_and);
            END_STATE();
        case 360:
            ACCEPT_TOKEN(anon_sym_and);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 361:
            ACCEPT_TOKEN(anon_sym_or);
            END_STATE();
        case 362:
            ACCEPT_TOKEN(anon_sym_or);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 363:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 364:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 365:
            ACCEPT_TOKEN(anon_sym_not);
            END_STATE();
        case 366:
            ACCEPT_TOKEN(anon_sym_not);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 367:
            ACCEPT_TOKEN(anon_sym_BANG);
            END_STATE();
        case 368:
            ACCEPT_TOKEN(anon_sym_BANG);
            if(lookahead == '=')
                ADVANCE(354);
            END_STATE();
        case 369:
            ACCEPT_TOKEN(anon_sym_do);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(anon_sym_do);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(anon_sym_autoescape);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_autoescape);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_trans);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_trans);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_pluralize);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_pluralize);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_if);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_if);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_else);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_else);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_block);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_block);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_macro);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_macro);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_extends);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_extends);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_call);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_call);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_with);
            if(lookahead == 'o')
                ADVANCE(229);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_with);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(anon_sym_from);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym_from);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym_as);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(anon_sym_include);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym_ignore);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(anon_sym_missing);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym_without);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(anon_sym_set);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_set);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(anon_sym_for);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(anon_sym_for);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(anon_sym_recursive);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(640);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(640);
            if(lookahead == '}')
                ADVANCE(660);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(533);
            if(lookahead == 'o')
                ADVANCE(557);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(552);
            if(lookahead == 'u')
                ADVANCE(460);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(578);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(439);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(547);
            if(lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 't')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(526);
            if(lookahead == 'i')
                ADVANCE(543);
            if(lookahead == 'l')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(526);
            if(lookahead == 'i')
                ADVANCE(543);
            if(lookahead == 'o')
                ADVANCE(586);
            if(lookahead == 'r')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(526);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(434);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(577);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(531);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(606);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(558);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(536);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(581);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(444);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym_identifier);
            ADVANCE_MAP(
                'a', 633,
                'b', 542,
                'c', 426,
                'f', 519,
                'i', 500,
                'm', 429,
                's', 481,
                't', 597,
                'w', 514,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(637);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(493);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(523);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(411);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(472);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(532);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(425);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(428);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(431);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(334);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(303);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(344);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(360);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(604);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(496);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(433);
            if(lookahead == 'o')
                ADVANCE(370);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(380);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(253);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(247);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(249);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(396);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(376);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(372);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(311);
            if(lookahead == 't')
                ADVANCE(313);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(322);
            if(lookahead == 'o')
                ADVANCE(636);
            if(lookahead == 't')
                ADVANCE(326);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(330);
            if(lookahead == 'o')
                ADVANCE(556);
            if(lookahead == 'u')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(414);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(551);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(501);
            if(lookahead == 'i')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(608);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(432);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(549);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(449);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(611);
            if(lookahead == 'r')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(450);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(451);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(559);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(421);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(591);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(423);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(378);
            if(lookahead == 'm')
                ADVANCE(576);
            if(lookahead == 'n')
                ADVANCE(443);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(328);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(390);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(499);
            if(lookahead == 's')
                ADVANCE(458);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(638);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(614);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(555);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(553);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(554);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(545);
            if(lookahead == 'o')
                ADVANCE(587);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(437);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(382);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(568);
            if(lookahead == 'r')
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(509);
            if(lookahead == 'n')
                ADVANCE(447);
            if(lookahead == 'x')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(610);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(388);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(251);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(528);
            if(lookahead == 'm')
                ADVANCE(435);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(528);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(529);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(418);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(471);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(479);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(394);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(490);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(316);
            if(lookahead == 't')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(305);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(294);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(453);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(504);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(459);
            if(lookahead == 't')
                ADVANCE(366);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(442);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(452);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(482);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(456);
            if(lookahead == 'p')
                ADVANCE(580);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(556);
            if(lookahead == 'u')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(384);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(438);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(440);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(574);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(422);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(544);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(582);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(465);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(466);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(485);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(301);
            if(lookahead == 's')
                ADVANCE(446);
            if(lookahead == 'v')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(410);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(404);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(307);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(346);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(318);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(362);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(420);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(424);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(430);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(374);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(386);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(336);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(292);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(441);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(461);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(445);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(402);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(392);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(342);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(484);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(486);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(575);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(455);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(460);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(489);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(299);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'z')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'y'))
                ADVANCE(639);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(645);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(642);
            if(lookahead == '\r')
                ADVANCE(642);
            if(lookahead == '#')
                ADVANCE(643);
            if(lookahead == '{')
                ADVANCE(644);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(642);
            if(lookahead != 0)
                ADVANCE(645);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '#')
                ADVANCE(641);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(645);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '#')
                ADVANCE(656);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(645);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(645);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(646);
            if(lookahead == '\r')
                ADVANCE(1);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(647);
            if(lookahead == '\r')
                ADVANCE(657);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(657);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(648);
            if(lookahead == '\r')
                ADVANCE(5);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(649);
            if(lookahead == '\r')
                ADVANCE(6);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(650);
            if(lookahead == '\r')
                ADVANCE(7);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(651);
            if(lookahead == '\r')
                ADVANCE(8);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(652);
            if(lookahead == '\r')
                ADVANCE(9);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(653);
            if(lookahead == '\r')
                ADVANCE(10);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(654);
            if(lookahead == '\r')
                ADVANCE(11);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(645);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '\n')
                ADVANCE(647);
            if(lookahead == '\r')
                ADVANCE(657);
            if(lookahead == '{')
                ADVANCE(658);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(657);
            if(lookahead != 0 &&
               lookahead != '#')
                ADVANCE(659);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '#')
                ADVANCE(655);
            if(lookahead != 0)
                ADVANCE(659);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead != 0 &&
               lookahead != '#')
                ADVANCE(659);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_endfor);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_endfor);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_elif);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_elif);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_endif);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_endif);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_endblock);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_endblock);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_endwith);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_endwith);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_endfilter);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_endfilter);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_endmacro);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_endmacro);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_endcall);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_endcall);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_endset);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_endset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_endtrans);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_endtrans);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_continue);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_continue);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_break);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_break);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_debug);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_debug);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_endautoescape);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_endautoescape);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_raw);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_raw);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(639);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 244 },
    [2] = { .lex_state = 244 },
    [3] = { .lex_state = 6 },
    [4] = { .lex_state = 6 },
    [5] = { .lex_state = 6 },
    [6] = { .lex_state = 7 },
    [7] = { .lex_state = 7 },
    [8] = { .lex_state = 7 },
    [9] = { .lex_state = 7 },
    [10] = { .lex_state = 7 },
    [11] = { .lex_state = 7 },
    [12] = { .lex_state = 7 },
    [13] = { .lex_state = 7 },
    [14] = { .lex_state = 7 },
    [15] = { .lex_state = 7 },
    [16] = { .lex_state = 7 },
    [17] = { .lex_state = 7 },
    [18] = { .lex_state = 7 },
    [19] = { .lex_state = 7 },
    [20] = { .lex_state = 7 },
    [21] = { .lex_state = 7 },
    [22] = { .lex_state = 7 },
    [23] = { .lex_state = 7 },
    [24] = { .lex_state = 7 },
    [25] = { .lex_state = 7 },
    [26] = { .lex_state = 7 },
    [27] = { .lex_state = 7 },
    [28] = { .lex_state = 7 },
    [29] = { .lex_state = 7 },
    [30] = { .lex_state = 7 },
    [31] = { .lex_state = 7 },
    [32] = { .lex_state = 7 },
    [33] = { .lex_state = 7 },
    [34] = { .lex_state = 7 },
    [35] = { .lex_state = 7 },
    [36] = { .lex_state = 7 },
    [37] = { .lex_state = 7 },
    [38] = { .lex_state = 7 },
    [39] = { .lex_state = 7 },
    [40] = { .lex_state = 7 },
    [41] = { .lex_state = 7 },
    [42] = { .lex_state = 7 },
    [43] = { .lex_state = 7 },
    [44] = { .lex_state = 7 },
    [45] = { .lex_state = 7 },
    [46] = { .lex_state = 7 },
    [47] = { .lex_state = 7 },
    [48] = { .lex_state = 7 },
    [49] = { .lex_state = 7 },
    [50] = { .lex_state = 7 },
    [51] = { .lex_state = 7 },
    [52] = { .lex_state = 7 },
    [53] = { .lex_state = 7 },
    [54] = { .lex_state = 7 },
    [55] = { .lex_state = 7 },
    [56] = { .lex_state = 7 },
    [57] = { .lex_state = 7 },
    [58] = { .lex_state = 7 },
    [59] = { .lex_state = 7 },
    [60] = { .lex_state = 7 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 7 },
    [63] = { .lex_state = 7 },
    [64] = { .lex_state = 7 },
    [65] = { .lex_state = 7 },
    [66] = { .lex_state = 7 },
    [67] = { .lex_state = 7 },
    [68] = { .lex_state = 7 },
    [69] = { .lex_state = 7 },
    [70] = { .lex_state = 7 },
    [71] = { .lex_state = 7 },
    [72] = { .lex_state = 8, .external_lex_state = 2 },
    [73] = { .lex_state = 8, .external_lex_state = 2 },
    [74] = { .lex_state = 8 },
    [75] = { .lex_state = 8, .external_lex_state = 2 },
    [76] = { .lex_state = 8, .external_lex_state = 2 },
    [77] = { .lex_state = 8, .external_lex_state = 2 },
    [78] = { .lex_state = 8, .external_lex_state = 2 },
    [79] = { .lex_state = 8, .external_lex_state = 2 },
    [80] = { .lex_state = 8, .external_lex_state = 2 },
    [81] = { .lex_state = 8 },
    [82] = { .lex_state = 8, .external_lex_state = 2 },
    [83] = { .lex_state = 8, .external_lex_state = 2 },
    [84] = { .lex_state = 8, .external_lex_state = 2 },
    [85] = { .lex_state = 8, .external_lex_state = 2 },
    [86] = { .lex_state = 8 },
    [87] = { .lex_state = 8 },
    [88] = { .lex_state = 8 },
    [89] = { .lex_state = 8 },
    [90] = { .lex_state = 8, .external_lex_state = 2 },
    [91] = { .lex_state = 8 },
    [92] = { .lex_state = 8, .external_lex_state = 2 },
    [93] = { .lex_state = 8, .external_lex_state = 2 },
    [94] = { .lex_state = 8, .external_lex_state = 2 },
    [95] = { .lex_state = 8 },
    [96] = { .lex_state = 8, .external_lex_state = 2 },
    [97] = { .lex_state = 8, .external_lex_state = 2 },
    [98] = { .lex_state = 8, .external_lex_state = 2 },
    [99] = { .lex_state = 9, .external_lex_state = 2 },
    [100] = { .lex_state = 9, .external_lex_state = 2 },
    [101] = { .lex_state = 8 },
    [102] = { .lex_state = 8 },
    [103] = { .lex_state = 8 },
    [104] = { .lex_state = 8, .external_lex_state = 2 },
    [105] = { .lex_state = 8, .external_lex_state = 2 },
    [106] = { .lex_state = 8, .external_lex_state = 2 },
    [107] = { .lex_state = 8 },
    [108] = { .lex_state = 8 },
    [109] = { .lex_state = 8 },
    [110] = { .lex_state = 8 },
    [111] = { .lex_state = 8 },
    [112] = { .lex_state = 8 },
    [113] = { .lex_state = 8 },
    [114] = { .lex_state = 8 },
    [115] = { .lex_state = 8 },
    [116] = { .lex_state = 8, .external_lex_state = 2 },
    [117] = { .lex_state = 8 },
    [118] = { .lex_state = 8 },
    [119] = { .lex_state = 8, .external_lex_state = 2 },
    [120] = { .lex_state = 8 },
    [121] = { .lex_state = 8, .external_lex_state = 2 },
    [122] = { .lex_state = 8 },
    [123] = { .lex_state = 8 },
    [124] = { .lex_state = 8, .external_lex_state = 2 },
    [125] = { .lex_state = 8, .external_lex_state = 2 },
    [126] = { .lex_state = 8, .external_lex_state = 2 },
    [127] = { .lex_state = 8, .external_lex_state = 2 },
    [128] = { .lex_state = 8 },
    [129] = { .lex_state = 8 },
    [130] = { .lex_state = 8 },
    [131] = { .lex_state = 8 },
    [132] = { .lex_state = 8 },
    [133] = { .lex_state = 8, .external_lex_state = 2 },
    [134] = { .lex_state = 8, .external_lex_state = 2 },
    [135] = { .lex_state = 8 },
    [136] = { .lex_state = 8 },
    [137] = { .lex_state = 8 },
    [138] = { .lex_state = 8 },
    [139] = { .lex_state = 8 },
    [140] = { .lex_state = 8 },
    [141] = { .lex_state = 8 },
    [142] = { .lex_state = 8 },
    [143] = { .lex_state = 8 },
    [144] = { .lex_state = 8, .external_lex_state = 2 },
    [145] = { .lex_state = 8 },
    [146] = { .lex_state = 8 },
    [147] = { .lex_state = 8, .external_lex_state = 2 },
    [148] = { .lex_state = 8, .external_lex_state = 2 },
    [149] = { .lex_state = 8, .external_lex_state = 2 },
    [150] = { .lex_state = 8, .external_lex_state = 2 },
    [151] = { .lex_state = 8, .external_lex_state = 2 },
    [152] = { .lex_state = 8, .external_lex_state = 2 },
    [153] = { .lex_state = 8, .external_lex_state = 2 },
    [154] = { .lex_state = 8, .external_lex_state = 2 },
    [155] = { .lex_state = 8, .external_lex_state = 2 },
    [156] = { .lex_state = 8 },
    [157] = { .lex_state = 10, .external_lex_state = 2 },
    [158] = { .lex_state = 10, .external_lex_state = 2 },
    [159] = { .lex_state = 10, .external_lex_state = 2 },
    [160] = { .lex_state = 10, .external_lex_state = 2 },
    [161] = { .lex_state = 10, .external_lex_state = 2 },
    [162] = { .lex_state = 10, .external_lex_state = 2 },
    [163] = { .lex_state = 10, .external_lex_state = 2 },
    [164] = { .lex_state = 10, .external_lex_state = 2 },
    [165] = { .lex_state = 10, .external_lex_state = 2 },
    [166] = { .lex_state = 10, .external_lex_state = 2 },
    [167] = { .lex_state = 10, .external_lex_state = 2 },
    [168] = { .lex_state = 10, .external_lex_state = 2 },
    [169] = { .lex_state = 10, .external_lex_state = 2 },
    [170] = { .lex_state = 10, .external_lex_state = 2 },
    [171] = { .lex_state = 10, .external_lex_state = 2 },
    [172] = { .lex_state = 10, .external_lex_state = 2 },
    [173] = { .lex_state = 10, .external_lex_state = 2 },
    [174] = { .lex_state = 10, .external_lex_state = 2 },
    [175] = { .lex_state = 10, .external_lex_state = 2 },
    [176] = { .lex_state = 10, .external_lex_state = 2 },
    [177] = { .lex_state = 10, .external_lex_state = 2 },
    [178] = { .lex_state = 10, .external_lex_state = 2 },
    [179] = { .lex_state = 10, .external_lex_state = 2 },
    [180] = { .lex_state = 10, .external_lex_state = 2 },
    [181] = { .lex_state = 10, .external_lex_state = 2 },
    [182] = { .lex_state = 10, .external_lex_state = 2 },
    [183] = { .lex_state = 10, .external_lex_state = 2 },
    [184] = { .lex_state = 10, .external_lex_state = 2 },
    [185] = { .lex_state = 10, .external_lex_state = 2 },
    [186] = { .lex_state = 10, .external_lex_state = 2 },
    [187] = { .lex_state = 10, .external_lex_state = 2 },
    [188] = { .lex_state = 10, .external_lex_state = 2 },
    [189] = { .lex_state = 10, .external_lex_state = 2 },
    [190] = { .lex_state = 10, .external_lex_state = 2 },
    [191] = { .lex_state = 10, .external_lex_state = 2 },
    [192] = { .lex_state = 10, .external_lex_state = 2 },
    [193] = { .lex_state = 10, .external_lex_state = 2 },
    [194] = { .lex_state = 10, .external_lex_state = 2 },
    [195] = { .lex_state = 10, .external_lex_state = 2 },
    [196] = { .lex_state = 7 },
    [197] = { .lex_state = 7 },
    [198] = { .lex_state = 0, .external_lex_state = 2 },
    [199] = { .lex_state = 0, .external_lex_state = 2 },
    [200] = { .lex_state = 0, .external_lex_state = 2 },
    [201] = { .lex_state = 0, .external_lex_state = 2 },
    [202] = { .lex_state = 0, .external_lex_state = 2 },
    [203] = { .lex_state = 0, .external_lex_state = 2 },
    [204] = { .lex_state = 0, .external_lex_state = 2 },
    [205] = { .lex_state = 0, .external_lex_state = 2 },
    [206] = { .lex_state = 0, .external_lex_state = 2 },
    [207] = { .lex_state = 11 },
    [208] = { .lex_state = 0, .external_lex_state = 2 },
    [209] = { .lex_state = 0, .external_lex_state = 2 },
    [210] = { .lex_state = 0 },
    [211] = { .lex_state = 0, .external_lex_state = 2 },
    [212] = { .lex_state = 0, .external_lex_state = 2 },
    [213] = { .lex_state = 0, .external_lex_state = 2 },
    [214] = { .lex_state = 0, .external_lex_state = 2 },
    [215] = { .lex_state = 244 },
    [216] = { .lex_state = 0, .external_lex_state = 2 },
    [217] = { .lex_state = 0, .external_lex_state = 2 },
    [218] = { .lex_state = 0, .external_lex_state = 2 },
    [219] = { .lex_state = 0, .external_lex_state = 2 },
    [220] = { .lex_state = 244 },
    [221] = { .lex_state = 0, .external_lex_state = 2 },
    [222] = { .lex_state = 0, .external_lex_state = 2 },
    [223] = { .lex_state = 0, .external_lex_state = 2 },
    [224] = { .lex_state = 0, .external_lex_state = 2 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 0, .external_lex_state = 2 },
    [227] = { .lex_state = 0, .external_lex_state = 2 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 11, .external_lex_state = 2 },
    [231] = { .lex_state = 0, .external_lex_state = 2 },
    [232] = { .lex_state = 0, .external_lex_state = 2 },
    [233] = { .lex_state = 0, .external_lex_state = 2 },
    [234] = { .lex_state = 11, .external_lex_state = 2 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 11, .external_lex_state = 2 },
    [237] = { .lex_state = 0 },
    [238] = { .lex_state = 0, .external_lex_state = 2 },
    [239] = { .lex_state = 11, .external_lex_state = 2 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 11, .external_lex_state = 2 },
    [243] = { .lex_state = 0, .external_lex_state = 2 },
    [244] = { .lex_state = 0, .external_lex_state = 2 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0, .external_lex_state = 2 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 11, .external_lex_state = 2 },
    [251] = { .lex_state = 0 },
    [252] = { .lex_state = 0, .external_lex_state = 2 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 11, .external_lex_state = 2 },
    [257] = { .lex_state = 2 },
    [258] = { .lex_state = 3 },
    [259] = { .lex_state = 11, .external_lex_state = 2 },
    [260] = { .lex_state = 0, .external_lex_state = 2 },
    [261] = { .lex_state = 3 },
    [262] = { .lex_state = 2 },
    [263] = { .lex_state = 0, .external_lex_state = 2 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 3 },
    [266] = { .lex_state = 2 },
    [267] = { .lex_state = 11 },
    [268] = { .lex_state = 3 },
    [269] = { .lex_state = 0, .external_lex_state = 2 },
    [270] = { .lex_state = 2 },
    [271] = { .lex_state = 0, .external_lex_state = 2 },
    [272] = { .lex_state = 4 },
    [273] = { .lex_state = 11 },
    [274] = { .lex_state = 3 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 2 },
    [277] = { .lex_state = 3 },
    [278] = { .lex_state = 11 },
    [279] = { .lex_state = 0, .external_lex_state = 2 },
    [280] = { .lex_state = 2 },
    [281] = { .lex_state = 0, .external_lex_state = 2 },
    [282] = { .lex_state = 0, .external_lex_state = 2 },
    [283] = { .lex_state = 3 },
    [284] = { .lex_state = 2 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0, .external_lex_state = 2 },
    [287] = { .lex_state = 4 },
    [288] = { .lex_state = 4 },
    [289] = { .lex_state = 0, .external_lex_state = 2 },
    [290] = { .lex_state = 0, .external_lex_state = 2 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 0, .external_lex_state = 3 },
    [294] = { .lex_state = 8 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0, .external_lex_state = 3 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 11, .external_lex_state = 2 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 2 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 3 },
    [315] = { .lex_state = 0, .external_lex_state = 2 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 11 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 8 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 8 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 4 },
    [330] = { .lex_state = 0, .external_lex_state = 3 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 11, .external_lex_state = 2 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0, .external_lex_state = 2 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 244 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0, .external_lex_state = 2 },
    [342] = { .lex_state = 0, .external_lex_state = 3 },
    [343] = { .lex_state = 11 },
    [344] = { .lex_state = 244 },
    [345] = { .lex_state = 8 },
    [346] = { .lex_state = 0, .external_lex_state = 2 },
    [347] = { .lex_state = 0, .external_lex_state = 2 },
    [348] = { .lex_state = 11 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0, .external_lex_state = 2 },
    [351] = { .lex_state = 244 },
    [352] = { .lex_state = 0, .external_lex_state = 2 },
    [353] = { .lex_state = 244 },
    [354] = { .lex_state = 11 },
    [355] = { .lex_state = 0, .external_lex_state = 2 },
    [356] = { .lex_state = 8 },
    [357] = { .lex_state = 11 },
    [358] = { .lex_state = 0, .external_lex_state = 2 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0, .external_lex_state = 2 },
    [362] = { .lex_state = 0, .external_lex_state = 2 },
    [363] = { .lex_state = 0, .external_lex_state = 2 },
    [364] = { .lex_state = 0, .external_lex_state = 2 },
    [365] = { .lex_state = 8 },
    [366] = { .lex_state = 0, .external_lex_state = 2 },
    [367] = { .lex_state = 8 },
    [368] = { .lex_state = 0, .external_lex_state = 2 },
    [369] = { .lex_state = 244 },
    [370] = { .lex_state = 244 },
    [371] = { .lex_state = 0, .external_lex_state = 2 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0, .external_lex_state = 2 },
    [374] = { .lex_state = 0, .external_lex_state = 2 },
    [375] = { .lex_state = 244 },
    [376] = { .lex_state = 0, .external_lex_state = 2 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 8 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 8 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 11 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 8 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 11 },
    [388] = { .lex_state = 11 },
    [389] = { .lex_state = 11 },
    [390] = { .lex_state = 8 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 8 },
    [398] = { .lex_state = 11 },
    [399] = { .lex_state = 11 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 8 },
    [405] = { .lex_state = 642 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { (TSStateId)(-1) },
    [409] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_true] = ACTIONS(1),
        [anon_sym_false] = ACTIONS(1),
        [anon_sym_null] = ACTIONS(1),
        [anon_sym_none] = ACTIONS(1),
        [anon_sym_DASH] = ACTIONS(1),
        [anon_sym_PLUS] = ACTIONS(1),
        [sym_dec_literal] = ACTIONS(1),
        [anon_sym_e] = ACTIONS(1),
        [anon_sym_e_PLUS] = ACTIONS(1),
        [anon_sym_e_DASH] = ACTIONS(1),
        [anon_sym__] = ACTIONS(1),
        [sym_oct_literal] = ACTIONS(1),
        [sym_bin_literal] = ACTIONS(1),
        [sym_hex_literal] = ACTIONS(1),
        [anon_sym_DOT] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
        [anon_sym_is] = ACTIONS(1),
        [anon_sym_boolean] = ACTIONS(1),
        [anon_sym_defined] = ACTIONS(1),
        [anon_sym_divisibleby] = ACTIONS(1),
        [anon_sym_eq] = ACTIONS(1),
        [anon_sym_escaped] = ACTIONS(1),
        [anon_sym_even] = ACTIONS(1),
        [anon_sym_filter] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_ge] = ACTIONS(1),
        [anon_sym_gt] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_integer] = ACTIONS(1),
        [anon_sym_iterable] = ACTIONS(1),
        [anon_sym_le] = ACTIONS(1),
        [anon_sym_lower] = ACTIONS(1),
        [anon_sym_lt] = ACTIONS(1),
        [anon_sym_mapping] = ACTIONS(1),
        [anon_sym_ne] = ACTIONS(1),
        [anon_sym_number] = ACTIONS(1),
        [anon_sym_odd] = ACTIONS(1),
        [anon_sym_sameas] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_test] = ACTIONS(1),
        [anon_sym_undefined] = ACTIONS(1),
        [anon_sym_upper] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_STAR] = ACTIONS(1),
        [anon_sym_SLASH] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(1),
        [anon_sym_PERCENT] = ACTIONS(1),
        [anon_sym_STAR_STAR] = ACTIONS(1),
        [anon_sym_EQ_EQ] = ACTIONS(1),
        [anon_sym_BANG_EQ] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_GT_EQ] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_LT_EQ] = ACTIONS(1),
        [anon_sym_and] = ACTIONS(1),
        [anon_sym_or] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_not] = ACTIONS(1),
        [anon_sym_BANG] = ACTIONS(1),
        [anon_sym_do] = ACTIONS(1),
        [anon_sym_autoescape] = ACTIONS(1),
        [anon_sym_trans] = ACTIONS(1),
        [anon_sym_pluralize] = ACTIONS(1),
        [anon_sym_if] = ACTIONS(1),
        [anon_sym_else] = ACTIONS(1),
        [anon_sym_block] = ACTIONS(1),
        [anon_sym_macro] = ACTIONS(1),
        [anon_sym_extends] = ACTIONS(1),
        [anon_sym_call] = ACTIONS(1),
        [anon_sym_with] = ACTIONS(1),
        [anon_sym_import] = ACTIONS(1),
        [anon_sym_from] = ACTIONS(1),
        [anon_sym_as] = ACTIONS(1),
        [anon_sym_ignore] = ACTIONS(1),
        [anon_sym_missing] = ACTIONS(1),
        [anon_sym_without] = ACTIONS(1),
        [anon_sym_context] = ACTIONS(1),
        [anon_sym_set] = ACTIONS(1),
        [anon_sym_for] = ACTIONS(1),
        [anon_sym_recursive] = ACTIONS(1),
        [anon_sym_POUND] = ACTIONS(1),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
        [anon_sym_POUND_RBRACE] = ACTIONS(1),
        [anon_sym_endfor] = ACTIONS(1),
        [anon_sym_elif] = ACTIONS(1),
        [anon_sym_endif] = ACTIONS(1),
        [anon_sym_endblock] = ACTIONS(1),
        [anon_sym_endwith] = ACTIONS(1),
        [anon_sym_endfilter] = ACTIONS(1),
        [anon_sym_endmacro] = ACTIONS(1),
        [anon_sym_endcall] = ACTIONS(1),
        [anon_sym_endset] = ACTIONS(1),
        [anon_sym_endtrans] = ACTIONS(1),
        [anon_sym_continue] = ACTIONS(1),
        [anon_sym_break] = ACTIONS(1),
        [anon_sym_debug] = ACTIONS(1),
        [anon_sym_endautoescape] = ACTIONS(1),
        [anon_sym_raw] = ACTIONS(1),
        [sym__raw_char] = ACTIONS(1),
        [sym_raw_end] = ACTIONS(1),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_source] = STATE(403),
        [sym_comment] = STATE(1),
        [sym_line_statement] = STATE(339),
        [sym_raw_block] = STATE(339),
        [sym__NEWLINE] = STATE(339),
        [aux_sym_source_repeat1] = STATE(215),
        [ts_builtin_sym_end] = ACTIONS(9),
        [anon_sym_POUND] = ACTIONS(11),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(13),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
    },
    [2] = {
        [sym_literal] = STATE(125),
        [sym_boolean_literal] = STATE(126),
        [sym_null_literal] = STATE(126),
        [sym_number_literal] = STATE(126),
        [sym_big_dec_literal] = STATE(98),
        [sym_float_literal] = STATE(126),
        [sym_list_literal] = STATE(126),
        [sym_tuple_literal] = STATE(126),
        [sym_dict_literal] = STATE(126),
        [sym_string_literal] = STATE(126),
        [sym_expression] = STATE(226),
        [sym_binary_expression] = STATE(90),
        [sym_unary_expression] = STATE(133),
        [sym_unary_operator] = STATE(71),
        [sym_primary_expression] = STATE(134),
        [sym_function_call] = STATE(125),
        [sym_inline_trans] = STATE(125),
        [sym_do_statement] = STATE(341),
        [sym_autoescape_statement] = STATE(341),
        [sym_trans_statement] = STATE(341),
        [sym_pluralize_statement] = STATE(341),
        [sym_block_statement] = STATE(341),
        [sym_filter_statement] = STATE(341),
        [sym_macro_statement] = STATE(341),
        [sym_extends_statement] = STATE(341),
        [sym_call_statement] = STATE(341),
        [sym_with_statement] = STATE(341),
        [sym_import_statement] = STATE(341),
        [sym_import_from] = STATE(392),
        [sym_include_statement] = STATE(341),
        [sym_set_statement] = STATE(341),
        [sym_for_statement] = STATE(341),
        [sym_if_expression] = STATE(341),
        [sym_comment] = STATE(2),
        [sym_statement] = STATE(263),
        [anon_sym_true] = ACTIONS(15),
        [anon_sym_false] = ACTIONS(15),
        [anon_sym_null] = ACTIONS(17),
        [anon_sym_none] = ACTIONS(17),
        [anon_sym_DASH] = ACTIONS(19),
        [anon_sym_PLUS] = ACTIONS(19),
        [sym_dec_literal] = ACTIONS(21),
        [anon_sym__] = ACTIONS(23),
        [sym_oct_literal] = ACTIONS(25),
        [sym_bin_literal] = ACTIONS(25),
        [sym_hex_literal] = ACTIONS(25),
        [anon_sym_LBRACK] = ACTIONS(27),
        [anon_sym_LPAREN] = ACTIONS(29),
        [anon_sym_LBRACE] = ACTIONS(31),
        [anon_sym_DQUOTE] = ACTIONS(33),
        [anon_sym_SQUOTE] = ACTIONS(35),
        [anon_sym_filter] = ACTIONS(37),
        [anon_sym_not] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [anon_sym_do] = ACTIONS(41),
        [anon_sym_autoescape] = ACTIONS(43),
        [anon_sym_trans] = ACTIONS(45),
        [anon_sym_pluralize] = ACTIONS(47),
        [anon_sym_if] = ACTIONS(49),
        [anon_sym_else] = ACTIONS(51),
        [anon_sym_block] = ACTIONS(53),
        [anon_sym_macro] = ACTIONS(55),
        [anon_sym_extends] = ACTIONS(57),
        [anon_sym_call] = ACTIONS(59),
        [anon_sym_with] = ACTIONS(61),
        [anon_sym_import] = ACTIONS(63),
        [anon_sym_from] = ACTIONS(65),
        [anon_sym_include] = ACTIONS(67),
        [anon_sym_set] = ACTIONS(69),
        [anon_sym_for] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
        [anon_sym_endfor] = ACTIONS(51),
        [anon_sym_elif] = ACTIONS(75),
        [anon_sym_endif] = ACTIONS(51),
        [anon_sym_endblock] = ACTIONS(51),
        [anon_sym_endwith] = ACTIONS(51),
        [anon_sym_endfilter] = ACTIONS(51),
        [anon_sym_endmacro] = ACTIONS(51),
        [anon_sym_endcall] = ACTIONS(51),
        [anon_sym_endset] = ACTIONS(51),
        [anon_sym_endtrans] = ACTIONS(51),
        [anon_sym_continue] = ACTIONS(51),
        [anon_sym_break] = ACTIONS(51),
        [anon_sym_debug] = ACTIONS(51),
        [anon_sym_endautoescape] = ACTIONS(51),
        [anon_sym_raw] = ACTIONS(77),
    },
    [3] = {
        [sym_literal] = STATE(142),
        [sym_boolean_literal] = STATE(141),
        [sym_null_literal] = STATE(141),
        [sym_number_literal] = STATE(141),
        [sym_big_dec_literal] = STATE(143),
        [sym_float_literal] = STATE(141),
        [sym_list_literal] = STATE(141),
        [sym_tuple_literal] = STATE(141),
        [sym_dict_literal] = STATE(141),
        [sym_string_literal] = STATE(141),
        [sym_builtin_test] = STATE(118),
        [sym_unary_expression] = STATE(118),
        [sym_unary_operator] = STATE(66),
        [sym_primary_expression] = STATE(139),
        [sym_function_call] = STATE(142),
        [sym_inline_trans] = STATE(142),
        [sym_comment] = STATE(3),
        [anon_sym_true] = ACTIONS(79),
        [anon_sym_false] = ACTIONS(79),
        [anon_sym_null] = ACTIONS(81),
        [anon_sym_none] = ACTIONS(81),
        [anon_sym_DASH] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(83),
        [sym_dec_literal] = ACTIONS(85),
        [anon_sym__] = ACTIONS(87),
        [sym_oct_literal] = ACTIONS(89),
        [sym_bin_literal] = ACTIONS(89),
        [sym_hex_literal] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(91),
        [anon_sym_LPAREN] = ACTIONS(93),
        [anon_sym_LBRACE] = ACTIONS(95),
        [anon_sym_DQUOTE] = ACTIONS(97),
        [anon_sym_SQUOTE] = ACTIONS(99),
        [anon_sym_boolean] = ACTIONS(101),
        [anon_sym_callable] = ACTIONS(101),
        [anon_sym_defined] = ACTIONS(101),
        [anon_sym_divisibleby] = ACTIONS(103),
        [anon_sym_eq] = ACTIONS(103),
        [anon_sym_escaped] = ACTIONS(101),
        [anon_sym_even] = ACTIONS(101),
        [anon_sym_filter] = ACTIONS(101),
        [anon_sym_float] = ACTIONS(101),
        [anon_sym_ge] = ACTIONS(103),
        [anon_sym_gt] = ACTIONS(103),
        [anon_sym_in] = ACTIONS(105),
        [anon_sym_integer] = ACTIONS(101),
        [anon_sym_iterable] = ACTIONS(101),
        [anon_sym_le] = ACTIONS(103),
        [anon_sym_lower] = ACTIONS(101),
        [anon_sym_lt] = ACTIONS(103),
        [anon_sym_mapping] = ACTIONS(101),
        [anon_sym_ne] = ACTIONS(103),
        [anon_sym_number] = ACTIONS(101),
        [anon_sym_odd] = ACTIONS(101),
        [anon_sym_sameas] = ACTIONS(103),
        [anon_sym_sequence] = ACTIONS(101),
        [anon_sym_string] = ACTIONS(101),
        [anon_sym_test] = ACTIONS(101),
        [anon_sym_undefined] = ACTIONS(101),
        [anon_sym_upper] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [sym_identifier] = ACTIONS(107),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
    },
    [4] = {
        [sym_literal] = STATE(125),
        [sym_boolean_literal] = STATE(126),
        [sym_null_literal] = STATE(126),
        [sym_number_literal] = STATE(126),
        [sym_big_dec_literal] = STATE(98),
        [sym_float_literal] = STATE(126),
        [sym_list_literal] = STATE(126),
        [sym_tuple_literal] = STATE(126),
        [sym_dict_literal] = STATE(126),
        [sym_string_literal] = STATE(126),
        [sym_builtin_test] = STATE(106),
        [sym_unary_expression] = STATE(106),
        [sym_unary_operator] = STATE(71),
        [sym_primary_expression] = STATE(134),
        [sym_function_call] = STATE(125),
        [sym_inline_trans] = STATE(125),
        [sym_comment] = STATE(4),
        [anon_sym_true] = ACTIONS(15),
        [anon_sym_false] = ACTIONS(15),
        [anon_sym_null] = ACTIONS(17),
        [anon_sym_none] = ACTIONS(17),
        [anon_sym_DASH] = ACTIONS(19),
        [anon_sym_PLUS] = ACTIONS(19),
        [sym_dec_literal] = ACTIONS(21),
        [anon_sym__] = ACTIONS(23),
        [sym_oct_literal] = ACTIONS(25),
        [sym_bin_literal] = ACTIONS(25),
        [sym_hex_literal] = ACTIONS(25),
        [anon_sym_LBRACK] = ACTIONS(27),
        [anon_sym_LPAREN] = ACTIONS(29),
        [anon_sym_LBRACE] = ACTIONS(31),
        [anon_sym_DQUOTE] = ACTIONS(33),
        [anon_sym_SQUOTE] = ACTIONS(35),
        [anon_sym_boolean] = ACTIONS(109),
        [anon_sym_callable] = ACTIONS(109),
        [anon_sym_defined] = ACTIONS(109),
        [anon_sym_divisibleby] = ACTIONS(111),
        [anon_sym_eq] = ACTIONS(111),
        [anon_sym_escaped] = ACTIONS(109),
        [anon_sym_even] = ACTIONS(109),
        [anon_sym_filter] = ACTIONS(109),
        [anon_sym_float] = ACTIONS(109),
        [anon_sym_ge] = ACTIONS(111),
        [anon_sym_gt] = ACTIONS(111),
        [anon_sym_in] = ACTIONS(113),
        [anon_sym_integer] = ACTIONS(109),
        [anon_sym_iterable] = ACTIONS(109),
        [anon_sym_le] = ACTIONS(111),
        [anon_sym_lower] = ACTIONS(109),
        [anon_sym_lt] = ACTIONS(111),
        [anon_sym_mapping] = ACTIONS(109),
        [anon_sym_ne] = ACTIONS(111),
        [anon_sym_number] = ACTIONS(109),
        [anon_sym_odd] = ACTIONS(109),
        [anon_sym_sameas] = ACTIONS(111),
        [anon_sym_sequence] = ACTIONS(109),
        [anon_sym_string] = ACTIONS(109),
        [anon_sym_test] = ACTIONS(109),
        [anon_sym_undefined] = ACTIONS(109),
        [anon_sym_upper] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [sym_identifier] = ACTIONS(73),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
    },
    [5] = {
        [sym_literal] = STATE(161),
        [sym_boolean_literal] = STATE(173),
        [sym_null_literal] = STATE(173),
        [sym_number_literal] = STATE(173),
        [sym_big_dec_literal] = STATE(164),
        [sym_float_literal] = STATE(173),
        [sym_list_literal] = STATE(173),
        [sym_tuple_literal] = STATE(173),
        [sym_dict_literal] = STATE(173),
        [sym_string_literal] = STATE(173),
        [sym_builtin_test] = STATE(182),
        [sym_unary_expression] = STATE(182),
        [sym_unary_operator] = STATE(68),
        [sym_primary_expression] = STATE(176),
        [sym_function_call] = STATE(161),
        [sym_inline_trans] = STATE(161),
        [sym_comment] = STATE(5),
        [anon_sym_true] = ACTIONS(115),
        [anon_sym_false] = ACTIONS(115),
        [anon_sym_null] = ACTIONS(117),
        [anon_sym_none] = ACTIONS(117),
        [anon_sym_DASH] = ACTIONS(119),
        [anon_sym_PLUS] = ACTIONS(119),
        [sym_dec_literal] = ACTIONS(121),
        [anon_sym__] = ACTIONS(123),
        [sym_oct_literal] = ACTIONS(125),
        [sym_bin_literal] = ACTIONS(125),
        [sym_hex_literal] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LPAREN] = ACTIONS(129),
        [anon_sym_LBRACE] = ACTIONS(131),
        [anon_sym_DQUOTE] = ACTIONS(133),
        [anon_sym_SQUOTE] = ACTIONS(135),
        [anon_sym_boolean] = ACTIONS(137),
        [anon_sym_callable] = ACTIONS(137),
        [anon_sym_defined] = ACTIONS(137),
        [anon_sym_divisibleby] = ACTIONS(139),
        [anon_sym_eq] = ACTIONS(139),
        [anon_sym_escaped] = ACTIONS(137),
        [anon_sym_even] = ACTIONS(137),
        [anon_sym_filter] = ACTIONS(137),
        [anon_sym_float] = ACTIONS(137),
        [anon_sym_ge] = ACTIONS(139),
        [anon_sym_gt] = ACTIONS(139),
        [anon_sym_in] = ACTIONS(141),
        [anon_sym_integer] = ACTIONS(137),
        [anon_sym_iterable] = ACTIONS(137),
        [anon_sym_le] = ACTIONS(139),
        [anon_sym_lower] = ACTIONS(137),
        [anon_sym_lt] = ACTIONS(139),
        [anon_sym_mapping] = ACTIONS(137),
        [anon_sym_ne] = ACTIONS(139),
        [anon_sym_number] = ACTIONS(137),
        [anon_sym_odd] = ACTIONS(137),
        [anon_sym_sameas] = ACTIONS(139),
        [anon_sym_sequence] = ACTIONS(137),
        [anon_sym_string] = ACTIONS(137),
        [anon_sym_test] = ACTIONS(137),
        [anon_sym_undefined] = ACTIONS(137),
        [anon_sym_upper] = ACTIONS(137),
        [anon_sym_not] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [sym_identifier] = ACTIONS(143),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(145),
    1,
    anon_sym_COMMA,
    ACTIONS(147),
    1,
    anon_sym_RPAREN,
    STATE(6),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(247),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [97] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(149),
    1,
    anon_sym_COMMA,
    ACTIONS(151),
    1,
    anon_sym_RBRACK,
    STATE(7),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(253),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [194] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(153),
    1,
    anon_sym_RPAREN,
    ACTIONS(155),
    1,
    sym_identifier,
    STATE(8),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(264),
    1,
    sym_expression,
    STATE(333),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [291] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(157),
    1,
    anon_sym_COMMA,
    ACTIONS(159),
    1,
    anon_sym_RPAREN,
    STATE(9),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(255),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [388] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(155),
    1,
    sym_identifier,
    ACTIONS(161),
    1,
    anon_sym_RPAREN,
    STATE(10),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(264),
    1,
    sym_expression,
    STATE(316),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [485] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(145),
    1,
    anon_sym_COMMA,
    ACTIONS(147),
    1,
    anon_sym_RPAREN,
    STATE(11),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(229),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [582] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(163),
    1,
    anon_sym_COMMA,
    ACTIONS(165),
    1,
    anon_sym_RBRACK,
    STATE(12),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(254),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [679] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(155),
    1,
    sym_identifier,
    ACTIONS(167),
    1,
    anon_sym_RPAREN,
    STATE(13),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(264),
    1,
    sym_expression,
    STATE(324),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [776] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(169),
    1,
    anon_sym_COMMA,
    ACTIONS(171),
    1,
    anon_sym_RBRACK,
    STATE(14),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(237),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [873] = 27,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(173),
    1,
    anon_sym_COMMA,
    ACTIONS(175),
    1,
    anon_sym_RPAREN,
    STATE(15),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(235),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [970] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(177),
    1,
    anon_sym_RPAREN,
    STATE(16),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1064] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(179),
    1,
    anon_sym_RPAREN,
    STATE(17),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1158] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(181),
    1,
    anon_sym_RPAREN,
    STATE(18),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1252] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(183),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(297),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1346] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(185),
    1,
    anon_sym_RBRACK,
    STATE(20),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1440] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(187),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(306),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1534] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(189),
    1,
    anon_sym_RBRACK,
    STATE(22),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1628] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(191),
    1,
    anon_sym_RPAREN,
    STATE(23),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1722] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(155),
    1,
    sym_identifier,
    STATE(24),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(264),
    1,
    sym_expression,
    STATE(372),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1816] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(193),
    1,
    anon_sym_RBRACK,
    STATE(25),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [1910] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(195),
    1,
    anon_sym_RPAREN,
    STATE(26),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2004] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(197),
    1,
    anon_sym_RBRACK,
    STATE(27),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2098] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(199),
    1,
    anon_sym_RBRACE,
    STATE(28),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(299),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2192] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(201),
    1,
    anon_sym_RPAREN,
    STATE(29),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2286] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(203),
    1,
    anon_sym_RBRACK,
    STATE(30),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2380] = 26,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    ACTIONS(205),
    1,
    anon_sym_RBRACK,
    STATE(31),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2474] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(224),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2565] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(214),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2656] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(227),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2747] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(121),
    1,
    sym_dec_literal,
    ACTIONS(123),
    1,
    anon_sym__,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    ACTIONS(129),
    1,
    anon_sym_LPAREN,
    ACTIONS(131),
    1,
    anon_sym_LBRACE,
    ACTIONS(133),
    1,
    anon_sym_DQUOTE,
    ACTIONS(135),
    1,
    anon_sym_SQUOTE,
    ACTIONS(143),
    1,
    sym_identifier,
    STATE(35),
    1,
    sym_comment,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(159),
    1,
    sym_binary_expression,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(172),
    1,
    sym_expression,
    STATE(175),
    1,
    sym_unary_expression,
    STATE(176),
    1,
    sym_primary_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(115),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(117),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(119),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(125),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(161),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(173),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2838] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(36),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(328),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [2929] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(121),
    1,
    sym_dec_literal,
    ACTIONS(123),
    1,
    anon_sym__,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    ACTIONS(129),
    1,
    anon_sym_LPAREN,
    ACTIONS(131),
    1,
    anon_sym_LBRACE,
    ACTIONS(133),
    1,
    anon_sym_DQUOTE,
    ACTIONS(135),
    1,
    anon_sym_SQUOTE,
    ACTIONS(143),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(158),
    1,
    sym_binary_expression,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(175),
    1,
    sym_unary_expression,
    STATE(176),
    1,
    sym_primary_expression,
    STATE(239),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(115),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(117),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(119),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(125),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(161),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(173),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3020] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(38),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(150),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3111] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(121),
    1,
    sym_dec_literal,
    ACTIONS(123),
    1,
    anon_sym__,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    ACTIONS(129),
    1,
    anon_sym_LPAREN,
    ACTIONS(131),
    1,
    anon_sym_LBRACE,
    ACTIONS(133),
    1,
    anon_sym_DQUOTE,
    ACTIONS(135),
    1,
    anon_sym_SQUOTE,
    ACTIONS(143),
    1,
    sym_identifier,
    STATE(39),
    1,
    sym_comment,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(158),
    1,
    sym_binary_expression,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(175),
    1,
    sym_unary_expression,
    STATE(176),
    1,
    sym_primary_expression,
    STATE(230),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(115),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(117),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(119),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(125),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(161),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(173),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3202] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(40),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(225),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3293] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(88),
    1,
    sym_binary_expression,
    STATE(110),
    1,
    sym_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3384] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(325),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3475] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(43),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(281),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3566] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(121),
    1,
    sym_dec_literal,
    ACTIONS(123),
    1,
    anon_sym__,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    ACTIONS(129),
    1,
    anon_sym_LPAREN,
    ACTIONS(131),
    1,
    anon_sym_LBRACE,
    ACTIONS(133),
    1,
    anon_sym_DQUOTE,
    ACTIONS(135),
    1,
    anon_sym_SQUOTE,
    ACTIONS(143),
    1,
    sym_identifier,
    STATE(44),
    1,
    sym_comment,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(158),
    1,
    sym_binary_expression,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(175),
    1,
    sym_unary_expression,
    STATE(176),
    1,
    sym_primary_expression,
    STATE(242),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(115),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(117),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(119),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(125),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(161),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(173),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3657] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(45),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(240),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3748] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(46),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(295),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3839] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(228),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [3930] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(48),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(248),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4021] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(122),
    1,
    sym_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4112] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(312),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4203] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(219),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4294] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(210),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4385] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(217),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4476] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(105),
    1,
    sym_expression,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4567] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(321),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4658] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(246),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4749] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(223),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4840] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(275),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [4931] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(238),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5022] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(302),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5113] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(326),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5204] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(271),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5295] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_binary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(140),
    1,
    sym_unary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    STATE(285),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5386] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(269),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5477] = 25,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(90),
    1,
    sym_binary_expression,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(133),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    STATE(279),
    1,
    sym_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5568] = 22,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(132),
    1,
    sym_unary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    STATE(66),
    2,
    sym_unary_operator,
    sym_comment,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5651] = 23,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(121),
    1,
    sym_dec_literal,
    ACTIONS(123),
    1,
    anon_sym__,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    ACTIONS(129),
    1,
    anon_sym_LPAREN,
    ACTIONS(131),
    1,
    anon_sym_LBRACE,
    ACTIONS(133),
    1,
    anon_sym_DQUOTE,
    ACTIONS(135),
    1,
    anon_sym_SQUOTE,
    ACTIONS(143),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(176),
    1,
    sym_primary_expression,
    STATE(182),
    1,
    sym_unary_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(115),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(117),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(119),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(125),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(161),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(173),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5736] = 22,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(121),
    1,
    sym_dec_literal,
    ACTIONS(123),
    1,
    anon_sym__,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    ACTIONS(129),
    1,
    anon_sym_LPAREN,
    ACTIONS(131),
    1,
    anon_sym_LBRACE,
    ACTIONS(133),
    1,
    anon_sym_DQUOTE,
    ACTIONS(135),
    1,
    anon_sym_SQUOTE,
    ACTIONS(143),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(176),
    1,
    sym_primary_expression,
    STATE(193),
    1,
    sym_unary_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(115),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(117),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(119),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    STATE(68),
    2,
    sym_unary_operator,
    sym_comment,
    ACTIONS(125),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(161),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(173),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5819] = 23,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(85),
    1,
    sym_dec_literal,
    ACTIONS(87),
    1,
    anon_sym__,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    ACTIONS(93),
    1,
    anon_sym_LPAREN,
    ACTIONS(95),
    1,
    anon_sym_LBRACE,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    ACTIONS(107),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_unary_operator,
    STATE(69),
    1,
    sym_comment,
    STATE(118),
    1,
    sym_unary_expression,
    STATE(139),
    1,
    sym_primary_expression,
    STATE(143),
    1,
    sym_big_dec_literal,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(79),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(81),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(83),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(89),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(142),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(141),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5904] = 23,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(70),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_unary_operator,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(106),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5989] = 22,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(21),
    1,
    sym_dec_literal,
    ACTIONS(23),
    1,
    anon_sym__,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(29),
    1,
    anon_sym_LPAREN,
    ACTIONS(31),
    1,
    anon_sym_LBRACE,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(73),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_big_dec_literal,
    STATE(116),
    1,
    sym_unary_expression,
    STATE(134),
    1,
    sym_primary_expression,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(17),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(19),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    STATE(71),
    2,
    sym_unary_operator,
    sym_comment,
    ACTIONS(25),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    STATE(125),
    3,
    sym_literal,
    sym_function_call,
    sym_inline_trans,
    STATE(126),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [6072] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(209),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(207),
    29,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_as,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6117] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(213),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(211),
    29,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_as,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6162] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(217),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(215),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [6208] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(221),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(219),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6252] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(225),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(223),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6296] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(229),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(227),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6340] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(233),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(231),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6384] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(239),
    1,
    anon_sym_DOT,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(241),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(237),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(235),
    24,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [6432] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(245),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(243),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6476] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(247),
    1,
    anon_sym_DOT,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(217),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(235),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [6524] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(251),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(249),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6568] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(253),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(237),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(215),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [6614] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(257),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(255),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6658] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(261),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(259),
    28,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6702] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(265),
    1,
    anon_sym_LPAREN,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(263),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [6746] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(271),
    1,
    anon_sym_is,
    STATE(69),
    1,
    sym_binary_operator,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(269),
    8,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_EQ,
    ACTIONS(267),
    17,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [6794] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(69),
    1,
    sym_binary_operator,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(269),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [6838] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(211),
    27,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_import,
    [6880] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(273),
    1,
    anon_sym_is,
    STATE(70),
    1,
    sym_binary_operator,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(275),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(269),
    7,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    ACTIONS(267),
    17,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [6928] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(207),
    27,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_import,
    [6970] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(277),
    1,
    anon_sym_LPAREN,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(279),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(263),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7014] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(70),
    1,
    sym_binary_operator,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(275),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(269),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7058] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(283),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(281),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7099] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(249),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7140] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(287),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(285),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7181] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(291),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(289),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7222] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(241),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(235),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7263] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(253),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(293),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(215),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [7306] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(295),
    1,
    anon_sym_DOT,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(241),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(293),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(235),
    21,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [7351] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(297),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7392] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(299),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7433] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(301),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7474] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(305),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(303),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7515] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(305),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(303),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7556] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(309),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(307),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [7597] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(255),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7638] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(231),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7679] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(303),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7720] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(303),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7761] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(311),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7802] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(281),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7843] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(219),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7884] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(223),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7925] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(313),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [7966] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(317),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(315),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8007] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(319),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8048] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(307),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8089] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(323),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(321),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8130] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(325),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8171] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(329),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(327),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8212] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(331),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8253] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(333),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8294] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(251),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(249),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8335] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(279),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(263),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8376] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(337),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(335),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8417] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(339),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(301),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8458] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(249),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8499] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(243),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8540] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(327),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8581] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(321),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8622] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(315),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8663] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(343),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(341),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8704] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(347),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(345),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [8745] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(349),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8786] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(227),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8827] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(259),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8868] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(215),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8909] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(345),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8950] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(341),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [8991] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(335),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9032] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(263),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9073] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(235),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9114] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(253),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(215),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9155] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(289),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9196] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(285),
    26,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_is,
    anon_sym_EQ,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9237] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(351),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(297),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9278] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(353),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(299),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9319] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(355),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(319),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9360] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(357),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(331),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9401] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(359),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(313),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9442] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(361),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(325),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9483] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(363),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(349),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9524] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(365),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(311),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9565] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(367),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(333),
    25,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    anon_sym_if,
    anon_sym_else,
    anon_sym_recursive,
    [9606] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(265),
    1,
    anon_sym_LPAREN,
    ACTIONS(369),
    1,
    anon_sym_EQ,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(263),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9649] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(371),
    1,
    anon_sym_LPAREN,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(279),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(263),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9690] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(373),
    1,
    anon_sym_is,
    STATE(67),
    1,
    sym_binary_operator,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(275),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(269),
    4,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(267),
    17,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    [9735] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(67),
    1,
    sym_binary_operator,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(275),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(269),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9776] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(233),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(231),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9814] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(279),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(263),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9852] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(287),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(285),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9890] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(291),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(289),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9928] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(241),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(235),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [9966] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(365),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(311),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10004] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(357),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(331),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10042] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(351),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(297),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10080] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(353),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(299),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10118] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(339),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(301),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10156] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(257),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(255),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10194] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(305),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(303),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10232] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(305),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(303),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10270] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(337),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(335),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10308] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(283),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(281),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10346] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(343),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(341),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10384] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(347),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(345),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10422] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(221),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(219),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10460] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(225),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(223),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10498] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(253),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(215),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10536] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(359),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(313),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10574] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(355),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(319),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10612] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(309),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(307),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10650] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(361),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(325),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10688] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(367),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(333),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10726] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(209),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(207),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10764] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(261),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(259),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10802] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(251),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(249),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10840] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(251),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(249),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10878] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(245),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(243),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10916] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(329),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(327),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10954] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(191),
    1,
    sym_comment,
    ACTIONS(323),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(321),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [10992] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(229),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(227),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [11030] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(317),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(315),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [11068] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(363),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(349),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [11106] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(213),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(211),
    22,
    anon_sym_DASH,
    anon_sym_PLUS,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    anon_sym_is,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_SLASH_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_and,
    anon_sym_or,
    anon_sym_PIPE,
    anon_sym_TILDE,
    sym_identifier,
    [11144] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(375),
    19,
    anon_sym_true,
    anon_sym_false,
    anon_sym_null,
    anon_sym_none,
    anon_sym_DASH,
    anon_sym_PLUS,
    sym_dec_literal,
    anon_sym__,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    anon_sym_LBRACK,
    anon_sym_LPAREN,
    anon_sym_LBRACE,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    anon_sym_not,
    anon_sym_BANG,
    sym_identifier,
    [11178] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(377),
    19,
    anon_sym_true,
    anon_sym_false,
    anon_sym_null,
    anon_sym_none,
    anon_sym_DASH,
    anon_sym_PLUS,
    sym_dec_literal,
    anon_sym__,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    anon_sym_LBRACK,
    anon_sym_LPAREN,
    anon_sym_LBRACE,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    anon_sym_not,
    anon_sym_BANG,
    sym_identifier,
    [11212] = 12,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    ACTIONS(385),
    1,
    anon_sym_as,
    STATE(198),
    1,
    sym_comment,
    STATE(201),
    1,
    aux_sym_in_expression_repeat1,
    STATE(213),
    1,
    sym_import_as,
    STATE(362),
    1,
    sym_attribute_context,
    STATE(363),
    1,
    sym_import_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(387),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11251] = 12,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    ACTIONS(385),
    1,
    anon_sym_as,
    STATE(199),
    1,
    sym_comment,
    STATE(209),
    1,
    aux_sym_in_expression_repeat1,
    STATE(213),
    1,
    sym_import_as,
    STATE(362),
    1,
    sym_attribute_context,
    STATE(363),
    1,
    sym_import_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(387),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11290] = 12,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    ACTIONS(385),
    1,
    anon_sym_as,
    ACTIONS(389),
    1,
    anon_sym_COLON,
    STATE(199),
    1,
    aux_sym_in_expression_repeat1,
    STATE(200),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_import_as,
    STATE(361),
    1,
    sym_import_attribute,
    STATE(362),
    1,
    sym_attribute_context,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(391),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11329] = 12,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    ACTIONS(385),
    1,
    anon_sym_as,
    ACTIONS(393),
    1,
    anon_sym_COLON,
    STATE(201),
    1,
    sym_comment,
    STATE(209),
    1,
    aux_sym_in_expression_repeat1,
    STATE(222),
    1,
    sym_import_as,
    STATE(346),
    1,
    sym_import_attribute,
    STATE(362),
    1,
    sym_attribute_context,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(395),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11368] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(397),
    1,
    anon_sym_COLON,
    ACTIONS(399),
    1,
    anon_sym_ignore,
    STATE(202),
    1,
    sym_comment,
    STATE(204),
    1,
    aux_sym_include_statement_repeat1,
    STATE(244),
    1,
    sym_include_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(401),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(243),
    2,
    sym_attribute_ignore,
    sym_attribute_context,
    [11402] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(399),
    1,
    anon_sym_ignore,
    ACTIONS(403),
    1,
    anon_sym_COLON,
    STATE(202),
    1,
    aux_sym_include_statement_repeat1,
    STATE(203),
    1,
    sym_comment,
    STATE(244),
    1,
    sym_include_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(405),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(243),
    2,
    sym_attribute_ignore,
    sym_attribute_context,
    [11436] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(407),
    1,
    anon_sym_COLON,
    ACTIONS(412),
    1,
    anon_sym_ignore,
    STATE(244),
    1,
    sym_include_attribute,
    ACTIONS(409),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(415),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(204),
    2,
    sym_comment,
    aux_sym_include_statement_repeat1,
    STATE(243),
    2,
    sym_attribute_ignore,
    sym_attribute_context,
    [11468] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(385),
    1,
    anon_sym_as,
    ACTIONS(389),
    1,
    anon_sym_COLON,
    STATE(205),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_import_as,
    STATE(361),
    1,
    sym_import_attribute,
    STATE(362),
    1,
    sym_attribute_context,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(391),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11501] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    ACTIONS(385),
    1,
    anon_sym_as,
    STATE(206),
    1,
    sym_comment,
    STATE(213),
    1,
    sym_import_as,
    STATE(362),
    1,
    sym_attribute_context,
    STATE(363),
    1,
    sym_import_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(387),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11534] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(417),
    1,
    anon_sym_LPAREN,
    ACTIONS(419),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_comment,
    STATE(203),
    3,
    sym_list_literal,
    sym_tuple_literal,
    sym_string_literal,
    [11567] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(421),
    1,
    anon_sym_DOT,
    ACTIONS(423),
    1,
    anon_sym_COMMA,
    ACTIONS(425),
    1,
    anon_sym_COLON,
    ACTIONS(427),
    1,
    anon_sym_EQ,
    STATE(208),
    1,
    sym_comment,
    STATE(282),
    1,
    aux_sym_trans_statement_repeat1,
    STATE(331),
    1,
    aux_sym_assignment_expression_repeat1,
    ACTIONS(429),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11599] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(431),
    1,
    anon_sym_COMMA,
    ACTIONS(436),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(209),
    2,
    sym_comment,
    aux_sym_in_expression_repeat1,
    ACTIONS(434),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_as,
    anon_sym_without,
    [11623] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(442),
    4,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_EQ,
    [11648] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    STATE(211),
    1,
    sym_comment,
    STATE(362),
    1,
    sym_attribute_context,
    STATE(363),
    1,
    sym_import_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(387),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11675] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(436),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(434),
    5,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_as,
    anon_sym_without,
    [11696] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(393),
    1,
    anon_sym_COLON,
    STATE(213),
    1,
    sym_comment,
    STATE(346),
    1,
    sym_import_attribute,
    STATE(362),
    1,
    sym_attribute_context,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(395),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11723] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(450),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(448),
    3,
    anon_sym_COLON,
    anon_sym_if,
    anon_sym_recursive,
    [11748] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(11),
    1,
    anon_sym_POUND,
    ACTIONS(13),
    1,
    aux_sym_comment_token2,
    ACTIONS(452),
    1,
    ts_builtin_sym_end,
    STATE(215),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_source_repeat1,
    STATE(339),
    3,
    sym_line_statement,
    sym_raw_block,
    sym__NEWLINE,
    [11775] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(421),
    1,
    anon_sym_DOT,
    ACTIONS(427),
    1,
    anon_sym_EQ,
    STATE(216),
    1,
    sym_comment,
    STATE(331),
    1,
    aux_sym_assignment_expression_repeat1,
    ACTIONS(454),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(456),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11802] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(458),
    1,
    anon_sym_COLON,
    ACTIONS(460),
    1,
    anon_sym_if,
    STATE(217),
    1,
    sym_comment,
    STATE(376),
    1,
    sym_ternary_expression,
    ACTIONS(462),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11831] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    STATE(218),
    1,
    sym_comment,
    STATE(221),
    1,
    aux_sym_in_expression_repeat1,
    ACTIONS(466),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(464),
    3,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_without,
    [11856] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(470),
    1,
    anon_sym_else,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(468),
    2,
    anon_sym_COLON,
    anon_sym_recursive,
    ACTIONS(472),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11883] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(474),
    1,
    ts_builtin_sym_end,
    ACTIONS(476),
    1,
    anon_sym_POUND,
    ACTIONS(479),
    1,
    aux_sym_comment_token2,
    STATE(220),
    2,
    sym_comment,
    aux_sym_source_repeat1,
    STATE(339),
    3,
    sym_line_statement,
    sym_raw_block,
    sym__NEWLINE,
    [11908] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    STATE(209),
    1,
    aux_sym_in_expression_repeat1,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(484),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(482),
    3,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_without,
    [11933] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(486),
    1,
    anon_sym_COLON,
    STATE(222),
    1,
    sym_comment,
    STATE(362),
    1,
    sym_attribute_context,
    STATE(366),
    1,
    sym_import_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(488),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11960] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(460),
    1,
    anon_sym_if,
    ACTIONS(490),
    1,
    anon_sym_COLON,
    STATE(223),
    1,
    sym_comment,
    STATE(368),
    1,
    sym_ternary_expression,
    ACTIONS(492),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11989] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(496),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(494),
    3,
    anon_sym_COLON,
    anon_sym_if,
    anon_sym_recursive,
    [12014] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(498),
    1,
    anon_sym_COMMA,
    ACTIONS(500),
    1,
    anon_sym_EQ,
    STATE(225),
    1,
    sym_comment,
    STATE(296),
    1,
    aux_sym_list_literal_repeat1,
    [12042] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(13),
    1,
    aux_sym_comment_token2,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(502),
    1,
    sym__eof,
    STATE(226),
    1,
    sym_comment,
    STATE(353),
    1,
    sym__END,
    STATE(375),
    1,
    sym__NEWLINE,
    [12070] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(504),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(506),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12094] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(508),
    1,
    anon_sym_COMMA,
    ACTIONS(510),
    1,
    anon_sym_RBRACE,
    STATE(228),
    1,
    sym_comment,
    STATE(338),
    1,
    aux_sym_dict_literal_repeat1,
    [12122] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(512),
    1,
    anon_sym_COMMA,
    ACTIONS(514),
    1,
    anon_sym_RPAREN,
    STATE(229),
    1,
    sym_comment,
    STATE(335),
    1,
    aux_sym_list_literal_repeat1,
    [12150] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(516),
    1,
    anon_sym_DOT,
    ACTIONS(518),
    1,
    anon_sym_LBRACK,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(520),
    2,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(522),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12174] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(526),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(524),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12194] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(530),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(528),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12214] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(460),
    1,
    anon_sym_if,
    ACTIONS(532),
    1,
    anon_sym_COLON,
    ACTIONS(534),
    1,
    anon_sym_recursive,
    STATE(233),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_ternary_expression,
    ACTIONS(536),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12240] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(538),
    1,
    anon_sym_COLON,
    ACTIONS(540),
    1,
    sym_identifier,
    STATE(234),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_with_statement_repeat1,
    STATE(304),
    1,
    sym_assignment_expression,
    ACTIONS(542),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12266] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(544),
    1,
    anon_sym_COMMA,
    ACTIONS(546),
    1,
    anon_sym_RPAREN,
    STATE(235),
    1,
    sym_comment,
    STATE(334),
    1,
    aux_sym_list_literal_repeat1,
    [12294] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(540),
    1,
    sym_identifier,
    ACTIONS(548),
    1,
    anon_sym_COLON,
    STATE(234),
    1,
    aux_sym_with_statement_repeat1,
    STATE(236),
    1,
    sym_comment,
    STATE(304),
    1,
    sym_assignment_expression,
    ACTIONS(550),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12320] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(552),
    1,
    anon_sym_COMMA,
    ACTIONS(554),
    1,
    anon_sym_RBRACK,
    STATE(237),
    1,
    sym_comment,
    STATE(292),
    1,
    aux_sym_list_literal_repeat1,
    [12348] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(556),
    2,
    anon_sym_COLON,
    anon_sym_recursive,
    ACTIONS(558),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12372] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(357),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(331),
    4,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    sym_identifier,
    [12392] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(508),
    1,
    anon_sym_COMMA,
    ACTIONS(560),
    1,
    anon_sym_RBRACE,
    STATE(240),
    1,
    sym_comment,
    STATE(298),
    1,
    aux_sym_dict_literal_repeat1,
    [12420] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(562),
    1,
    sym_dec_literal,
    STATE(144),
    1,
    sym_big_dec_literal,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(564),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    [12444] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(516),
    1,
    anon_sym_DOT,
    ACTIONS(518),
    1,
    anon_sym_LBRACK,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(504),
    2,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(506),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12468] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(568),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(566),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12488] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(572),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(570),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12508] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(574),
    1,
    sym_dec_literal,
    STATE(179),
    1,
    sym_big_dec_literal,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(576),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    [12532] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(520),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(522),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12556] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(512),
    1,
    anon_sym_COMMA,
    ACTIONS(578),
    1,
    anon_sym_RPAREN,
    STATE(247),
    1,
    sym_comment,
    STATE(335),
    1,
    aux_sym_list_literal_repeat1,
    [12584] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(508),
    1,
    anon_sym_COMMA,
    ACTIONS(580),
    1,
    anon_sym_RBRACE,
    STATE(248),
    1,
    sym_comment,
    STATE(308),
    1,
    aux_sym_dict_literal_repeat1,
    [12612] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(582),
    1,
    anon_sym_COMMA,
    STATE(249),
    2,
    sym_comment,
    aux_sym_list_literal_repeat1,
    ACTIONS(442),
    3,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_EQ,
    [12634] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(365),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(311),
    4,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    sym_identifier,
    [12654] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(585),
    1,
    sym_dec_literal,
    STATE(138),
    1,
    sym_big_dec_literal,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(587),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    [12678] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(589),
    1,
    anon_sym_COLON,
    STATE(252),
    1,
    sym_comment,
    STATE(352),
    1,
    sym_boolean_literal,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(591),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12702] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(593),
    1,
    anon_sym_COMMA,
    ACTIONS(595),
    1,
    anon_sym_RBRACK,
    STATE(253),
    1,
    sym_comment,
    STATE(320),
    1,
    aux_sym_list_literal_repeat1,
    [12730] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(597),
    1,
    anon_sym_COMMA,
    ACTIONS(599),
    1,
    anon_sym_RBRACK,
    STATE(254),
    1,
    sym_comment,
    STATE(291),
    1,
    aux_sym_list_literal_repeat1,
    [12758] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(601),
    1,
    anon_sym_COMMA,
    ACTIONS(603),
    1,
    anon_sym_RPAREN,
    STATE(255),
    1,
    sym_comment,
    STATE(318),
    1,
    aux_sym_list_literal_repeat1,
    [12786] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(605),
    1,
    anon_sym_COLON,
    ACTIONS(607),
    1,
    sym_identifier,
    STATE(304),
    1,
    sym_assignment_expression,
    ACTIONS(610),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(256),
    2,
    sym_comment,
    aux_sym_with_statement_repeat1,
    [12810] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(612),
    1,
    anon_sym_DQUOTE,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    STATE(257),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_string_literal_repeat1,
    ACTIONS(614),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [12833] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(612),
    1,
    anon_sym_SQUOTE,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    STATE(258),
    1,
    sym_comment,
    STATE(265),
    1,
    aux_sym_string_literal_repeat2,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [12856] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    anon_sym_COLON,
    ACTIONS(622),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_comment,
    STATE(260),
    1,
    sym_assignment_expression,
    ACTIONS(624),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12879] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(423),
    1,
    anon_sym_COMMA,
    ACTIONS(425),
    1,
    anon_sym_COLON,
    STATE(260),
    1,
    sym_comment,
    STATE(282),
    1,
    aux_sym_trans_statement_repeat1,
    ACTIONS(429),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12902] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(626),
    1,
    anon_sym_SQUOTE,
    STATE(258),
    1,
    aux_sym_string_literal_repeat2,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [12925] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(626),
    1,
    anon_sym_DQUOTE,
    STATE(257),
    1,
    aux_sym_string_literal_repeat1,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(614),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [12948] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(13),
    1,
    aux_sym_comment_token2,
    ACTIONS(502),
    1,
    sym__eof,
    ACTIONS(628),
    1,
    anon_sym_COLON,
    STATE(263),
    1,
    sym_comment,
    STATE(353),
    1,
    sym__END,
    STATE(375),
    1,
    sym__NEWLINE,
    [12973] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(630),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12996] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(632),
    1,
    anon_sym_SQUOTE,
    ACTIONS(634),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    STATE(265),
    2,
    sym_comment,
    aux_sym_string_literal_repeat2,
    [13017] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(637),
    1,
    anon_sym_DQUOTE,
    ACTIONS(639),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    STATE(266),
    2,
    sym_comment,
    aux_sym_string_literal_repeat1,
    [13038] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(642),
    1,
    sym_identifier,
    STATE(267),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_string_literal,
    [13063] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(644),
    1,
    anon_sym_SQUOTE,
    STATE(268),
    1,
    sym_comment,
    STATE(274),
    1,
    aux_sym_string_literal_repeat2,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13086] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(646),
    1,
    anon_sym_COLON,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(648),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13109] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(644),
    1,
    anon_sym_DQUOTE,
    STATE(270),
    1,
    sym_comment,
    STATE(284),
    1,
    aux_sym_string_literal_repeat1,
    ACTIONS(614),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13132] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(650),
    1,
    anon_sym_COLON,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(652),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13155] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(657),
    1,
    anon_sym_POUND_RBRACE,
    ACTIONS(654),
    2,
    anon_sym_POUND,
    aux_sym_comment_token3,
    STATE(272),
    2,
    sym_comment,
    aux_sym_comment_repeat1,
    [13176] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(659),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_string_literal,
    STATE(273),
    1,
    sym_comment,
    [13201] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(661),
    1,
    anon_sym_SQUOTE,
    STATE(265),
    1,
    aux_sym_string_literal_repeat2,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13224] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(663),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13247] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(665),
    1,
    anon_sym_DQUOTE,
    STATE(276),
    1,
    sym_comment,
    STATE(280),
    1,
    aux_sym_string_literal_repeat1,
    ACTIONS(614),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13270] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(665),
    1,
    anon_sym_SQUOTE,
    STATE(277),
    1,
    sym_comment,
    STATE(283),
    1,
    aux_sym_string_literal_repeat2,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13293] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(33),
    1,
    anon_sym_DQUOTE,
    ACTIONS(35),
    1,
    anon_sym_SQUOTE,
    ACTIONS(667),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_string_literal,
    STATE(278),
    1,
    sym_comment,
    [13318] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(669),
    1,
    anon_sym_COLON,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(671),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13341] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(673),
    1,
    anon_sym_DQUOTE,
    STATE(266),
    1,
    aux_sym_string_literal_repeat1,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(614),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13364] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(675),
    1,
    anon_sym_COLON,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13387] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(423),
    1,
    anon_sym_COMMA,
    ACTIONS(679),
    1,
    anon_sym_COLON,
    STATE(282),
    1,
    sym_comment,
    STATE(289),
    1,
    aux_sym_trans_statement_repeat1,
    ACTIONS(681),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13410] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(673),
    1,
    anon_sym_SQUOTE,
    STATE(265),
    1,
    aux_sym_string_literal_repeat2,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13433] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(661),
    1,
    anon_sym_DQUOTE,
    STATE(266),
    1,
    aux_sym_string_literal_repeat1,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(614),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13456] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(683),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13479] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(460),
    1,
    anon_sym_if,
    ACTIONS(685),
    1,
    anon_sym_COLON,
    STATE(286),
    1,
    sym_comment,
    STATE(350),
    1,
    sym_ternary_expression,
    ACTIONS(687),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13502] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(691),
    1,
    anon_sym_POUND_RBRACE,
    STATE(272),
    1,
    aux_sym_comment_repeat1,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(689),
    2,
    anon_sym_POUND,
    aux_sym_comment_token3,
    [13525] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(693),
    1,
    anon_sym_POUND_RBRACE,
    STATE(287),
    1,
    aux_sym_comment_repeat1,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(689),
    2,
    anon_sym_POUND,
    aux_sym_comment_token3,
    [13548] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(454),
    1,
    anon_sym_COLON,
    ACTIONS(695),
    1,
    anon_sym_COMMA,
    ACTIONS(456),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(289),
    2,
    sym_comment,
    aux_sym_trans_statement_repeat1,
    [13569] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(13),
    1,
    aux_sym_comment_token2,
    ACTIONS(502),
    1,
    sym__eof,
    STATE(290),
    1,
    sym_comment,
    STATE(351),
    1,
    sym__END,
    STATE(375),
    1,
    sym__NEWLINE,
    [13591] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(205),
    1,
    anon_sym_RBRACK,
    ACTIONS(698),
    1,
    anon_sym_COMMA,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(291),
    1,
    sym_comment,
    [13613] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(185),
    1,
    anon_sym_RBRACK,
    ACTIONS(700),
    1,
    anon_sym_COMMA,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(292),
    1,
    sym_comment,
    [13635] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(702),
    1,
    sym__raw_char,
    ACTIONS(704),
    1,
    sym_raw_end,
    STATE(293),
    1,
    sym_comment,
    STATE(330),
    1,
    aux_sym_raw_block_repeat1,
    [13657] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(706),
    1,
    anon_sym_COMMA,
    ACTIONS(708),
    1,
    anon_sym_in,
    STATE(294),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_in_expression_repeat1,
    [13679] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(710),
    1,
    anon_sym_RPAREN,
    STATE(295),
    1,
    sym_comment,
    [13701] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(498),
    1,
    anon_sym_COMMA,
    ACTIONS(712),
    1,
    anon_sym_EQ,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(296),
    1,
    sym_comment,
    [13723] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(714),
    1,
    anon_sym_COLON,
    STATE(297),
    1,
    sym_comment,
    [13745] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(508),
    1,
    anon_sym_COMMA,
    ACTIONS(716),
    1,
    anon_sym_RBRACE,
    STATE(298),
    1,
    sym_comment,
    STATE(305),
    1,
    aux_sym_dict_literal_repeat1,
    [13767] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(718),
    1,
    anon_sym_COLON,
    STATE(299),
    1,
    sym_comment,
    [13789] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(720),
    1,
    anon_sym_COMMA,
    ACTIONS(723),
    1,
    anon_sym_RPAREN,
    STATE(300),
    2,
    sym_comment,
    aux_sym_function_call_repeat1,
    [13809] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(725),
    1,
    sym__raw_char,
    ACTIONS(728),
    1,
    sym_raw_end,
    STATE(301),
    2,
    sym_comment,
    aux_sym_raw_block_repeat1,
    [13829] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(730),
    1,
    anon_sym_COLON,
    STATE(302),
    1,
    sym_comment,
    [13851] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(732),
    1,
    anon_sym_COMMA,
    ACTIONS(734),
    1,
    anon_sym_RPAREN,
    STATE(300),
    1,
    aux_sym_function_call_repeat1,
    STATE(303),
    1,
    sym_comment,
    [13873] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(736),
    2,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(738),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13891] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(740),
    1,
    anon_sym_COMMA,
    ACTIONS(743),
    1,
    anon_sym_RBRACE,
    STATE(305),
    2,
    sym_comment,
    aux_sym_dict_literal_repeat1,
    [13911] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(745),
    1,
    anon_sym_COLON,
    STATE(306),
    1,
    sym_comment,
    [13933] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(421),
    1,
    anon_sym_DOT,
    ACTIONS(747),
    1,
    anon_sym_EQ,
    STATE(307),
    1,
    sym_comment,
    STATE(317),
    1,
    aux_sym_assignment_expression_repeat1,
    [13955] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(508),
    1,
    anon_sym_COMMA,
    ACTIONS(749),
    1,
    anon_sym_RBRACE,
    STATE(305),
    1,
    aux_sym_dict_literal_repeat1,
    STATE(308),
    1,
    sym_comment,
    [13977] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(751),
    3,
    anon_sym_DQUOTE,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13995] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(732),
    1,
    anon_sym_COMMA,
    ACTIONS(753),
    1,
    anon_sym_RPAREN,
    STATE(300),
    1,
    aux_sym_function_call_repeat1,
    STATE(310),
    1,
    sym_comment,
    [14017] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(97),
    1,
    anon_sym_DQUOTE,
    ACTIONS(99),
    1,
    anon_sym_SQUOTE,
    STATE(311),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_string_literal,
    [14039] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(755),
    1,
    anon_sym_RBRACK,
    STATE(312),
    1,
    sym_comment,
    [14061] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(757),
    1,
    anon_sym_DOT,
    ACTIONS(760),
    1,
    anon_sym_EQ,
    STATE(313),
    2,
    sym_comment,
    aux_sym_assignment_expression_repeat1,
    [14081] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(762),
    3,
    anon_sym_SQUOTE,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [14099] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(454),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(456),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14117] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(732),
    1,
    anon_sym_COMMA,
    ACTIONS(764),
    1,
    anon_sym_RPAREN,
    STATE(310),
    1,
    aux_sym_function_call_repeat1,
    STATE(316),
    1,
    sym_comment,
    [14139] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(421),
    1,
    anon_sym_DOT,
    ACTIONS(766),
    1,
    anon_sym_EQ,
    STATE(313),
    1,
    aux_sym_assignment_expression_repeat1,
    STATE(317),
    1,
    sym_comment,
    [14161] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(191),
    1,
    anon_sym_RPAREN,
    ACTIONS(768),
    1,
    anon_sym_COMMA,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(318),
    1,
    sym_comment,
    [14183] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(770),
    1,
    anon_sym_LPAREN,
    ACTIONS(772),
    1,
    sym_identifier,
    STATE(319),
    1,
    sym_comment,
    STATE(358),
    1,
    sym_function_call,
    [14205] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(193),
    1,
    anon_sym_RBRACK,
    ACTIONS(774),
    1,
    anon_sym_COMMA,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(320),
    1,
    sym_comment,
    [14227] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(776),
    1,
    anon_sym_RPAREN,
    STATE(321),
    1,
    sym_comment,
    [14249] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(706),
    1,
    anon_sym_COMMA,
    ACTIONS(778),
    1,
    anon_sym_in,
    STATE(322),
    1,
    sym_comment,
    STATE(327),
    1,
    aux_sym_in_expression_repeat1,
    [14271] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(780),
    1,
    anon_sym_RBRACK,
    STATE(323),
    1,
    sym_comment,
    [14293] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(732),
    1,
    anon_sym_COMMA,
    ACTIONS(782),
    1,
    anon_sym_RPAREN,
    STATE(324),
    1,
    sym_comment,
    STATE(337),
    1,
    aux_sym_function_call_repeat1,
    [14315] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(784),
    1,
    anon_sym_RBRACK,
    STATE(325),
    1,
    sym_comment,
    [14337] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(786),
    1,
    anon_sym_RPAREN,
    STATE(326),
    1,
    sym_comment,
    [14359] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(434),
    1,
    anon_sym_in,
    ACTIONS(788),
    1,
    anon_sym_COMMA,
    STATE(327),
    2,
    sym_comment,
    aux_sym_in_expression_repeat1,
    [14379] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(438),
    1,
    anon_sym_DOT,
    ACTIONS(440),
    1,
    anon_sym_LBRACK,
    ACTIONS(791),
    1,
    anon_sym_RBRACK,
    STATE(328),
    1,
    sym_comment,
    [14401] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    STATE(329),
    1,
    sym_comment,
    ACTIONS(793),
    3,
    anon_sym_POUND,
    aux_sym_comment_token3,
    anon_sym_POUND_RBRACE,
    [14419] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(702),
    1,
    sym__raw_char,
    ACTIONS(795),
    1,
    sym_raw_end,
    STATE(301),
    1,
    aux_sym_raw_block_repeat1,
    STATE(330),
    1,
    sym_comment,
    [14441] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(421),
    1,
    anon_sym_DOT,
    ACTIONS(797),
    1,
    anon_sym_EQ,
    STATE(313),
    1,
    aux_sym_assignment_expression_repeat1,
    STATE(331),
    1,
    sym_comment,
    [14463] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(799),
    1,
    anon_sym_COLON,
    ACTIONS(801),
    1,
    sym_identifier,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(803),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14483] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(732),
    1,
    anon_sym_COMMA,
    ACTIONS(805),
    1,
    anon_sym_RPAREN,
    STATE(303),
    1,
    aux_sym_function_call_repeat1,
    STATE(333),
    1,
    sym_comment,
    [14505] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(195),
    1,
    anon_sym_RPAREN,
    ACTIONS(807),
    1,
    anon_sym_COMMA,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(334),
    1,
    sym_comment,
    [14527] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(179),
    1,
    anon_sym_RPAREN,
    ACTIONS(809),
    1,
    anon_sym_COMMA,
    STATE(249),
    1,
    aux_sym_list_literal_repeat1,
    STATE(335),
    1,
    sym_comment,
    [14549] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(811),
    1,
    anon_sym_COLON,
    ACTIONS(813),
    1,
    anon_sym_recursive,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14569] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(732),
    1,
    anon_sym_COMMA,
    ACTIONS(817),
    1,
    anon_sym_RPAREN,
    STATE(300),
    1,
    aux_sym_function_call_repeat1,
    STATE(337),
    1,
    sym_comment,
    [14591] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(508),
    1,
    anon_sym_COMMA,
    ACTIONS(819),
    1,
    anon_sym_RBRACE,
    STATE(305),
    1,
    aux_sym_dict_literal_repeat1,
    STATE(338),
    1,
    sym_comment,
    [14613] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(823),
    1,
    anon_sym_POUND,
    STATE(339),
    1,
    sym_comment,
    ACTIONS(821),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14630] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(340),
    1,
    sym_comment,
    ACTIONS(760),
    2,
    anon_sym_DOT,
    anon_sym_EQ,
    [14647] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(825),
    1,
    anon_sym_COLON,
    STATE(341),
    1,
    sym_comment,
    ACTIONS(827),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14664] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(342),
    1,
    sym_comment,
    ACTIONS(829),
    2,
    sym__raw_char,
    sym_raw_end,
    [14681] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(831),
    1,
    sym_identifier,
    STATE(315),
    1,
    sym_assignment_expression,
    STATE(343),
    1,
    sym_comment,
    [14700] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(835),
    1,
    anon_sym_POUND,
    STATE(344),
    1,
    sym_comment,
    ACTIONS(833),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14717] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(837),
    1,
    sym_dec_literal,
    ACTIONS(839),
    1,
    anon_sym__,
    STATE(345),
    1,
    sym_comment,
    [14736] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(486),
    1,
    anon_sym_COLON,
    STATE(346),
    1,
    sym_comment,
    ACTIONS(488),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14753] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(841),
    1,
    anon_sym_COLON,
    STATE(347),
    1,
    sym_comment,
    ACTIONS(843),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14770] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(772),
    1,
    sym_identifier,
    STATE(348),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_function_call,
    [14789] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(127),
    1,
    anon_sym_LBRACK,
    STATE(171),
    1,
    sym_list_literal,
    STATE(349),
    1,
    sym_comment,
    [14808] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(845),
    1,
    anon_sym_COLON,
    STATE(350),
    1,
    sym_comment,
    ACTIONS(847),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14825] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(851),
    1,
    anon_sym_POUND,
    STATE(351),
    1,
    sym_comment,
    ACTIONS(849),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14842] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(853),
    1,
    anon_sym_COLON,
    STATE(352),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14859] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(859),
    1,
    anon_sym_POUND,
    STATE(353),
    1,
    sym_comment,
    ACTIONS(857),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14876] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(861),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_in_expression,
    STATE(354),
    1,
    sym_comment,
    [14895] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(811),
    1,
    anon_sym_COLON,
    STATE(355),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14912] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(356),
    1,
    sym_comment,
    ACTIONS(434),
    2,
    anon_sym_COMMA,
    anon_sym_in,
    [14929] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(772),
    1,
    sym_identifier,
    STATE(357),
    1,
    sym_comment,
    STATE(374),
    1,
    sym_function_call,
    [14948] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(863),
    1,
    anon_sym_COLON,
    STATE(358),
    1,
    sym_comment,
    ACTIONS(865),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14965] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(27),
    1,
    anon_sym_LBRACK,
    STATE(104),
    1,
    sym_list_literal,
    STATE(359),
    1,
    sym_comment,
    [14984] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(91),
    1,
    anon_sym_LBRACK,
    STATE(109),
    1,
    sym_list_literal,
    STATE(360),
    1,
    sym_comment,
    [15003] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    STATE(361),
    1,
    sym_comment,
    ACTIONS(387),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15020] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(867),
    1,
    anon_sym_COLON,
    STATE(362),
    1,
    sym_comment,
    ACTIONS(869),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15037] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(393),
    1,
    anon_sym_COLON,
    STATE(363),
    1,
    sym_comment,
    ACTIONS(395),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15054] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(871),
    1,
    anon_sym_COLON,
    STATE(364),
    1,
    sym_comment,
    ACTIONS(873),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15071] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(875),
    1,
    sym_dec_literal,
    ACTIONS(877),
    1,
    anon_sym__,
    STATE(365),
    1,
    sym_comment,
    [15090] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(879),
    1,
    anon_sym_COLON,
    STATE(366),
    1,
    sym_comment,
    ACTIONS(881),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15107] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(883),
    1,
    sym_dec_literal,
    ACTIONS(885),
    1,
    anon_sym__,
    STATE(367),
    1,
    sym_comment,
    [15126] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(887),
    1,
    anon_sym_COLON,
    STATE(368),
    1,
    sym_comment,
    ACTIONS(889),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15143] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(893),
    1,
    anon_sym_POUND,
    STATE(369),
    1,
    sym_comment,
    ACTIONS(891),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [15160] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(897),
    1,
    anon_sym_POUND,
    STATE(370),
    1,
    sym_comment,
    ACTIONS(895),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [15177] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(899),
    1,
    anon_sym_COLON,
    STATE(371),
    1,
    sym_comment,
    ACTIONS(901),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15194] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(372),
    1,
    sym_comment,
    ACTIONS(723),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15211] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(903),
    1,
    anon_sym_COLON,
    STATE(373),
    1,
    sym_comment,
    ACTIONS(905),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15228] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(907),
    1,
    anon_sym_COLON,
    STATE(374),
    1,
    sym_comment,
    ACTIONS(909),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15245] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(913),
    1,
    anon_sym_POUND,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(911),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [15262] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(490),
    1,
    anon_sym_COLON,
    STATE(376),
    1,
    sym_comment,
    ACTIONS(492),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15279] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(277),
    1,
    anon_sym_LPAREN,
    STATE(377),
    1,
    sym_comment,
    [15295] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(915),
    1,
    sym_dec_literal,
    STATE(378),
    1,
    sym_comment,
    [15311] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(917),
    1,
    anon_sym_context,
    STATE(379),
    1,
    sym_comment,
    [15327] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(919),
    1,
    anon_sym_RPAREN,
    STATE(380),
    1,
    sym_comment,
    [15343] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(921),
    1,
    sym_dec_literal,
    STATE(381),
    1,
    sym_comment,
    [15359] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(599),
    1,
    anon_sym_RBRACK,
    STATE(382),
    1,
    sym_comment,
    [15375] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(923),
    1,
    sym_identifier,
    STATE(383),
    1,
    sym_comment,
    [15391] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(925),
    1,
    anon_sym_LPAREN,
    STATE(384),
    1,
    sym_comment,
    [15407] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(927),
    1,
    sym_dec_literal,
    STATE(385),
    1,
    sym_comment,
    [15423] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(929),
    1,
    anon_sym_missing,
    STATE(386),
    1,
    sym_comment,
    [15439] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(931),
    1,
    sym_identifier,
    STATE(387),
    1,
    sym_comment,
    [15455] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(933),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [15471] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(935),
    1,
    sym_identifier,
    STATE(389),
    1,
    sym_comment,
    [15487] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(937),
    1,
    sym_dec_literal,
    STATE(390),
    1,
    sym_comment,
    [15503] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(939),
    1,
    anon_sym_import,
    STATE(391),
    1,
    sym_comment,
    [15519] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(941),
    1,
    anon_sym_import,
    STATE(392),
    1,
    sym_comment,
    [15535] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(943),
    1,
    anon_sym_RPAREN,
    STATE(393),
    1,
    sym_comment,
    [15551] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(945),
    1,
    anon_sym_LPAREN,
    STATE(394),
    1,
    sym_comment,
    [15567] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(947),
    1,
    anon_sym_RPAREN,
    STATE(395),
    1,
    sym_comment,
    [15583] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(595),
    1,
    anon_sym_RBRACK,
    STATE(396),
    1,
    sym_comment,
    [15599] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(949),
    1,
    sym_dec_literal,
    STATE(397),
    1,
    sym_comment,
    [15615] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(951),
    1,
    sym_identifier,
    STATE(398),
    1,
    sym_comment,
    [15631] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(953),
    1,
    sym_identifier,
    STATE(399),
    1,
    sym_comment,
    [15647] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(578),
    1,
    anon_sym_RPAREN,
    STATE(400),
    1,
    sym_comment,
    [15663] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(955),
    1,
    anon_sym_LPAREN,
    STATE(401),
    1,
    sym_comment,
    [15679] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(554),
    1,
    anon_sym_RBRACK,
    STATE(402),
    1,
    sym_comment,
    [15695] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(957),
    1,
    ts_builtin_sym_end,
    STATE(403),
    1,
    sym_comment,
    [15711] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(959),
    1,
    sym_dec_literal,
    STATE(404),
    1,
    sym_comment,
    [15727] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    aux_sym_comment_token2,
    ACTIONS(961),
    1,
    aux_sym_comment_token1,
    STATE(405),
    1,
    sym_comment,
    [15743] = 4,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(963),
    1,
    aux_sym_comment_token2,
    STATE(406),
    1,
    sym_comment,
    [15756] = 4,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(965),
    1,
    aux_sym_comment_token2,
    STATE(407),
    1,
    sym_comment,
    [15769] = 1,
    ACTIONS(967),
    1,
    ts_builtin_sym_end,
    [15773] = 1,
    ACTIONS(969),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(6)] = 0,
    [SMALL_STATE(7)] = 97,
    [SMALL_STATE(8)] = 194,
    [SMALL_STATE(9)] = 291,
    [SMALL_STATE(10)] = 388,
    [SMALL_STATE(11)] = 485,
    [SMALL_STATE(12)] = 582,
    [SMALL_STATE(13)] = 679,
    [SMALL_STATE(14)] = 776,
    [SMALL_STATE(15)] = 873,
    [SMALL_STATE(16)] = 970,
    [SMALL_STATE(17)] = 1064,
    [SMALL_STATE(18)] = 1158,
    [SMALL_STATE(19)] = 1252,
    [SMALL_STATE(20)] = 1346,
    [SMALL_STATE(21)] = 1440,
    [SMALL_STATE(22)] = 1534,
    [SMALL_STATE(23)] = 1628,
    [SMALL_STATE(24)] = 1722,
    [SMALL_STATE(25)] = 1816,
    [SMALL_STATE(26)] = 1910,
    [SMALL_STATE(27)] = 2004,
    [SMALL_STATE(28)] = 2098,
    [SMALL_STATE(29)] = 2192,
    [SMALL_STATE(30)] = 2286,
    [SMALL_STATE(31)] = 2380,
    [SMALL_STATE(32)] = 2474,
    [SMALL_STATE(33)] = 2565,
    [SMALL_STATE(34)] = 2656,
    [SMALL_STATE(35)] = 2747,
    [SMALL_STATE(36)] = 2838,
    [SMALL_STATE(37)] = 2929,
    [SMALL_STATE(38)] = 3020,
    [SMALL_STATE(39)] = 3111,
    [SMALL_STATE(40)] = 3202,
    [SMALL_STATE(41)] = 3293,
    [SMALL_STATE(42)] = 3384,
    [SMALL_STATE(43)] = 3475,
    [SMALL_STATE(44)] = 3566,
    [SMALL_STATE(45)] = 3657,
    [SMALL_STATE(46)] = 3748,
    [SMALL_STATE(47)] = 3839,
    [SMALL_STATE(48)] = 3930,
    [SMALL_STATE(49)] = 4021,
    [SMALL_STATE(50)] = 4112,
    [SMALL_STATE(51)] = 4203,
    [SMALL_STATE(52)] = 4294,
    [SMALL_STATE(53)] = 4385,
    [SMALL_STATE(54)] = 4476,
    [SMALL_STATE(55)] = 4567,
    [SMALL_STATE(56)] = 4658,
    [SMALL_STATE(57)] = 4749,
    [SMALL_STATE(58)] = 4840,
    [SMALL_STATE(59)] = 4931,
    [SMALL_STATE(60)] = 5022,
    [SMALL_STATE(61)] = 5113,
    [SMALL_STATE(62)] = 5204,
    [SMALL_STATE(63)] = 5295,
    [SMALL_STATE(64)] = 5386,
    [SMALL_STATE(65)] = 5477,
    [SMALL_STATE(66)] = 5568,
    [SMALL_STATE(67)] = 5651,
    [SMALL_STATE(68)] = 5736,
    [SMALL_STATE(69)] = 5819,
    [SMALL_STATE(70)] = 5904,
    [SMALL_STATE(71)] = 5989,
    [SMALL_STATE(72)] = 6072,
    [SMALL_STATE(73)] = 6117,
    [SMALL_STATE(74)] = 6162,
    [SMALL_STATE(75)] = 6208,
    [SMALL_STATE(76)] = 6252,
    [SMALL_STATE(77)] = 6296,
    [SMALL_STATE(78)] = 6340,
    [SMALL_STATE(79)] = 6384,
    [SMALL_STATE(80)] = 6432,
    [SMALL_STATE(81)] = 6476,
    [SMALL_STATE(82)] = 6524,
    [SMALL_STATE(83)] = 6568,
    [SMALL_STATE(84)] = 6614,
    [SMALL_STATE(85)] = 6658,
    [SMALL_STATE(86)] = 6702,
    [SMALL_STATE(87)] = 6746,
    [SMALL_STATE(88)] = 6794,
    [SMALL_STATE(89)] = 6838,
    [SMALL_STATE(90)] = 6880,
    [SMALL_STATE(91)] = 6928,
    [SMALL_STATE(92)] = 6970,
    [SMALL_STATE(93)] = 7014,
    [SMALL_STATE(94)] = 7058,
    [SMALL_STATE(95)] = 7099,
    [SMALL_STATE(96)] = 7140,
    [SMALL_STATE(97)] = 7181,
    [SMALL_STATE(98)] = 7222,
    [SMALL_STATE(99)] = 7263,
    [SMALL_STATE(100)] = 7306,
    [SMALL_STATE(101)] = 7351,
    [SMALL_STATE(102)] = 7392,
    [SMALL_STATE(103)] = 7433,
    [SMALL_STATE(104)] = 7474,
    [SMALL_STATE(105)] = 7515,
    [SMALL_STATE(106)] = 7556,
    [SMALL_STATE(107)] = 7597,
    [SMALL_STATE(108)] = 7638,
    [SMALL_STATE(109)] = 7679,
    [SMALL_STATE(110)] = 7720,
    [SMALL_STATE(111)] = 7761,
    [SMALL_STATE(112)] = 7802,
    [SMALL_STATE(113)] = 7843,
    [SMALL_STATE(114)] = 7884,
    [SMALL_STATE(115)] = 7925,
    [SMALL_STATE(116)] = 7966,
    [SMALL_STATE(117)] = 8007,
    [SMALL_STATE(118)] = 8048,
    [SMALL_STATE(119)] = 8089,
    [SMALL_STATE(120)] = 8130,
    [SMALL_STATE(121)] = 8171,
    [SMALL_STATE(122)] = 8212,
    [SMALL_STATE(123)] = 8253,
    [SMALL_STATE(124)] = 8294,
    [SMALL_STATE(125)] = 8335,
    [SMALL_STATE(126)] = 8376,
    [SMALL_STATE(127)] = 8417,
    [SMALL_STATE(128)] = 8458,
    [SMALL_STATE(129)] = 8499,
    [SMALL_STATE(130)] = 8540,
    [SMALL_STATE(131)] = 8581,
    [SMALL_STATE(132)] = 8622,
    [SMALL_STATE(133)] = 8663,
    [SMALL_STATE(134)] = 8704,
    [SMALL_STATE(135)] = 8745,
    [SMALL_STATE(136)] = 8786,
    [SMALL_STATE(137)] = 8827,
    [SMALL_STATE(138)] = 8868,
    [SMALL_STATE(139)] = 8909,
    [SMALL_STATE(140)] = 8950,
    [SMALL_STATE(141)] = 8991,
    [SMALL_STATE(142)] = 9032,
    [SMALL_STATE(143)] = 9073,
    [SMALL_STATE(144)] = 9114,
    [SMALL_STATE(145)] = 9155,
    [SMALL_STATE(146)] = 9196,
    [SMALL_STATE(147)] = 9237,
    [SMALL_STATE(148)] = 9278,
    [SMALL_STATE(149)] = 9319,
    [SMALL_STATE(150)] = 9360,
    [SMALL_STATE(151)] = 9401,
    [SMALL_STATE(152)] = 9442,
    [SMALL_STATE(153)] = 9483,
    [SMALL_STATE(154)] = 9524,
    [SMALL_STATE(155)] = 9565,
    [SMALL_STATE(156)] = 9606,
    [SMALL_STATE(157)] = 9649,
    [SMALL_STATE(158)] = 9690,
    [SMALL_STATE(159)] = 9735,
    [SMALL_STATE(160)] = 9776,
    [SMALL_STATE(161)] = 9814,
    [SMALL_STATE(162)] = 9852,
    [SMALL_STATE(163)] = 9890,
    [SMALL_STATE(164)] = 9928,
    [SMALL_STATE(165)] = 9966,
    [SMALL_STATE(166)] = 10004,
    [SMALL_STATE(167)] = 10042,
    [SMALL_STATE(168)] = 10080,
    [SMALL_STATE(169)] = 10118,
    [SMALL_STATE(170)] = 10156,
    [SMALL_STATE(171)] = 10194,
    [SMALL_STATE(172)] = 10232,
    [SMALL_STATE(173)] = 10270,
    [SMALL_STATE(174)] = 10308,
    [SMALL_STATE(175)] = 10346,
    [SMALL_STATE(176)] = 10384,
    [SMALL_STATE(177)] = 10422,
    [SMALL_STATE(178)] = 10460,
    [SMALL_STATE(179)] = 10498,
    [SMALL_STATE(180)] = 10536,
    [SMALL_STATE(181)] = 10574,
    [SMALL_STATE(182)] = 10612,
    [SMALL_STATE(183)] = 10650,
    [SMALL_STATE(184)] = 10688,
    [SMALL_STATE(185)] = 10726,
    [SMALL_STATE(186)] = 10764,
    [SMALL_STATE(187)] = 10802,
    [SMALL_STATE(188)] = 10840,
    [SMALL_STATE(189)] = 10878,
    [SMALL_STATE(190)] = 10916,
    [SMALL_STATE(191)] = 10954,
    [SMALL_STATE(192)] = 10992,
    [SMALL_STATE(193)] = 11030,
    [SMALL_STATE(194)] = 11068,
    [SMALL_STATE(195)] = 11106,
    [SMALL_STATE(196)] = 11144,
    [SMALL_STATE(197)] = 11178,
    [SMALL_STATE(198)] = 11212,
    [SMALL_STATE(199)] = 11251,
    [SMALL_STATE(200)] = 11290,
    [SMALL_STATE(201)] = 11329,
    [SMALL_STATE(202)] = 11368,
    [SMALL_STATE(203)] = 11402,
    [SMALL_STATE(204)] = 11436,
    [SMALL_STATE(205)] = 11468,
    [SMALL_STATE(206)] = 11501,
    [SMALL_STATE(207)] = 11534,
    [SMALL_STATE(208)] = 11567,
    [SMALL_STATE(209)] = 11599,
    [SMALL_STATE(210)] = 11623,
    [SMALL_STATE(211)] = 11648,
    [SMALL_STATE(212)] = 11675,
    [SMALL_STATE(213)] = 11696,
    [SMALL_STATE(214)] = 11723,
    [SMALL_STATE(215)] = 11748,
    [SMALL_STATE(216)] = 11775,
    [SMALL_STATE(217)] = 11802,
    [SMALL_STATE(218)] = 11831,
    [SMALL_STATE(219)] = 11856,
    [SMALL_STATE(220)] = 11883,
    [SMALL_STATE(221)] = 11908,
    [SMALL_STATE(222)] = 11933,
    [SMALL_STATE(223)] = 11960,
    [SMALL_STATE(224)] = 11989,
    [SMALL_STATE(225)] = 12014,
    [SMALL_STATE(226)] = 12042,
    [SMALL_STATE(227)] = 12070,
    [SMALL_STATE(228)] = 12094,
    [SMALL_STATE(229)] = 12122,
    [SMALL_STATE(230)] = 12150,
    [SMALL_STATE(231)] = 12174,
    [SMALL_STATE(232)] = 12194,
    [SMALL_STATE(233)] = 12214,
    [SMALL_STATE(234)] = 12240,
    [SMALL_STATE(235)] = 12266,
    [SMALL_STATE(236)] = 12294,
    [SMALL_STATE(237)] = 12320,
    [SMALL_STATE(238)] = 12348,
    [SMALL_STATE(239)] = 12372,
    [SMALL_STATE(240)] = 12392,
    [SMALL_STATE(241)] = 12420,
    [SMALL_STATE(242)] = 12444,
    [SMALL_STATE(243)] = 12468,
    [SMALL_STATE(244)] = 12488,
    [SMALL_STATE(245)] = 12508,
    [SMALL_STATE(246)] = 12532,
    [SMALL_STATE(247)] = 12556,
    [SMALL_STATE(248)] = 12584,
    [SMALL_STATE(249)] = 12612,
    [SMALL_STATE(250)] = 12634,
    [SMALL_STATE(251)] = 12654,
    [SMALL_STATE(252)] = 12678,
    [SMALL_STATE(253)] = 12702,
    [SMALL_STATE(254)] = 12730,
    [SMALL_STATE(255)] = 12758,
    [SMALL_STATE(256)] = 12786,
    [SMALL_STATE(257)] = 12810,
    [SMALL_STATE(258)] = 12833,
    [SMALL_STATE(259)] = 12856,
    [SMALL_STATE(260)] = 12879,
    [SMALL_STATE(261)] = 12902,
    [SMALL_STATE(262)] = 12925,
    [SMALL_STATE(263)] = 12948,
    [SMALL_STATE(264)] = 12973,
    [SMALL_STATE(265)] = 12996,
    [SMALL_STATE(266)] = 13017,
    [SMALL_STATE(267)] = 13038,
    [SMALL_STATE(268)] = 13063,
    [SMALL_STATE(269)] = 13086,
    [SMALL_STATE(270)] = 13109,
    [SMALL_STATE(271)] = 13132,
    [SMALL_STATE(272)] = 13155,
    [SMALL_STATE(273)] = 13176,
    [SMALL_STATE(274)] = 13201,
    [SMALL_STATE(275)] = 13224,
    [SMALL_STATE(276)] = 13247,
    [SMALL_STATE(277)] = 13270,
    [SMALL_STATE(278)] = 13293,
    [SMALL_STATE(279)] = 13318,
    [SMALL_STATE(280)] = 13341,
    [SMALL_STATE(281)] = 13364,
    [SMALL_STATE(282)] = 13387,
    [SMALL_STATE(283)] = 13410,
    [SMALL_STATE(284)] = 13433,
    [SMALL_STATE(285)] = 13456,
    [SMALL_STATE(286)] = 13479,
    [SMALL_STATE(287)] = 13502,
    [SMALL_STATE(288)] = 13525,
    [SMALL_STATE(289)] = 13548,
    [SMALL_STATE(290)] = 13569,
    [SMALL_STATE(291)] = 13591,
    [SMALL_STATE(292)] = 13613,
    [SMALL_STATE(293)] = 13635,
    [SMALL_STATE(294)] = 13657,
    [SMALL_STATE(295)] = 13679,
    [SMALL_STATE(296)] = 13701,
    [SMALL_STATE(297)] = 13723,
    [SMALL_STATE(298)] = 13745,
    [SMALL_STATE(299)] = 13767,
    [SMALL_STATE(300)] = 13789,
    [SMALL_STATE(301)] = 13809,
    [SMALL_STATE(302)] = 13829,
    [SMALL_STATE(303)] = 13851,
    [SMALL_STATE(304)] = 13873,
    [SMALL_STATE(305)] = 13891,
    [SMALL_STATE(306)] = 13911,
    [SMALL_STATE(307)] = 13933,
    [SMALL_STATE(308)] = 13955,
    [SMALL_STATE(309)] = 13977,
    [SMALL_STATE(310)] = 13995,
    [SMALL_STATE(311)] = 14017,
    [SMALL_STATE(312)] = 14039,
    [SMALL_STATE(313)] = 14061,
    [SMALL_STATE(314)] = 14081,
    [SMALL_STATE(315)] = 14099,
    [SMALL_STATE(316)] = 14117,
    [SMALL_STATE(317)] = 14139,
    [SMALL_STATE(318)] = 14161,
    [SMALL_STATE(319)] = 14183,
    [SMALL_STATE(320)] = 14205,
    [SMALL_STATE(321)] = 14227,
    [SMALL_STATE(322)] = 14249,
    [SMALL_STATE(323)] = 14271,
    [SMALL_STATE(324)] = 14293,
    [SMALL_STATE(325)] = 14315,
    [SMALL_STATE(326)] = 14337,
    [SMALL_STATE(327)] = 14359,
    [SMALL_STATE(328)] = 14379,
    [SMALL_STATE(329)] = 14401,
    [SMALL_STATE(330)] = 14419,
    [SMALL_STATE(331)] = 14441,
    [SMALL_STATE(332)] = 14463,
    [SMALL_STATE(333)] = 14483,
    [SMALL_STATE(334)] = 14505,
    [SMALL_STATE(335)] = 14527,
    [SMALL_STATE(336)] = 14549,
    [SMALL_STATE(337)] = 14569,
    [SMALL_STATE(338)] = 14591,
    [SMALL_STATE(339)] = 14613,
    [SMALL_STATE(340)] = 14630,
    [SMALL_STATE(341)] = 14647,
    [SMALL_STATE(342)] = 14664,
    [SMALL_STATE(343)] = 14681,
    [SMALL_STATE(344)] = 14700,
    [SMALL_STATE(345)] = 14717,
    [SMALL_STATE(346)] = 14736,
    [SMALL_STATE(347)] = 14753,
    [SMALL_STATE(348)] = 14770,
    [SMALL_STATE(349)] = 14789,
    [SMALL_STATE(350)] = 14808,
    [SMALL_STATE(351)] = 14825,
    [SMALL_STATE(352)] = 14842,
    [SMALL_STATE(353)] = 14859,
    [SMALL_STATE(354)] = 14876,
    [SMALL_STATE(355)] = 14895,
    [SMALL_STATE(356)] = 14912,
    [SMALL_STATE(357)] = 14929,
    [SMALL_STATE(358)] = 14948,
    [SMALL_STATE(359)] = 14965,
    [SMALL_STATE(360)] = 14984,
    [SMALL_STATE(361)] = 15003,
    [SMALL_STATE(362)] = 15020,
    [SMALL_STATE(363)] = 15037,
    [SMALL_STATE(364)] = 15054,
    [SMALL_STATE(365)] = 15071,
    [SMALL_STATE(366)] = 15090,
    [SMALL_STATE(367)] = 15107,
    [SMALL_STATE(368)] = 15126,
    [SMALL_STATE(369)] = 15143,
    [SMALL_STATE(370)] = 15160,
    [SMALL_STATE(371)] = 15177,
    [SMALL_STATE(372)] = 15194,
    [SMALL_STATE(373)] = 15211,
    [SMALL_STATE(374)] = 15228,
    [SMALL_STATE(375)] = 15245,
    [SMALL_STATE(376)] = 15262,
    [SMALL_STATE(377)] = 15279,
    [SMALL_STATE(378)] = 15295,
    [SMALL_STATE(379)] = 15311,
    [SMALL_STATE(380)] = 15327,
    [SMALL_STATE(381)] = 15343,
    [SMALL_STATE(382)] = 15359,
    [SMALL_STATE(383)] = 15375,
    [SMALL_STATE(384)] = 15391,
    [SMALL_STATE(385)] = 15407,
    [SMALL_STATE(386)] = 15423,
    [SMALL_STATE(387)] = 15439,
    [SMALL_STATE(388)] = 15455,
    [SMALL_STATE(389)] = 15471,
    [SMALL_STATE(390)] = 15487,
    [SMALL_STATE(391)] = 15503,
    [SMALL_STATE(392)] = 15519,
    [SMALL_STATE(393)] = 15535,
    [SMALL_STATE(394)] = 15551,
    [SMALL_STATE(395)] = 15567,
    [SMALL_STATE(396)] = 15583,
    [SMALL_STATE(397)] = 15599,
    [SMALL_STATE(398)] = 15615,
    [SMALL_STATE(399)] = 15631,
    [SMALL_STATE(400)] = 15647,
    [SMALL_STATE(401)] = 15663,
    [SMALL_STATE(402)] = 15679,
    [SMALL_STATE(403)] = 15695,
    [SMALL_STATE(404)] = 15711,
    [SMALL_STATE(405)] = 15727,
    [SMALL_STATE(406)] = 15743,
    [SMALL_STATE(407)] = 15756,
    [SMALL_STATE(408)] = 15769,
    [SMALL_STATE(409)] = 15773,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(405),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT_EXTRA(),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(288),
    [9] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_source, 0, 0, 0),
    [11] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(2),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [15] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [17] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(384),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(270),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(268),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(197),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(252),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(259),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(332),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(341),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(398),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(357),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(267),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(319),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(236),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(278),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(311),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(354),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(406),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(251),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(401),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(9),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(262),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(360),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(359),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(163),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(245),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(394),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(164),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(276),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(277),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(183),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [141] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(349),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(400),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [149] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(396),
    [151] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [153] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [155] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [157] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(395),
    [159] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [161] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [163] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(382),
    [165] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [167] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(184),
    [169] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(402),
    [171] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(186),
    [173] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(380),
    [175] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [177] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [179] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [181] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [183] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(194),
    [185] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(178),
    [187] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [189] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [191] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [193] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [195] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [197] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [199] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [201] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(170),
    [203] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [205] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [207] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [211] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 2, 0, 0),
    [213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 2, 0, 0),
    [215] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_number_literal, 2, 0, 0),
    [217] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(345),
    [219] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 4, 0, 0),
    [221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 4, 0, 0),
    [223] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 4, 0, 0),
    [225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 4, 0, 0),
    [227] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 2, 0, 0),
    [229] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 2, 0, 0),
    [231] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 5, 0, 0),
    [233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 5, 0, 0),
    [235] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_number_literal, 1, 0, 0),
    [237] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(365),
    [239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(404),
    [241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_number_literal, 1, 0, 0),
    [243] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 3, 0, 0),
    [245] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 3, 0, 0),
    [247] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(397),
    [249] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 3, 0, 0),
    [251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 3, 0, 0),
    [253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_number_literal, 2, 0, 0),
    [255] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 5, 0, 0),
    [257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 5, 0, 0),
    [259] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 2, 0, 0),
    [261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 2, 0, 0),
    [263] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_primary_expression, 1, 0, 0),
    [265] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [267] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [269] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_expression, 1, 0, 0),
    [271] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [273] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
    [275] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_expression, 1, 0, 0),
    [277] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [279] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primary_expression, 1, 0, 0),
    [281] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_call, 4, 0, 0),
    [283] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_call, 4, 0, 0),
    [285] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [289] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_null_literal, 1, 0, 0),
    [291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_null_literal, 1, 0, 0),
    [293] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(367),
    [295] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(390),
    [297] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_dict_literal, 6, 0, 0),
    [299] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_call, 5, 0, 0),
    [301] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_dict_literal, 5, 0, 0),
    [303] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_builtin_test, 2, 0, 0),
    [305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_builtin_test, 2, 0, 0),
    [307] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_binary_expression, 3, 0, 0),
    [309] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_binary_expression, 3, 0, 0),
    [311] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_expression, 4, 0, 0),
    [313] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_inline_trans, 4, 0, 0),
    [315] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expression, 2, 0, 0),
    [317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expression, 2, 0, 0),
    [319] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_big_dec_literal, 4, 0, 0),
    [321] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_big_dec_literal, 3, 0, 0),
    [323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_big_dec_literal, 3, 0, 0),
    [325] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_builtin_test, 1, 0, 0),
    [327] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_float_literal, 3, 0, 0),
    [329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_float_literal, 3, 0, 0),
    [331] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_expression, 3, 0, 0),
    [333] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_call, 3, 0, 0),
    [335] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dict_literal, 5, 0, 0),
    [341] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_binary_expression, 1, 0, 0),
    [343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_binary_expression, 1, 0, 0),
    [345] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expression, 1, 0, 0),
    [347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expression, 1, 0, 0),
    [349] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_dict_literal, 2, 0, 0),
    [351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dict_literal, 6, 0, 0),
    [353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_call, 5, 0, 0),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_big_dec_literal, 4, 0, 0),
    [357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_expression, 3, 0, 0),
    [359] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inline_trans, 4, 0, 0),
    [361] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_builtin_test, 1, 0, 0),
    [363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dict_literal, 2, 0, 0),
    [365] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_expression, 4, 0, 0),
    [367] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_call, 3, 0, 0),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(5),
    [375] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_binary_operator, 1, 0, 0),
    [377] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(389),
    [381] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 3, 0, 0),
    [383] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(379),
    [385] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(387),
    [387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_statement, 3, 0, 0),
    [389] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 2, 0, 0),
    [391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_statement, 2, 0, 0),
    [393] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 4, 0, 0),
    [395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_statement, 4, 0, 0),
    [397] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_include_statement, 3, 0, 0),
    [399] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(386),
    [401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_include_statement, 3, 0, 0),
    [403] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_include_statement, 2, 0, 0),
    [405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_include_statement, 2, 0, 0),
    [407] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    [409] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(379),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(386),
    [415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    [417] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(203),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(399),
    [423] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(343),
    [425] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_trans_statement, 2, 0, 0),
    [427] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_trans_statement, 2, 0, 0),
    [431] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    SHIFT_REPEAT(389),
    [434] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    [436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    [438] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [440] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [442] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_list_literal_repeat1, 2, 0, 0),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [448] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_in_expression, 3, 0, 1),
    [450] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_expression, 3, 0, 1),
    [452] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_source, 1, 0, 0),
    [454] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_trans_statement_repeat1, 2, 0, 0),
    [456] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_trans_statement_repeat1, 2, 0, 0),
    [458] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_set_statement, 4, 0, 0),
    [460] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [462] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_statement, 4, 0, 0),
    [464] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_as, 2, 0, 0),
    [466] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_as, 2, 0, 0),
    [468] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ternary_expression, 2, 0, 0),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [472] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ternary_expression, 2, 0, 0),
    [474] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_source_repeat1, 2, 0, 0),
    [476] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_source_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [479] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_source_repeat1, 2, 0, 0),
    SHIFT_REPEAT(369),
    [482] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_as, 3, 0, 0),
    [484] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_as, 3, 0, 0),
    [486] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 5, 0, 0),
    [488] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_statement, 5, 0, 0),
    [490] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_set_statement, 5, 0, 0),
    [492] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_statement, 5, 0, 0),
    [494] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_in_expression, 4, 0, 3),
    [496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_expression, 4, 0, 3),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [502] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [504] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_assignment_expression, 3, 0, 0),
    [506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_assignment_expression, 3, 0, 0),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [510] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [512] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(17),
    [514] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [516] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [518] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [520] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_assignment_expression, 4, 0, 0),
    [522] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_assignment_expression, 4, 0, 0),
    [524] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_attribute_ignore, 2, 0, 0),
    [526] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attribute_ignore, 2, 0, 0),
    [528] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_attribute_context, 2, 0, 0),
    [530] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attribute_context, 2, 0, 0),
    [532] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_for_statement, 2, 0, 0),
    [534] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(355),
    [536] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_for_statement, 2, 0, 0),
    [538] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_with_statement, 2, 0, 0),
    [540] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(307),
    [542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_with_statement, 2, 0, 0),
    [544] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [546] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(187),
    [548] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_with_statement, 1, 0, 0),
    [550] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_with_statement, 1, 0, 0),
    [552] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [554] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(189),
    [556] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ternary_expression, 4, 0, 0),
    [558] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ternary_expression, 4, 0, 0),
    [560] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [562] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [564] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [566] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_include_attribute, 1, 0, 0),
    [568] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_include_attribute, 1, 0, 0),
    [570] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
    [572] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
    [574] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [576] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(179),
    [578] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [580] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [582] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_list_literal_repeat1, 2, 0, 0),
    SHIFT_REPEAT(52),
    [585] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [587] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [589] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_autoescape_statement, 1, 0, 0),
    [591] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_autoescape_statement, 1, 0, 0),
    [593] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [595] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [597] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [599] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [601] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [603] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [605] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_with_statement_repeat1, 2, 0, 0),
    [607] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_with_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(307),
    [610] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_with_statement_repeat1, 2, 0, 0),
    [612] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [614] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(309),
    [616] = { .entry = { .count = 1, .reusable = false } },
    SHIFT_EXTRA(),
    [618] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(314),
    [620] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_trans_statement, 1, 0, 0),
    [622] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [624] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_trans_statement, 1, 0, 0),
    [626] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [628] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(290),
    [630] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_arg, 1, 0, 0),
    [632] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
    [634] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
    SHIFT_REPEAT(314),
    [637] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
    [639] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
    SHIFT_REPEAT(309),
    [642] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(286),
    [644] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [646] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_do_statement, 2, 0, 0),
    [648] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_do_statement, 2, 0, 0),
    [650] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_filter_statement, 2, 0, 0),
    [652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_filter_statement, 2, 0, 0),
    [654] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
    SHIFT_REPEAT(329),
    [657] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
    [659] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(198),
    [661] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [663] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_dict_literal_repeat1, 4, 0, 0),
    [665] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [667] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(200),
    [669] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_if_expression, 2, 0, 0),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_if_expression, 2, 0, 0),
    [673] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(185),
    [675] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_statement, 2, 0, 0),
    [677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_statement, 2, 0, 0),
    [679] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_trans_statement, 3, 0, 0),
    [681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_trans_statement, 3, 0, 0),
    [683] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_arg, 3, 0, 0),
    [685] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_extends_statement, 2, 0, 0),
    [687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_extends_statement, 2, 0, 0),
    [689] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(329),
    [691] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(409),
    [693] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(408),
    [695] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_trans_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(343),
    [698] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [700] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [704] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [706] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(388),
    [708] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [710] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(180),
    [712] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [714] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [716] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [718] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [720] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
    SHIFT_REPEAT(24),
    [723] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
    [725] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
    SHIFT_REPEAT(342),
    [728] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
    [730] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [732] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [734] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [736] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_with_statement_repeat1, 1, 0, 0),
    [738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_with_statement_repeat1, 1, 0, 0),
    [740] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_dict_literal_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [743] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_dict_literal_repeat1, 2, 0, 0),
    [745] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [747] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [749] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [751] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
    [753] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [755] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [757] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_assignment_expression_repeat1, 2, 0, 0),
    SHIFT_REPEAT(399),
    [760] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_assignment_expression_repeat1, 2, 0, 0),
    [762] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat2, 1, 0, 0),
    [764] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [766] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [768] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [770] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(383),
    [772] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [774] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [776] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [778] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [780] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [782] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(174),
    [784] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(250),
    [786] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [788] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    SHIFT_REPEAT(388),
    [791] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [793] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_comment_repeat1, 1, 0, 0),
    [795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [797] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [799] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pluralize_statement, 1, 0, 0),
    [801] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(373),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pluralize_statement, 1, 0, 0),
    [805] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [807] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [809] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [811] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_for_statement, 3, 0, 0),
    [813] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(364),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_for_statement, 3, 0, 0),
    [817] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(168),
    [819] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_source_repeat1, 1, 0, 0),
    [823] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_source_repeat1, 1, 0, 0),
    [825] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_statement, 1, 0, 0),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_statement, 1, 0, 0),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raw_block_repeat1, 1, 0, 0),
    [831] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(216),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raw_block, 4, 0, 0),
    [835] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_raw_block, 4, 0, 0),
    [837] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [839] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(381),
    [841] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_block_statement, 2, 0, 0),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_block_statement, 2, 0, 0),
    [845] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_extends_statement, 3, 0, 0),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_extends_statement, 3, 0, 0),
    [849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_line_statement, 4, 0, 0),
    [851] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_line_statement, 4, 0, 0),
    [853] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_autoescape_statement, 2, 0, 0),
    [855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_autoescape_statement, 2, 0, 0),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_line_statement, 3, 0, 0),
    [859] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_line_statement, 3, 0, 0),
    [861] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(294),
    [863] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_call_statement, 2, 0, 0),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_call_statement, 2, 0, 0),
    [867] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_attribute, 1, 0, 0),
    [869] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_attribute, 1, 0, 0),
    [871] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_for_statement, 4, 0, 0),
    [873] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_for_statement, 4, 0, 0),
    [875] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [877] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(378),
    [879] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 6, 0, 0),
    [881] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_statement, 6, 0, 0),
    [883] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [885] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(385),
    [887] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_set_statement, 6, 0, 0),
    [889] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_statement, 6, 0, 0),
    [891] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__NEWLINE, 1, 0, 0),
    [893] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__NEWLINE, 1, 0, 0),
    [895] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raw_block, 5, 0, 2),
    [897] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_raw_block, 5, 0, 2),
    [899] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_call_statement, 5, 0, 0),
    [901] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_call_statement, 5, 0, 0),
    [903] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pluralize_statement, 2, 0, 0),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pluralize_statement, 2, 0, 0),
    [907] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_macro_statement, 2, 0, 0),
    [909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_macro_statement, 2, 0, 0),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__END, 1, 0, 0),
    [913] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__END, 1, 0, 0),
    [915] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [917] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(232),
    [919] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(188),
    [921] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [923] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(393),
    [925] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [927] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(181),
    [929] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(231),
    [931] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(218),
    [933] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(356),
    [935] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(212),
    [937] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(190),
    [939] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_from, 2, 0, 0),
    [941] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(273),
    [943] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(348),
    [945] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [947] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [949] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [951] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(347),
    [953] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(340),
    [955] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [957] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [959] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [961] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(407),
    [963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [967] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
    [969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__raw_char = 0,
    ts_external_token_raw_end = 1,
    ts_external_token__eof = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__raw_char] = sym__raw_char,
    [ts_external_token_raw_end] = sym_raw_end,
    [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__raw_char] = true,
        [ts_external_token_raw_end] = true,
        [ts_external_token__eof] = true,
    },
    [2] = {
        [ts_external_token__eof] = true,
    },
    [3] = {
        [ts_external_token__raw_char] = true,
        [ts_external_token_raw_end] = true,
    },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jinja_inline_external_scanner_create(void);
void tree_sitter_jinja_inline_external_scanner_destroy(void *);
bool tree_sitter_jinja_inline_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jinja_inline_external_scanner_serialize(void *, char *);
void tree_sitter_jinja_inline_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jinja_inline(void) {
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
        .symbol_metadata = ts_symbol_metadata,
        .public_symbol_map = ts_symbol_map,
        .alias_map = ts_non_terminal_alias_map,
        .alias_sequences = &ts_alias_sequences[0][0],
        .lex_modes = ts_lex_modes,
        .lex_fn = ts_lex,
        .external_scanner = {
            &ts_external_scanner_states[0][0],
            ts_external_scanner_symbol_map,
            tree_sitter_jinja_inline_external_scanner_create,
            tree_sitter_jinja_inline_external_scanner_destroy,
            tree_sitter_jinja_inline_external_scanner_scan,
            tree_sitter_jinja_inline_external_scanner_serialize,
            tree_sitter_jinja_inline_external_scanner_deserialize,
        },
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
