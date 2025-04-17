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
    anon_sym_endfor = 76,
    anon_sym_elif = 77,
    anon_sym_else = 78,
    anon_sym_endif = 79,
    anon_sym_endblock = 80,
    anon_sym_endwith = 81,
    anon_sym_endfilter = 82,
    anon_sym_endmacro = 83,
    anon_sym_endcall = 84,
    anon_sym_endset = 85,
    anon_sym_endtrans = 86,
    anon_sym_continue = 87,
    anon_sym_break = 88,
    anon_sym_debug = 89,
    anon_sym_endautoescape = 90,
    anon_sym_do = 91,
    anon_sym_autoescape = 92,
    anon_sym_trans = 93,
    anon_sym_pluralize = 94,
    anon_sym_if = 95,
    anon_sym_block = 96,
    anon_sym_macro = 97,
    anon_sym_extends = 98,
    anon_sym_call = 99,
    anon_sym_with = 100,
    anon_sym_import = 101,
    anon_sym_from = 102,
    anon_sym_as = 103,
    anon_sym_include = 104,
    anon_sym_ignore = 105,
    anon_sym_missing = 106,
    anon_sym_without = 107,
    anon_sym_context = 108,
    anon_sym_set = 109,
    anon_sym_for = 110,
    anon_sym_recursive = 111,
    anon_sym_POUND = 112,
    sym_identifier = 113,
    anon_sym_POUND_POUND = 114,
    aux_sym_comment_token1 = 115,
    aux_sym_comment_token2 = 116,
    anon_sym_LBRACE_POUND = 117,
    aux_sym_comment_token3 = 118,
    anon_sym_POUND_RBRACE = 119,
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
    sym_statement = 147,
    sym_do_statement = 148,
    sym_autoescape_statement = 149,
    sym_trans_statement = 150,
    sym_pluralize_statement = 151,
    sym_ternary_expression = 152,
    sym_block_statement = 153,
    sym_filter_statement = 154,
    sym_macro_statement = 155,
    sym_extends_statement = 156,
    sym_call_statement = 157,
    sym_with_statement = 158,
    sym_import_statement = 159,
    sym_import_from = 160,
    sym_import_as = 161,
    sym_import_attribute = 162,
    sym_include_statement = 163,
    sym_include_attribute = 164,
    sym_attribute_ignore = 165,
    sym_attribute_context = 166,
    sym_set_statement = 167,
    sym_for_statement = 168,
    sym_if_expression = 169,
    sym_comment = 170,
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
    [anon_sym_endfor] = "endfor",
    [anon_sym_elif] = "elif",
    [anon_sym_else] = "else",
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
    [anon_sym_do] = "do",
    [anon_sym_autoescape] = "autoescape",
    [anon_sym_trans] = "trans",
    [anon_sym_pluralize] = "pluralize",
    [anon_sym_if] = "if",
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
    [sym_statement] = "statement",
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
    [anon_sym_endfor] = anon_sym_endfor,
    [anon_sym_elif] = anon_sym_elif,
    [anon_sym_else] = anon_sym_else,
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
    [anon_sym_do] = anon_sym_do,
    [anon_sym_autoescape] = anon_sym_autoescape,
    [anon_sym_trans] = anon_sym_trans,
    [anon_sym_pluralize] = anon_sym_pluralize,
    [anon_sym_if] = anon_sym_if,
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
    [sym_statement] = sym_statement,
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
    [anon_sym_endfor] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_elif] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_else] = {
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
    [sym_statement] = {
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
    [10] = 7,
    [11] = 8,
    [12] = 6,
    [13] = 7,
    [14] = 6,
    [15] = 8,
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
    [28] = 16,
    [29] = 19,
    [30] = 22,
    [31] = 20,
    [32] = 32,
    [33] = 33,
    [34] = 34,
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 37,
    [39] = 35,
    [40] = 40,
    [41] = 41,
    [42] = 36,
    [43] = 43,
    [44] = 34,
    [45] = 45,
    [46] = 45,
    [47] = 45,
    [48] = 35,
    [49] = 37,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 36,
    [55] = 43,
    [56] = 40,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 43,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 67,
    [69] = 67,
    [70] = 66,
    [71] = 66,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 79,
    [81] = 81,
    [82] = 82,
    [83] = 78,
    [84] = 84,
    [85] = 85,
    [86] = 72,
    [87] = 87,
    [88] = 73,
    [89] = 87,
    [90] = 90,
    [91] = 90,
    [92] = 90,
    [93] = 90,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 78,
    [100] = 79,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 77,
    [108] = 75,
    [109] = 104,
    [110] = 105,
    [111] = 111,
    [112] = 94,
    [113] = 81,
    [114] = 82,
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
    [128] = 74,
    [129] = 85,
    [130] = 121,
    [131] = 119,
    [132] = 116,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 84,
    [137] = 76,
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
    [157] = 87,
    [158] = 90,
    [159] = 90,
    [160] = 75,
    [161] = 125,
    [162] = 134,
    [163] = 96,
    [164] = 138,
    [165] = 111,
    [166] = 122,
    [167] = 101,
    [168] = 102,
    [169] = 103,
    [170] = 77,
    [171] = 104,
    [172] = 105,
    [173] = 94,
    [174] = 81,
    [175] = 82,
    [176] = 97,
    [177] = 98,
    [178] = 115,
    [179] = 133,
    [180] = 117,
    [181] = 106,
    [182] = 120,
    [183] = 123,
    [184] = 73,
    [185] = 95,
    [186] = 126,
    [187] = 74,
    [188] = 85,
    [189] = 121,
    [190] = 119,
    [191] = 116,
    [192] = 72,
    [193] = 135,
    [194] = 84,
    [195] = 76,
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
    [227] = 225,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 233,
    [236] = 228,
    [237] = 237,
    [238] = 229,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 240,
    [243] = 243,
    [244] = 244,
    [245] = 245,
    [246] = 229,
    [247] = 122,
    [248] = 248,
    [249] = 230,
    [250] = 250,
    [251] = 251,
    [252] = 111,
    [253] = 240,
    [254] = 233,
    [255] = 228,
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
    [268] = 268,
    [269] = 269,
    [270] = 270,
    [271] = 258,
    [272] = 272,
    [273] = 273,
    [274] = 274,
    [275] = 274,
    [276] = 260,
    [277] = 277,
    [278] = 278,
    [279] = 268,
    [280] = 260,
    [281] = 274,
    [282] = 282,
    [283] = 268,
    [284] = 284,
    [285] = 285,
    [286] = 286,
    [287] = 258,
    [288] = 288,
    [289] = 289,
    [290] = 290,
    [291] = 291,
    [292] = 208,
    [293] = 293,
    [294] = 294,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 297,
    [299] = 299,
    [300] = 300,
    [301] = 301,
    [302] = 302,
    [303] = 303,
    [304] = 304,
    [305] = 297,
    [306] = 306,
    [307] = 307,
    [308] = 303,
    [309] = 309,
    [310] = 310,
    [311] = 311,
    [312] = 312,
    [313] = 313,
    [314] = 314,
    [315] = 315,
    [316] = 316,
    [317] = 291,
    [318] = 318,
    [319] = 319,
    [320] = 293,
    [321] = 307,
    [322] = 322,
    [323] = 310,
    [324] = 291,
    [325] = 312,
    [326] = 293,
    [327] = 310,
    [328] = 310,
    [329] = 318,
    [330] = 330,
    [331] = 331,
    [332] = 316,
    [333] = 312,
    [334] = 318,
    [335] = 307,
    [336] = 336,
    [337] = 337,
    [338] = 303,
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
    [349] = 215,
    [350] = 347,
    [351] = 351,
    [352] = 352,
    [353] = 353,
    [354] = 354,
    [355] = 355,
    [356] = 356,
    [357] = 357,
    [358] = 358,
    [359] = 359,
    [360] = 360,
    [361] = 347,
    [362] = 362,
    [363] = 363,
    [364] = 364,
    [365] = 365,
    [366] = 345,
    [367] = 367,
    [368] = 368,
    [369] = 369,
    [370] = 345,
    [371] = 371,
    [372] = 372,
    [373] = 373,
    [374] = 374,
    [375] = 375,
    [376] = 376,
    [377] = 377,
    [378] = 378,
    [379] = 378,
    [380] = 377,
    [381] = 381,
    [382] = 382,
    [383] = 383,
    [384] = 384,
    [385] = 378,
    [386] = 386,
    [387] = 387,
    [388] = 388,
    [389] = 389,
    [390] = 390,
    [391] = 391,
    [392] = 383,
    [393] = 393,
    [394] = 381,
    [395] = 382,
    [396] = 388,
    [397] = 397,
    [398] = 398,
    [399] = 399,
    [400] = 377,
    [401] = 381,
    [402] = 382,
    [403] = 403,
    [404] = 388,
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
                '\n', 674,
                '\r', 1,
                '!', 368,
                '"', 277,
                '#', 435,
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
                '\n', 674,
                '\r', 1,
                '!', 368,
                '"', 277,
                '#', 435,
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
        case 3:
            if(lookahead == '\n')
                ADVANCE(675);
            if(lookahead == '\r')
                ADVANCE(685);
            if(lookahead == '#')
                ADVANCE(435);
            if(lookahead == '{')
                ADVANCE(686);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(685);
            if(lookahead != 0)
                ADVANCE(687);
            END_STATE();
        case 4:
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
        case 5:
            ADVANCE_MAP(
                '\n', 676,
                '\r', 5,
                '!', 367,
                '"', 277,
                '#', 434,
                '\'', 284,
                '(', 272,
                '+', 255,
                '-', 254,
                '0', 256,
                '[', 269,
                '_', 264,
                'a', 654,
                'b', 552,
                'c', 437,
                'd', 485,
                'e', 553,
                'f', 444,
                'i', 526,
                'm', 440,
                'n', 592,
                'p', 558,
                'r', 436,
                's', 503,
                't', 613,
                'w', 539,
                '{', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(5);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 6:
            ADVANCE_MAP(
                '\n', 677,
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
                'b', 600,
                'c', 455,
                'd', 505,
                'e', 611,
                'f', 443,
                'g', 495,
                'i', 576,
                'l', 496,
                'm', 447,
                'n', 497,
                'o', 482,
                's', 441,
                't', 511,
                'u', 591,
                '{', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(6);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 7:
            ADVANCE_MAP(
                '\n', 678,
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
                'f', 445,
                'n', 592,
                't', 628,
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
                ADVANCE(667);
            END_STATE();
        case 8:
            ADVANCE_MAP(
                '\n', 679,
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
                '\n', 680,
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
                'a', 588,
                'e', 260,
                'i', 635,
                'o', 622,
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
                ADVANCE(667);
            END_STATE();
        case 10:
            ADVANCE_MAP(
                '\n', 681,
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
                'a', 588,
                'i', 635,
                'o', 622,
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
                ADVANCE(667);
            END_STATE();
        case 11:
            ADVANCE_MAP(
                '\n', 682,
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
                ADVANCE(667);
            END_STATE();
        case 12:
            if(lookahead == '"')
                ADVANCE(283);
            if(lookahead == '\'')
                ADVANCE(290);
            END_STATE();
        case 13:
            if(lookahead == '#')
                ADVANCE(668);
            END_STATE();
        case 14:
            if(lookahead == '#')
                ADVANCE(683);
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
                ADVANCE(399);
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
                ADVANCE(373);
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
                ADVANCE(425);
            END_STATE();
        case 70:
            if(lookahead == 'e')
                ADVANCE(391);
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
                ADVANCE(405);
            END_STATE();
        case 74:
            if(lookahead == 'e')
                ADVANCE(433);
            END_STATE();
        case 75:
            if(lookahead == 'e')
                ADVANCE(401);
            END_STATE();
        case 76:
            if(lookahead == 'e')
                ADVANCE(397);
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
                ADVANCE(407);
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
                ADVANCE(407);
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
                ADVANCE(371);
            END_STATE();
        case 103:
            if(lookahead == 'f')
                ADVANCE(375);
            END_STATE();
        case 104:
            if(lookahead == 'f')
                ADVANCE(122);
            END_STATE();
        case 105:
            if(lookahead == 'g')
                ADVANCE(395);
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
                ADVANCE(426);
            END_STATE();
        case 109:
            if(lookahead == 'g')
                ADVANCE(97);
            END_STATE();
        case 110:
            if(lookahead == 'h')
                ADVANCE(417);
            END_STATE();
        case 111:
            if(lookahead == 'h')
                ADVANCE(379);
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
                ADVANCE(409);
            END_STATE();
        case 126:
            if(lookahead == 'k')
                ADVANCE(393);
            END_STATE();
        case 127:
            if(lookahead == 'k')
                ADVANCE(377);
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
                ADVANCE(415);
            END_STATE();
        case 131:
            if(lookahead == 'l')
                ADVANCE(250);
            END_STATE();
        case 132:
            if(lookahead == 'l')
                ADVANCE(385);
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
                ADVANCE(421);
            END_STATE();
        case 145:
            if(lookahead == 'm')
                ADVANCE(91);
            END_STATE();
        case 146:
            if(lookahead == 'n')
                ADVANCE(50);
            if(lookahead == 's')
                ADVANCE(423);
            END_STATE();
        case 147:
            if(lookahead == 'n')
                ADVANCE(50);
            if(lookahead == 's')
                ADVANCE(423);
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
                ADVANCE(411);
            END_STATE();
        case 165:
            if(lookahead == 'o')
                ADVANCE(383);
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
                ADVANCE(429);
            END_STATE();
        case 182:
            if(lookahead == 'r')
                ADVANCE(361);
            END_STATE();
        case 183:
            if(lookahead == 'r')
                ADVANCE(431);
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
                ADVANCE(369);
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
                ADVANCE(381);
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
                ADVANCE(403);
            END_STATE();
        case 201:
            if(lookahead == 's')
                ADVANCE(335);
            END_STATE();
        case 202:
            if(lookahead == 's')
                ADVANCE(413);
            END_STATE();
        case 203:
            if(lookahead == 's')
                ADVANCE(389);
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
                ADVANCE(387);
            END_STATE();
        case 218:
            if(lookahead == 't')
                ADVANCE(419);
            END_STATE();
        case 219:
            if(lookahead == 't')
                ADVANCE(428);
            END_STATE();
        case 220:
            if(lookahead == 't')
                ADVANCE(427);
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
                '\n', 676,
                '\r', 5,
                '!', 367,
                '"', 277,
                '#', 434,
                '\'', 284,
                '(', 272,
                '+', 255,
                '-', 254,
                '0', 256,
                '[', 269,
                '_', 264,
                'a', 654,
                'b', 552,
                'c', 437,
                'd', 485,
                'e', 553,
                'f', 444,
                'i', 526,
                'm', 440,
                'n', 592,
                'p', 558,
                'r', 436,
                's', 503,
                't', 613,
                'w', 539,
                '{', 274,
            );
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(244);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(257);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(683);
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
                ADVANCE(668);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(lookahead == '#')
                ADVANCE(683);
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
                ADVANCE(668);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(aux_sym_string_literal_token2);
            if(lookahead == '#')
                ADVANCE(683);
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
                ADVANCE(667);
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
                ADVANCE(667);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(anon_sym_callable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
                ADVANCE(667);
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
            ACCEPT_TOKEN(anon_sym_endfor);
            END_STATE();
        case 370:
            ACCEPT_TOKEN(anon_sym_endfor);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 371:
            ACCEPT_TOKEN(anon_sym_elif);
            END_STATE();
        case 372:
            ACCEPT_TOKEN(anon_sym_elif);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 373:
            ACCEPT_TOKEN(anon_sym_else);
            END_STATE();
        case 374:
            ACCEPT_TOKEN(anon_sym_else);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 375:
            ACCEPT_TOKEN(anon_sym_endif);
            END_STATE();
        case 376:
            ACCEPT_TOKEN(anon_sym_endif);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 377:
            ACCEPT_TOKEN(anon_sym_endblock);
            END_STATE();
        case 378:
            ACCEPT_TOKEN(anon_sym_endblock);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 379:
            ACCEPT_TOKEN(anon_sym_endwith);
            END_STATE();
        case 380:
            ACCEPT_TOKEN(anon_sym_endwith);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 381:
            ACCEPT_TOKEN(anon_sym_endfilter);
            END_STATE();
        case 382:
            ACCEPT_TOKEN(anon_sym_endfilter);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 383:
            ACCEPT_TOKEN(anon_sym_endmacro);
            END_STATE();
        case 384:
            ACCEPT_TOKEN(anon_sym_endmacro);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 385:
            ACCEPT_TOKEN(anon_sym_endcall);
            END_STATE();
        case 386:
            ACCEPT_TOKEN(anon_sym_endcall);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 387:
            ACCEPT_TOKEN(anon_sym_endset);
            END_STATE();
        case 388:
            ACCEPT_TOKEN(anon_sym_endset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 389:
            ACCEPT_TOKEN(anon_sym_endtrans);
            END_STATE();
        case 390:
            ACCEPT_TOKEN(anon_sym_endtrans);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 391:
            ACCEPT_TOKEN(anon_sym_continue);
            END_STATE();
        case 392:
            ACCEPT_TOKEN(anon_sym_continue);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 393:
            ACCEPT_TOKEN(anon_sym_break);
            END_STATE();
        case 394:
            ACCEPT_TOKEN(anon_sym_break);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 395:
            ACCEPT_TOKEN(anon_sym_debug);
            END_STATE();
        case 396:
            ACCEPT_TOKEN(anon_sym_debug);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 397:
            ACCEPT_TOKEN(anon_sym_endautoescape);
            END_STATE();
        case 398:
            ACCEPT_TOKEN(anon_sym_endautoescape);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 399:
            ACCEPT_TOKEN(anon_sym_do);
            END_STATE();
        case 400:
            ACCEPT_TOKEN(anon_sym_do);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 401:
            ACCEPT_TOKEN(anon_sym_autoescape);
            END_STATE();
        case 402:
            ACCEPT_TOKEN(anon_sym_autoescape);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 403:
            ACCEPT_TOKEN(anon_sym_trans);
            END_STATE();
        case 404:
            ACCEPT_TOKEN(anon_sym_trans);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 405:
            ACCEPT_TOKEN(anon_sym_pluralize);
            END_STATE();
        case 406:
            ACCEPT_TOKEN(anon_sym_pluralize);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(anon_sym_if);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(anon_sym_if);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_block);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_block);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_macro);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(anon_sym_macro);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(anon_sym_extends);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(anon_sym_extends);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(anon_sym_call);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(anon_sym_call);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(anon_sym_with);
            if(lookahead == 'o')
                ADVANCE(229);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(anon_sym_with);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(anon_sym_from);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(anon_sym_from);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(anon_sym_as);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(anon_sym_include);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(anon_sym_ignore);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(anon_sym_missing);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(anon_sym_without);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(anon_sym_set);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(anon_sym_set);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(anon_sym_for);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(anon_sym_for);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(anon_sym_recursive);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(668);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_POUND);
            if(lookahead == '#')
                ADVANCE(668);
            if(lookahead == '}')
                ADVANCE(688);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(561);
            if(lookahead == 'o')
                ADVANCE(585);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(580);
            if(lookahead == 'u')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(606);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(467);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(575);
            if(lookahead == 'e')
                ADVANCE(612);
            if(lookahead == 't')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(554);
            if(lookahead == 'i')
                ADVANCE(571);
            if(lookahead == 'l')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(554);
            if(lookahead == 'i')
                ADVANCE(571);
            if(lookahead == 'o')
                ADVANCE(614);
            if(lookahead == 'r')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(554);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(559);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(646);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(578);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(586);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(472);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(sym_identifier);
            ADVANCE_MAP(
                'a', 661,
                'b', 570,
                'c', 454,
                'f', 547,
                'i', 528,
                'm', 457,
                's', 509,
                't', 625,
                'w', 542,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(549);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(551);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(439);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(453);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(456);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(459);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(334);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(297);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(303);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(344);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(360);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(490);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(461);
            if(lookahead == 'o')
                ADVANCE(400);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(374);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(253);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(247);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(249);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(424);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(392);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(406);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(402);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(398);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(311);
            if(lookahead == 't')
                ADVANCE(313);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(322);
            if(lookahead == 'o')
                ADVANCE(664);
            if(lookahead == 't')
                ADVANCE(326);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(330);
            if(lookahead == 'o')
                ADVANCE(584);
            if(lookahead == 'u')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(295);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(338);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(442);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(529);
            if(lookahead == 'i')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(636);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(460);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(577);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(477);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(639);
            if(lookahead == 'r')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(479);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(587);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(449);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(451);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(640);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(408);
            if(lookahead == 'm')
                ADVANCE(604);
            if(lookahead == 'n')
                ADVANCE(471);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(372);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(376);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(396);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(340);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(328);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(418);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(380);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(527);
            if(lookahead == 's')
                ADVANCE(486);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(583);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(581);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(637);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(582);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(573);
            if(lookahead == 'o')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(465);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(410);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(394);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(378);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(596);
            if(lookahead == 'r')
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(537);
            if(lookahead == 'n')
                ADVANCE(475);
            if(lookahead == 'x')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(638);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(416);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(251);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(386);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(555);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(556);
            if(lookahead == 'm')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(557);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(446);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(498);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(422);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(316);
            if(lookahead == 't')
                ADVANCE(523);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(305);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(294);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(532);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(533);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(487);
            if(lookahead == 't')
                ADVANCE(366);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(484);
            if(lookahead == 'p')
                ADVANCE(608);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(584);
            if(lookahead == 'u')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(574);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(412);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(384);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(466);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(468);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(450);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(610);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(493);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(519);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(301);
            if(lookahead == 's')
                ADVANCE(474);
            if(lookahead == 'v')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(438);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(432);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(370);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(307);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(382);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(324);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(346);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(332);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(318);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(362);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(452);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(458);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(404);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(414);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(390);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(336);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(292);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(469);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(548);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(489);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(430);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(388);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(420);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(342);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(309);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(536);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(504);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(531);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(483);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(544);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(299);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'z')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'y'))
                ADVANCE(667);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(667);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_POUND_POUND);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(673);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(670);
            if(lookahead == '\r')
                ADVANCE(670);
            if(lookahead == '#')
                ADVANCE(671);
            if(lookahead == '{')
                ADVANCE(672);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(670);
            if(lookahead != 0)
                ADVANCE(673);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '#')
                ADVANCE(669);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(673);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '#')
                ADVANCE(684);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(673);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(673);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(674);
            if(lookahead == '\r')
                ADVANCE(1);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(675);
            if(lookahead == '\r')
                ADVANCE(685);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(685);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(676);
            if(lookahead == '\r')
                ADVANCE(5);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(677);
            if(lookahead == '\r')
                ADVANCE(6);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(678);
            if(lookahead == '\r')
                ADVANCE(7);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(679);
            if(lookahead == '\r')
                ADVANCE(8);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(680);
            if(lookahead == '\r')
                ADVANCE(9);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(681);
            if(lookahead == '\r')
                ADVANCE(10);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(682);
            if(lookahead == '\r')
                ADVANCE(11);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
            if(lookahead != 0 &&
               lookahead != '\n' &&
               lookahead != '\r')
                ADVANCE(673);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '\n')
                ADVANCE(675);
            if(lookahead == '\r')
                ADVANCE(685);
            if(lookahead == '{')
                ADVANCE(686);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                ADVANCE(685);
            if(lookahead != 0 &&
               lookahead != '#')
                ADVANCE(687);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '#')
                ADVANCE(683);
            if(lookahead != 0)
                ADVANCE(687);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead != 0 &&
               lookahead != '#')
                ADVANCE(687);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
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
                ADVANCE(667);
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
    [74] = { .lex_state = 8, .external_lex_state = 2 },
    [75] = { .lex_state = 8, .external_lex_state = 2 },
    [76] = { .lex_state = 8, .external_lex_state = 2 },
    [77] = { .lex_state = 8, .external_lex_state = 2 },
    [78] = { .lex_state = 8, .external_lex_state = 2 },
    [79] = { .lex_state = 8 },
    [80] = { .lex_state = 8, .external_lex_state = 2 },
    [81] = { .lex_state = 8, .external_lex_state = 2 },
    [82] = { .lex_state = 8, .external_lex_state = 2 },
    [83] = { .lex_state = 8 },
    [84] = { .lex_state = 8, .external_lex_state = 2 },
    [85] = { .lex_state = 8, .external_lex_state = 2 },
    [86] = { .lex_state = 8 },
    [87] = { .lex_state = 8, .external_lex_state = 2 },
    [88] = { .lex_state = 8 },
    [89] = { .lex_state = 8 },
    [90] = { .lex_state = 8, .external_lex_state = 2 },
    [91] = { .lex_state = 8, .external_lex_state = 2 },
    [92] = { .lex_state = 8 },
    [93] = { .lex_state = 8 },
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
    [205] = { .lex_state = 11 },
    [206] = { .lex_state = 0, .external_lex_state = 2 },
    [207] = { .lex_state = 0, .external_lex_state = 2 },
    [208] = { .lex_state = 0, .external_lex_state = 2 },
    [209] = { .lex_state = 0, .external_lex_state = 2 },
    [210] = { .lex_state = 0, .external_lex_state = 2 },
    [211] = { .lex_state = 244 },
    [212] = { .lex_state = 0, .external_lex_state = 2 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 0, .external_lex_state = 2 },
    [215] = { .lex_state = 0, .external_lex_state = 2 },
    [216] = { .lex_state = 0, .external_lex_state = 2 },
    [217] = { .lex_state = 0, .external_lex_state = 2 },
    [218] = { .lex_state = 0, .external_lex_state = 2 },
    [219] = { .lex_state = 0, .external_lex_state = 2 },
    [220] = { .lex_state = 0, .external_lex_state = 2 },
    [221] = { .lex_state = 0, .external_lex_state = 2 },
    [222] = { .lex_state = 244 },
    [223] = { .lex_state = 0, .external_lex_state = 2 },
    [224] = { .lex_state = 0, .external_lex_state = 2 },
    [225] = { .lex_state = 11, .external_lex_state = 2 },
    [226] = { .lex_state = 11, .external_lex_state = 2 },
    [227] = { .lex_state = 0, .external_lex_state = 2 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 0, .external_lex_state = 2 },
    [231] = { .lex_state = 0, .external_lex_state = 2 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0, .external_lex_state = 2 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 0 },
    [237] = { .lex_state = 0, .external_lex_state = 2 },
    [238] = { .lex_state = 0 },
    [239] = { .lex_state = 0, .external_lex_state = 2 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 11, .external_lex_state = 2 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 11, .external_lex_state = 2 },
    [244] = { .lex_state = 0, .external_lex_state = 2 },
    [245] = { .lex_state = 0, .external_lex_state = 2 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 11, .external_lex_state = 2 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 11, .external_lex_state = 2 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 0, .external_lex_state = 2 },
    [252] = { .lex_state = 11, .external_lex_state = 2 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 0, .external_lex_state = 2 },
    [257] = { .lex_state = 0, .external_lex_state = 2 },
    [258] = { .lex_state = 2 },
    [259] = { .lex_state = 3 },
    [260] = { .lex_state = 4 },
    [261] = { .lex_state = 11, .external_lex_state = 2 },
    [262] = { .lex_state = 0, .external_lex_state = 2 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 11 },
    [265] = { .lex_state = 2 },
    [266] = { .lex_state = 4 },
    [267] = { .lex_state = 0, .external_lex_state = 2 },
    [268] = { .lex_state = 4 },
    [269] = { .lex_state = 0, .external_lex_state = 2 },
    [270] = { .lex_state = 0, .external_lex_state = 2 },
    [271] = { .lex_state = 2 },
    [272] = { .lex_state = 11 },
    [273] = { .lex_state = 0, .external_lex_state = 2 },
    [274] = { .lex_state = 2 },
    [275] = { .lex_state = 2 },
    [276] = { .lex_state = 4 },
    [277] = { .lex_state = 3 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 4 },
    [280] = { .lex_state = 4 },
    [281] = { .lex_state = 2 },
    [282] = { .lex_state = 0, .external_lex_state = 2 },
    [283] = { .lex_state = 4 },
    [284] = { .lex_state = 0, .external_lex_state = 2 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0, .external_lex_state = 2 },
    [287] = { .lex_state = 2 },
    [288] = { .lex_state = 3 },
    [289] = { .lex_state = 11 },
    [290] = { .lex_state = 0, .external_lex_state = 2 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 8 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 0, .external_lex_state = 3 },
    [295] = { .lex_state = 8 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0, .external_lex_state = 3 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 11, .external_lex_state = 2 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 4 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 2 },
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
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0, .external_lex_state = 3 },
    [331] = { .lex_state = 3 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0, .external_lex_state = 2 },
    [337] = { .lex_state = 11, .external_lex_state = 2 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 244 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 11 },
    [342] = { .lex_state = 0, .external_lex_state = 3 },
    [343] = { .lex_state = 0, .external_lex_state = 2 },
    [344] = { .lex_state = 0, .external_lex_state = 2 },
    [345] = { .lex_state = 8 },
    [346] = { .lex_state = 244 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 11 },
    [349] = { .lex_state = 8 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 244 },
    [352] = { .lex_state = 0, .external_lex_state = 2 },
    [353] = { .lex_state = 244 },
    [354] = { .lex_state = 0, .external_lex_state = 2 },
    [355] = { .lex_state = 11 },
    [356] = { .lex_state = 0, .external_lex_state = 2 },
    [357] = { .lex_state = 0, .external_lex_state = 2 },
    [358] = { .lex_state = 11 },
    [359] = { .lex_state = 0, .external_lex_state = 2 },
    [360] = { .lex_state = 0, .external_lex_state = 2 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0, .external_lex_state = 2 },
    [363] = { .lex_state = 0, .external_lex_state = 2 },
    [364] = { .lex_state = 0, .external_lex_state = 2 },
    [365] = { .lex_state = 0, .external_lex_state = 2 },
    [366] = { .lex_state = 8 },
    [367] = { .lex_state = 0, .external_lex_state = 2 },
    [368] = { .lex_state = 0, .external_lex_state = 2 },
    [369] = { .lex_state = 244 },
    [370] = { .lex_state = 8 },
    [371] = { .lex_state = 0, .external_lex_state = 2 },
    [372] = { .lex_state = 244 },
    [373] = { .lex_state = 0, .external_lex_state = 2 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0, .external_lex_state = 2 },
    [376] = { .lex_state = 244 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 8 },
    [379] = { .lex_state = 8 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 11 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 8 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 8 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 11 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 11 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 8 },
    [397] = { .lex_state = 11 },
    [398] = { .lex_state = 11 },
    [399] = { .lex_state = 11 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 8 },
    [405] = { .lex_state = 670 },
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
        [anon_sym_endfor] = ACTIONS(1),
        [anon_sym_elif] = ACTIONS(1),
        [anon_sym_else] = ACTIONS(1),
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
        [anon_sym_do] = ACTIONS(1),
        [anon_sym_autoescape] = ACTIONS(1),
        [anon_sym_trans] = ACTIONS(1),
        [anon_sym_pluralize] = ACTIONS(1),
        [anon_sym_if] = ACTIONS(1),
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
        [aux_sym_source_repeat1] = STATE(211),
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
        [sym_expression] = STATE(256),
        [sym_binary_expression] = STATE(90),
        [sym_unary_expression] = STATE(133),
        [sym_unary_operator] = STATE(68),
        [sym_primary_expression] = STATE(134),
        [sym_function_call] = STATE(125),
        [sym_inline_trans] = STATE(125),
        [sym_statement] = STATE(262),
        [sym_do_statement] = STATE(354),
        [sym_autoescape_statement] = STATE(354),
        [sym_trans_statement] = STATE(354),
        [sym_pluralize_statement] = STATE(354),
        [sym_block_statement] = STATE(354),
        [sym_filter_statement] = STATE(354),
        [sym_macro_statement] = STATE(354),
        [sym_extends_statement] = STATE(354),
        [sym_call_statement] = STATE(354),
        [sym_with_statement] = STATE(354),
        [sym_import_statement] = STATE(354),
        [sym_import_from] = STATE(384),
        [sym_include_statement] = STATE(354),
        [sym_set_statement] = STATE(354),
        [sym_for_statement] = STATE(354),
        [sym_if_expression] = STATE(354),
        [sym_comment] = STATE(2),
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
        [anon_sym_endfor] = ACTIONS(41),
        [anon_sym_elif] = ACTIONS(43),
        [anon_sym_else] = ACTIONS(41),
        [anon_sym_endif] = ACTIONS(41),
        [anon_sym_endblock] = ACTIONS(41),
        [anon_sym_endwith] = ACTIONS(41),
        [anon_sym_endfilter] = ACTIONS(41),
        [anon_sym_endmacro] = ACTIONS(41),
        [anon_sym_endcall] = ACTIONS(41),
        [anon_sym_endset] = ACTIONS(41),
        [anon_sym_endtrans] = ACTIONS(41),
        [anon_sym_continue] = ACTIONS(41),
        [anon_sym_break] = ACTIONS(41),
        [anon_sym_debug] = ACTIONS(41),
        [anon_sym_endautoescape] = ACTIONS(41),
        [anon_sym_do] = ACTIONS(45),
        [anon_sym_autoescape] = ACTIONS(47),
        [anon_sym_trans] = ACTIONS(49),
        [anon_sym_pluralize] = ACTIONS(51),
        [anon_sym_if] = ACTIONS(53),
        [anon_sym_block] = ACTIONS(55),
        [anon_sym_macro] = ACTIONS(57),
        [anon_sym_extends] = ACTIONS(59),
        [anon_sym_call] = ACTIONS(61),
        [anon_sym_with] = ACTIONS(63),
        [anon_sym_import] = ACTIONS(65),
        [anon_sym_from] = ACTIONS(67),
        [anon_sym_include] = ACTIONS(69),
        [anon_sym_set] = ACTIONS(71),
        [anon_sym_for] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
        [anon_sym_raw] = ACTIONS(77),
    },
    [3] = {
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
        [sym_unary_operator] = STATE(68),
        [sym_primary_expression] = STATE(134),
        [sym_function_call] = STATE(125),
        [sym_inline_trans] = STATE(125),
        [sym_comment] = STATE(3),
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
        [anon_sym_boolean] = ACTIONS(79),
        [anon_sym_callable] = ACTIONS(79),
        [anon_sym_defined] = ACTIONS(79),
        [anon_sym_divisibleby] = ACTIONS(81),
        [anon_sym_eq] = ACTIONS(81),
        [anon_sym_escaped] = ACTIONS(79),
        [anon_sym_even] = ACTIONS(79),
        [anon_sym_filter] = ACTIONS(79),
        [anon_sym_float] = ACTIONS(79),
        [anon_sym_ge] = ACTIONS(81),
        [anon_sym_gt] = ACTIONS(81),
        [anon_sym_in] = ACTIONS(83),
        [anon_sym_integer] = ACTIONS(79),
        [anon_sym_iterable] = ACTIONS(79),
        [anon_sym_le] = ACTIONS(81),
        [anon_sym_lower] = ACTIONS(79),
        [anon_sym_lt] = ACTIONS(81),
        [anon_sym_mapping] = ACTIONS(79),
        [anon_sym_ne] = ACTIONS(81),
        [anon_sym_number] = ACTIONS(79),
        [anon_sym_odd] = ACTIONS(79),
        [anon_sym_sameas] = ACTIONS(81),
        [anon_sym_sequence] = ACTIONS(79),
        [anon_sym_string] = ACTIONS(79),
        [anon_sym_test] = ACTIONS(79),
        [anon_sym_undefined] = ACTIONS(79),
        [anon_sym_upper] = ACTIONS(79),
        [anon_sym_not] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [sym_identifier] = ACTIONS(75),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
    },
    [4] = {
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
        [sym_unary_operator] = STATE(67),
        [sym_primary_expression] = STATE(139),
        [sym_function_call] = STATE(142),
        [sym_inline_trans] = STATE(142),
        [sym_comment] = STATE(4),
        [anon_sym_true] = ACTIONS(85),
        [anon_sym_false] = ACTIONS(85),
        [anon_sym_null] = ACTIONS(87),
        [anon_sym_none] = ACTIONS(87),
        [anon_sym_DASH] = ACTIONS(89),
        [anon_sym_PLUS] = ACTIONS(89),
        [sym_dec_literal] = ACTIONS(91),
        [anon_sym__] = ACTIONS(93),
        [sym_oct_literal] = ACTIONS(95),
        [sym_bin_literal] = ACTIONS(95),
        [sym_hex_literal] = ACTIONS(95),
        [anon_sym_LBRACK] = ACTIONS(97),
        [anon_sym_LPAREN] = ACTIONS(99),
        [anon_sym_LBRACE] = ACTIONS(101),
        [anon_sym_DQUOTE] = ACTIONS(103),
        [anon_sym_SQUOTE] = ACTIONS(105),
        [anon_sym_boolean] = ACTIONS(107),
        [anon_sym_callable] = ACTIONS(107),
        [anon_sym_defined] = ACTIONS(107),
        [anon_sym_divisibleby] = ACTIONS(109),
        [anon_sym_eq] = ACTIONS(109),
        [anon_sym_escaped] = ACTIONS(107),
        [anon_sym_even] = ACTIONS(107),
        [anon_sym_filter] = ACTIONS(107),
        [anon_sym_float] = ACTIONS(107),
        [anon_sym_ge] = ACTIONS(109),
        [anon_sym_gt] = ACTIONS(109),
        [anon_sym_in] = ACTIONS(111),
        [anon_sym_integer] = ACTIONS(107),
        [anon_sym_iterable] = ACTIONS(107),
        [anon_sym_le] = ACTIONS(109),
        [anon_sym_lower] = ACTIONS(107),
        [anon_sym_lt] = ACTIONS(109),
        [anon_sym_mapping] = ACTIONS(107),
        [anon_sym_ne] = ACTIONS(109),
        [anon_sym_number] = ACTIONS(107),
        [anon_sym_odd] = ACTIONS(107),
        [anon_sym_sameas] = ACTIONS(109),
        [anon_sym_sequence] = ACTIONS(107),
        [anon_sym_string] = ACTIONS(107),
        [anon_sym_test] = ACTIONS(107),
        [anon_sym_undefined] = ACTIONS(107),
        [anon_sym_upper] = ACTIONS(107),
        [anon_sym_not] = ACTIONS(39),
        [anon_sym_BANG] = ACTIONS(39),
        [sym_identifier] = ACTIONS(113),
        [anon_sym_POUND_POUND] = ACTIONS(3),
        [aux_sym_comment_token2] = ACTIONS(5),
        [anon_sym_LBRACE_POUND] = ACTIONS(7),
    },
    [5] = {
        [sym_literal] = STATE(161),
        [sym_boolean_literal] = STATE(186),
        [sym_null_literal] = STATE(186),
        [sym_number_literal] = STATE(186),
        [sym_big_dec_literal] = STATE(177),
        [sym_float_literal] = STATE(186),
        [sym_list_literal] = STATE(186),
        [sym_tuple_literal] = STATE(186),
        [sym_dict_literal] = STATE(186),
        [sym_string_literal] = STATE(186),
        [sym_builtin_test] = STATE(181),
        [sym_unary_expression] = STATE(181),
        [sym_unary_operator] = STATE(69),
        [sym_primary_expression] = STATE(162),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(145),
    1,
    anon_sym_COMMA,
    ACTIONS(147),
    1,
    anon_sym_RBRACK,
    STATE(6),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(149),
    1,
    anon_sym_RPAREN,
    ACTIONS(151),
    1,
    sym_identifier,
    STATE(7),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(263),
    1,
    sym_expression,
    STATE(333),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(153),
    1,
    anon_sym_COMMA,
    ACTIONS(155),
    1,
    anon_sym_RPAREN,
    STATE(8),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
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
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(151),
    1,
    sym_identifier,
    ACTIONS(161),
    1,
    anon_sym_RPAREN,
    STATE(10),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(263),
    1,
    sym_expression,
    STATE(312),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(157),
    1,
    anon_sym_COMMA,
    ACTIONS(159),
    1,
    anon_sym_RPAREN,
    STATE(11),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(233),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
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
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(151),
    1,
    sym_identifier,
    ACTIONS(167),
    1,
    anon_sym_RPAREN,
    STATE(13),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(263),
    1,
    sym_expression,
    STATE(325),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
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
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(236),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
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
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(177),
    1,
    anon_sym_RPAREN,
    STATE(16),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(179),
    1,
    anon_sym_RPAREN,
    STATE(17),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(181),
    1,
    anon_sym_RPAREN,
    STATE(18),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(183),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(185),
    1,
    anon_sym_RBRACK,
    STATE(20),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(187),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(305),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(189),
    1,
    anon_sym_RBRACK,
    STATE(22),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(191),
    1,
    anon_sym_RPAREN,
    STATE(23),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(151),
    1,
    sym_identifier,
    STATE(24),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(263),
    1,
    sym_expression,
    STATE(374),
    1,
    sym_arg,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(193),
    1,
    anon_sym_RBRACK,
    STATE(25),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(195),
    1,
    anon_sym_RPAREN,
    STATE(26),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(197),
    1,
    anon_sym_RBRACK,
    STATE(27),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(199),
    1,
    anon_sym_RPAREN,
    STATE(28),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(201),
    1,
    anon_sym_RBRACE,
    STATE(29),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(298),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(203),
    1,
    anon_sym_RBRACK,
    STATE(30),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    ACTIONS(205),
    1,
    anon_sym_RBRACK,
    STATE(31),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(68),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(68),
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
    STATE(216),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(68),
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
    STATE(230),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(35),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    STATE(36),
    1,
    sym_comment,
    STATE(69),
    1,
    sym_unary_operator,
    STATE(159),
    1,
    sym_binary_expression,
    STATE(162),
    1,
    sym_primary_expression,
    STATE(172),
    1,
    sym_expression,
    STATE(177),
    1,
    sym_big_dec_literal,
    STATE(179),
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
    STATE(186),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(68),
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
    STATE(38),
    1,
    sym_comment,
    STATE(69),
    1,
    sym_unary_operator,
    STATE(158),
    1,
    sym_binary_expression,
    STATE(162),
    1,
    sym_primary_expression,
    STATE(177),
    1,
    sym_big_dec_literal,
    STATE(179),
    1,
    sym_unary_expression,
    STATE(247),
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
    STATE(186),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(39),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(327),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    STATE(40),
    1,
    sym_comment,
    STATE(69),
    1,
    sym_unary_operator,
    STATE(158),
    1,
    sym_binary_expression,
    STATE(162),
    1,
    sym_primary_expression,
    STATE(177),
    1,
    sym_big_dec_literal,
    STATE(179),
    1,
    sym_unary_expression,
    STATE(225),
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
    STATE(186),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(232),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(93),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(43),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(293),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    STATE(69),
    1,
    sym_unary_operator,
    STATE(158),
    1,
    sym_binary_expression,
    STATE(162),
    1,
    sym_primary_expression,
    STATE(177),
    1,
    sym_big_dec_literal,
    STATE(179),
    1,
    sym_unary_expression,
    STATE(249),
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
    STATE(186),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(45),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(238),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(46),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(246),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(48),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(310),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(68),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(213),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(68),
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
    STATE(218),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(68),
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
    STATE(267),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(91),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(320),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(68),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(68),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(278),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(68),
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
    STATE(239),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    STATE(301),
    1,
    sym_expression,
    ACTIONS(39),
    2,
    anon_sym_not,
    anon_sym_BANG,
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(68),
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
    STATE(273),
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
    ACTIONS(91),
    1,
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(92),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(68),
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
    STATE(270),
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(68),
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
    [5568] = 23,
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
    STATE(66),
    1,
    sym_comment,
    STATE(69),
    1,
    sym_unary_operator,
    STATE(162),
    1,
    sym_primary_expression,
    STATE(177),
    1,
    sym_big_dec_literal,
    STATE(181),
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
    STATE(186),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5653] = 22,
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
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    STATE(67),
    2,
    sym_unary_operator,
    sym_comment,
    ACTIONS(95),
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
    ACTIONS(75),
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
    STATE(68),
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
    [5819] = 22,
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
    STATE(162),
    1,
    sym_primary_expression,
    STATE(177),
    1,
    sym_big_dec_literal,
    STATE(191),
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
    STATE(69),
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
    STATE(186),
    8,
    sym_boolean_literal,
    sym_null_literal,
    sym_number_literal,
    sym_float_literal,
    sym_list_literal,
    sym_tuple_literal,
    sym_dict_literal,
    sym_string_literal,
    [5902] = 23,
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
    ACTIONS(75),
    1,
    sym_identifier,
    STATE(68),
    1,
    sym_unary_operator,
    STATE(70),
    1,
    sym_comment,
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
    [5987] = 23,
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
    sym_dec_literal,
    ACTIONS(93),
    1,
    anon_sym__,
    ACTIONS(97),
    1,
    anon_sym_LBRACK,
    ACTIONS(99),
    1,
    anon_sym_LPAREN,
    ACTIONS(101),
    1,
    anon_sym_LBRACE,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    ACTIONS(113),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_unary_operator,
    STATE(71),
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
    ACTIONS(85),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(87),
    2,
    anon_sym_null,
    anon_sym_none,
    ACTIONS(89),
    2,
    anon_sym_DASH,
    anon_sym_PLUS,
    ACTIONS(95),
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_as,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6162] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(217),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(215),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6206] = 5,
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6250] = 5,
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6294] = 5,
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6338] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(235),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(233),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(231),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_recursive,
    [6384] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(241),
    1,
    anon_sym_DOT,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(239),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(237),
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
    [6432] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(243),
    1,
    anon_sym_DOT,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(245),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(233),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(237),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_recursive,
    [6480] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(249),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(247),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
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
    ACTIONS(253),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(251),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6568] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(239),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    anon_sym_recursive,
    [6702] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(86),
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
    [6744] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(265),
    1,
    anon_sym_LPAREN,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(267),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_recursive,
    [6788] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(88),
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
    [6830] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(269),
    1,
    anon_sym_LPAREN,
    STATE(89),
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
    [6874] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(275),
    1,
    anon_sym_is,
    STATE(70),
    1,
    sym_binary_operator,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(277),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(273),
    7,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_else,
    anon_sym_if,
    anon_sym_recursive,
    ACTIONS(271),
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
    [6922] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(70),
    1,
    sym_binary_operator,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(277),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(273),
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
    anon_sym_else,
    anon_sym_if,
    anon_sym_recursive,
    [6966] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(279),
    1,
    anon_sym_is,
    STATE(71),
    1,
    sym_binary_operator,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(273),
    8,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_RBRACE,
    anon_sym_EQ,
    ACTIONS(271),
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
    [7014] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(71),
    1,
    sym_binary_operator,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(273),
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(245),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(237),
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(235),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(293),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
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
    ACTIONS(245),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(293),
    3,
    anon_sym_e,
    anon_sym_e_PLUS,
    anon_sym_e_DASH,
    ACTIONS(237),
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(247),
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
    ACTIONS(251),
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(217),
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(267),
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(237),
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
    ACTIONS(235),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(231),
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    anon_sym_else,
    anon_sym_if,
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
    ACTIONS(269),
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
    ACTIONS(267),
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
    STATE(66),
    1,
    sym_binary_operator,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(277),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(273),
    4,
    anon_sym_DOT,
    anon_sym_LBRACK,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(271),
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
    STATE(66),
    1,
    sym_binary_operator,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(277),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(273),
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
    ACTIONS(267),
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
    ACTIONS(235),
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
    ACTIONS(249),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(247),
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
    ACTIONS(253),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(251),
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
    ACTIONS(245),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(237),
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
    ACTIONS(217),
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
    ACTIONS(217),
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
    STATE(210),
    1,
    sym_import_as,
    STATE(360),
    1,
    sym_import_attribute,
    STATE(363),
    1,
    sym_attribute_context,
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
    STATE(208),
    1,
    aux_sym_in_expression_repeat1,
    STATE(210),
    1,
    sym_import_as,
    STATE(360),
    1,
    sym_import_attribute,
    STATE(363),
    1,
    sym_attribute_context,
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
    STATE(219),
    1,
    sym_import_as,
    STATE(362),
    1,
    sym_import_attribute,
    STATE(363),
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
    STATE(208),
    1,
    aux_sym_in_expression_repeat1,
    STATE(220),
    1,
    sym_import_as,
    STATE(357),
    1,
    sym_import_attribute,
    STATE(363),
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
    STATE(203),
    1,
    aux_sym_include_statement_repeat1,
    STATE(245),
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
    STATE(244),
    2,
    sym_attribute_ignore,
    sym_attribute_context,
    [11402] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(403),
    1,
    anon_sym_COLON,
    ACTIONS(408),
    1,
    anon_sym_ignore,
    STATE(245),
    1,
    sym_include_attribute,
    ACTIONS(405),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(411),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(203),
    2,
    sym_comment,
    aux_sym_include_statement_repeat1,
    STATE(244),
    2,
    sym_attribute_ignore,
    sym_attribute_context,
    [11434] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(399),
    1,
    anon_sym_ignore,
    ACTIONS(413),
    1,
    anon_sym_COLON,
    STATE(202),
    1,
    aux_sym_include_statement_repeat1,
    STATE(204),
    1,
    sym_comment,
    STATE(245),
    1,
    sym_include_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(415),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(244),
    2,
    sym_attribute_ignore,
    sym_attribute_context,
    [11468] = 10,
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
    STATE(205),
    1,
    sym_comment,
    STATE(204),
    3,
    sym_list_literal,
    sym_tuple_literal,
    sym_string_literal,
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
    STATE(210),
    1,
    sym_import_as,
    STATE(360),
    1,
    sym_import_attribute,
    STATE(363),
    1,
    sym_attribute_context,
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
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(385),
    1,
    anon_sym_as,
    ACTIONS(389),
    1,
    anon_sym_COLON,
    STATE(207),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_import_as,
    STATE(362),
    1,
    sym_import_attribute,
    STATE(363),
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
    [11567] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(421),
    1,
    anon_sym_COMMA,
    ACTIONS(426),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(208),
    2,
    sym_comment,
    aux_sym_in_expression_repeat1,
    ACTIONS(424),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_as,
    anon_sym_without,
    [11591] = 10,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(428),
    1,
    anon_sym_DOT,
    ACTIONS(430),
    1,
    anon_sym_COMMA,
    ACTIONS(432),
    1,
    anon_sym_COLON,
    ACTIONS(434),
    1,
    anon_sym_EQ,
    STATE(209),
    1,
    sym_comment,
    STATE(282),
    1,
    aux_sym_trans_statement_repeat1,
    STATE(332),
    1,
    aux_sym_assignment_expression_repeat1,
    ACTIONS(436),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11623] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(393),
    1,
    anon_sym_COLON,
    STATE(210),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_import_attribute,
    STATE(363),
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
    [11650] = 8,
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
    ACTIONS(438),
    1,
    ts_builtin_sym_end,
    STATE(211),
    1,
    sym_comment,
    STATE(222),
    1,
    aux_sym_source_repeat1,
    STATE(339),
    3,
    sym_line_statement,
    sym_raw_block,
    sym__NEWLINE,
    [11677] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(428),
    1,
    anon_sym_DOT,
    ACTIONS(434),
    1,
    anon_sym_EQ,
    STATE(212),
    1,
    sym_comment,
    STATE(332),
    1,
    aux_sym_assignment_expression_repeat1,
    ACTIONS(440),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(442),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11704] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(448),
    4,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_EQ,
    [11729] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(456),
    1,
    anon_sym_else,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(454),
    2,
    anon_sym_COLON,
    anon_sym_recursive,
    ACTIONS(458),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11756] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(426),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(424),
    5,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_as,
    anon_sym_without,
    [11777] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(462),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(460),
    3,
    anon_sym_COLON,
    anon_sym_if,
    anon_sym_recursive,
    [11802] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    STATE(217),
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
    [11827] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(468),
    1,
    anon_sym_COLON,
    ACTIONS(470),
    1,
    anon_sym_if,
    STATE(218),
    1,
    sym_comment,
    STATE(352),
    1,
    sym_ternary_expression,
    ACTIONS(472),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11856] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    STATE(219),
    1,
    sym_comment,
    STATE(360),
    1,
    sym_import_attribute,
    STATE(363),
    1,
    sym_attribute_context,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(387),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11883] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(474),
    1,
    anon_sym_COLON,
    STATE(220),
    1,
    sym_comment,
    STATE(363),
    1,
    sym_attribute_context,
    STATE(367),
    1,
    sym_import_attribute,
    ACTIONS(383),
    2,
    anon_sym_with,
    anon_sym_without,
    ACTIONS(476),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [11910] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(379),
    1,
    anon_sym_COMMA,
    STATE(208),
    1,
    aux_sym_in_expression_repeat1,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(480),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(478),
    3,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_without,
    [11935] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(482),
    1,
    ts_builtin_sym_end,
    ACTIONS(484),
    1,
    anon_sym_POUND,
    ACTIONS(487),
    1,
    aux_sym_comment_token2,
    STATE(222),
    2,
    sym_comment,
    aux_sym_source_repeat1,
    STATE(339),
    3,
    sym_line_statement,
    sym_raw_block,
    sym__NEWLINE,
    [11960] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(470),
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
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
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
    [12014] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(498),
    1,
    anon_sym_DOT,
    ACTIONS(500),
    1,
    anon_sym_LBRACK,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(502),
    2,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(504),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12038] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(506),
    1,
    anon_sym_COLON,
    ACTIONS(508),
    1,
    sym_identifier,
    STATE(302),
    1,
    sym_assignment_expression,
    ACTIONS(511),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(226),
    2,
    sym_comment,
    aux_sym_with_statement_repeat1,
    [12062] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(502),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(504),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12086] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(513),
    1,
    anon_sym_COMMA,
    ACTIONS(515),
    1,
    anon_sym_RBRACK,
    STATE(228),
    1,
    sym_comment,
    STATE(329),
    1,
    aux_sym_list_literal_repeat1,
    [12114] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(517),
    1,
    anon_sym_COMMA,
    ACTIONS(519),
    1,
    anon_sym_RBRACE,
    STATE(229),
    1,
    sym_comment,
    STATE(335),
    1,
    aux_sym_dict_literal_repeat1,
    [12142] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(521),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(523),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12166] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(527),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(525),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12186] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(529),
    1,
    anon_sym_COMMA,
    ACTIONS(531),
    1,
    anon_sym_EQ,
    STATE(232),
    1,
    sym_comment,
    STATE(296),
    1,
    aux_sym_list_literal_repeat1,
    [12214] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(533),
    1,
    anon_sym_COMMA,
    ACTIONS(535),
    1,
    anon_sym_RPAREN,
    STATE(233),
    1,
    sym_comment,
    STATE(291),
    1,
    aux_sym_list_literal_repeat1,
    [12242] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(470),
    1,
    anon_sym_if,
    ACTIONS(537),
    1,
    anon_sym_COLON,
    ACTIONS(539),
    1,
    anon_sym_recursive,
    STATE(234),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_ternary_expression,
    ACTIONS(541),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12268] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(543),
    1,
    anon_sym_COMMA,
    ACTIONS(545),
    1,
    anon_sym_RPAREN,
    STATE(235),
    1,
    sym_comment,
    STATE(324),
    1,
    aux_sym_list_literal_repeat1,
    [12296] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(547),
    1,
    anon_sym_COMMA,
    ACTIONS(549),
    1,
    anon_sym_RBRACK,
    STATE(236),
    1,
    sym_comment,
    STATE(334),
    1,
    aux_sym_list_literal_repeat1,
    [12324] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(553),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(551),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12344] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(517),
    1,
    anon_sym_COMMA,
    ACTIONS(555),
    1,
    anon_sym_RBRACE,
    STATE(238),
    1,
    sym_comment,
    STATE(321),
    1,
    aux_sym_dict_literal_repeat1,
    [12372] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(557),
    2,
    anon_sym_COLON,
    anon_sym_recursive,
    ACTIONS(559),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12396] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(561),
    1,
    sym_dec_literal,
    STATE(144),
    1,
    sym_big_dec_literal,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(563),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    [12420] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(565),
    1,
    anon_sym_COLON,
    ACTIONS(567),
    1,
    sym_identifier,
    STATE(241),
    1,
    sym_comment,
    STATE(243),
    1,
    aux_sym_with_statement_repeat1,
    STATE(302),
    1,
    sym_assignment_expression,
    ACTIONS(569),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12446] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(571),
    1,
    sym_dec_literal,
    STATE(164),
    1,
    sym_big_dec_literal,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(573),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    [12470] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(567),
    1,
    sym_identifier,
    ACTIONS(575),
    1,
    anon_sym_COLON,
    STATE(226),
    1,
    aux_sym_with_statement_repeat1,
    STATE(243),
    1,
    sym_comment,
    STATE(302),
    1,
    sym_assignment_expression,
    ACTIONS(577),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12496] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(581),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(579),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12516] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(585),
    2,
    sym__eof,
    aux_sym_comment_token2,
    ACTIONS(583),
    4,
    anon_sym_COLON,
    anon_sym_with,
    anon_sym_ignore,
    anon_sym_without,
    [12536] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(517),
    1,
    anon_sym_COMMA,
    ACTIONS(587),
    1,
    anon_sym_RBRACE,
    STATE(246),
    1,
    sym_comment,
    STATE(307),
    1,
    aux_sym_dict_literal_repeat1,
    [12564] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(247),
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
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(533),
    1,
    anon_sym_COMMA,
    ACTIONS(589),
    1,
    anon_sym_RPAREN,
    STATE(248),
    1,
    sym_comment,
    STATE(291),
    1,
    aux_sym_list_literal_repeat1,
    [12612] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(498),
    1,
    anon_sym_DOT,
    ACTIONS(500),
    1,
    anon_sym_LBRACK,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(521),
    2,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(523),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12636] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(591),
    1,
    anon_sym_COMMA,
    STATE(250),
    2,
    sym_comment,
    aux_sym_list_literal_repeat1,
    ACTIONS(448),
    3,
    anon_sym_RBRACK,
    anon_sym_RPAREN,
    anon_sym_EQ,
    [12658] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(594),
    1,
    anon_sym_COLON,
    STATE(251),
    1,
    sym_comment,
    STATE(359),
    1,
    sym_boolean_literal,
    ACTIONS(15),
    2,
    anon_sym_true,
    anon_sym_false,
    ACTIONS(596),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12682] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(252),
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
    [12702] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(598),
    1,
    sym_dec_literal,
    STATE(138),
    1,
    sym_big_dec_literal,
    STATE(253),
    1,
    sym_comment,
    ACTIONS(600),
    3,
    sym_oct_literal,
    sym_bin_literal,
    sym_hex_literal,
    [12726] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(602),
    1,
    anon_sym_COMMA,
    ACTIONS(604),
    1,
    anon_sym_RPAREN,
    STATE(254),
    1,
    sym_comment,
    STATE(317),
    1,
    aux_sym_list_literal_repeat1,
    [12754] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    ACTIONS(608),
    1,
    anon_sym_RBRACK,
    STATE(255),
    1,
    sym_comment,
    STATE(318),
    1,
    aux_sym_list_literal_repeat1,
    [12782] = 9,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(13),
    1,
    aux_sym_comment_token2,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(610),
    1,
    sym__eof,
    STATE(256),
    1,
    sym_comment,
    STATE(353),
    1,
    sym__END,
    STATE(376),
    1,
    sym__NEWLINE,
    [12810] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(470),
    1,
    anon_sym_if,
    ACTIONS(612),
    1,
    anon_sym_COLON,
    STATE(257),
    1,
    sym_comment,
    STATE(344),
    1,
    sym_ternary_expression,
    ACTIONS(614),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12833] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    anon_sym_SQUOTE,
    ACTIONS(620),
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
    aux_sym_comment_token2,
    ACTIONS(624),
    1,
    anon_sym_POUND_RBRACE,
    STATE(259),
    1,
    sym_comment,
    STATE(288),
    1,
    aux_sym_comment_repeat1,
    ACTIONS(622),
    2,
    anon_sym_POUND,
    aux_sym_comment_token3,
    [12879] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(626),
    1,
    anon_sym_DQUOTE,
    STATE(260),
    1,
    sym_comment,
    STATE(268),
    1,
    aux_sym_string_literal_repeat1,
    ACTIONS(628),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [12902] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(630),
    1,
    anon_sym_COLON,
    ACTIONS(632),
    1,
    sym_identifier,
    STATE(261),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_assignment_expression,
    ACTIONS(634),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [12925] = 8,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(13),
    1,
    aux_sym_comment_token2,
    ACTIONS(610),
    1,
    sym__eof,
    ACTIONS(636),
    1,
    anon_sym_COLON,
    STATE(262),
    1,
    sym_comment,
    STATE(353),
    1,
    sym__END,
    STATE(376),
    1,
    sym__NEWLINE,
    [12950] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(638),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12973] = 8,
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
    ACTIONS(640),
    1,
    sym_identifier,
    STATE(257),
    1,
    sym_string_literal,
    STATE(264),
    1,
    sym_comment,
    [12998] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(642),
    1,
    anon_sym_SQUOTE,
    ACTIONS(644),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    STATE(265),
    2,
    sym_comment,
    aux_sym_string_literal_repeat2,
    [13019] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(647),
    1,
    anon_sym_DQUOTE,
    ACTIONS(649),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    STATE(266),
    2,
    sym_comment,
    aux_sym_string_literal_repeat1,
    [13040] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(652),
    1,
    anon_sym_COLON,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(654),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13063] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(656),
    1,
    anon_sym_DQUOTE,
    STATE(266),
    1,
    aux_sym_string_literal_repeat1,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(628),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13086] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(658),
    1,
    anon_sym_COLON,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(660),
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
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(662),
    1,
    anon_sym_COLON,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(664),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13132] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(656),
    1,
    anon_sym_SQUOTE,
    STATE(265),
    1,
    aux_sym_string_literal_repeat2,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13155] = 8,
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
    ACTIONS(666),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_string_literal,
    STATE(272),
    1,
    sym_comment,
    [13180] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(450),
    1,
    anon_sym_DOT,
    ACTIONS(452),
    1,
    anon_sym_LBRACK,
    ACTIONS(668),
    1,
    anon_sym_COLON,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(670),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13203] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(626),
    1,
    anon_sym_SQUOTE,
    STATE(271),
    1,
    aux_sym_string_literal_repeat2,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13226] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(672),
    1,
    anon_sym_SQUOTE,
    STATE(258),
    1,
    aux_sym_string_literal_repeat2,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13249] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(672),
    1,
    anon_sym_DQUOTE,
    STATE(276),
    1,
    sym_comment,
    STATE(279),
    1,
    aux_sym_string_literal_repeat1,
    ACTIONS(628),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13272] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(677),
    1,
    anon_sym_POUND_RBRACE,
    ACTIONS(674),
    2,
    anon_sym_POUND,
    aux_sym_comment_token3,
    STATE(277),
    2,
    sym_comment,
    aux_sym_comment_repeat1,
    [13293] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(679),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13316] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(616),
    1,
    anon_sym_DQUOTE,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    STATE(266),
    1,
    aux_sym_string_literal_repeat1,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(628),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13339] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(681),
    1,
    anon_sym_DQUOTE,
    STATE(280),
    1,
    sym_comment,
    STATE(283),
    1,
    aux_sym_string_literal_repeat1,
    ACTIONS(628),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13362] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(681),
    1,
    anon_sym_SQUOTE,
    STATE(281),
    1,
    sym_comment,
    STATE(287),
    1,
    aux_sym_string_literal_repeat2,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13385] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(430),
    1,
    anon_sym_COMMA,
    ACTIONS(683),
    1,
    anon_sym_COLON,
    STATE(282),
    1,
    sym_comment,
    STATE(284),
    1,
    aux_sym_trans_statement_repeat1,
    ACTIONS(685),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13408] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(687),
    1,
    anon_sym_DQUOTE,
    STATE(266),
    1,
    aux_sym_string_literal_repeat1,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(628),
    2,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13431] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(440),
    1,
    anon_sym_COLON,
    ACTIONS(689),
    1,
    anon_sym_COMMA,
    ACTIONS(442),
    2,
    sym__eof,
    aux_sym_comment_token2,
    STATE(284),
    2,
    sym_comment,
    aux_sym_trans_statement_repeat1,
    [13452] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(692),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13475] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(430),
    1,
    anon_sym_COMMA,
    ACTIONS(432),
    1,
    anon_sym_COLON,
    STATE(282),
    1,
    aux_sym_trans_statement_repeat1,
    STATE(286),
    1,
    sym_comment,
    ACTIONS(436),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13498] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(687),
    1,
    anon_sym_SQUOTE,
    STATE(265),
    1,
    aux_sym_string_literal_repeat2,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(618),
    2,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [13521] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    ACTIONS(694),
    1,
    anon_sym_POUND_RBRACE,
    STATE(277),
    1,
    aux_sym_comment_repeat1,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(622),
    2,
    anon_sym_POUND,
    aux_sym_comment_token3,
    [13544] = 8,
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
    ACTIONS(696),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_string_literal,
    STATE(289),
    1,
    sym_comment,
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
    ACTIONS(610),
    1,
    sym__eof,
    STATE(290),
    1,
    sym_comment,
    STATE(351),
    1,
    sym__END,
    STATE(376),
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
    ACTIONS(179),
    1,
    anon_sym_RPAREN,
    ACTIONS(698),
    1,
    anon_sym_COMMA,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(291),
    1,
    sym_comment,
    [13613] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(424),
    1,
    anon_sym_in,
    ACTIONS(700),
    1,
    anon_sym_COMMA,
    STATE(292),
    2,
    sym_comment,
    aux_sym_in_expression_repeat1,
    [13633] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(703),
    1,
    anon_sym_RPAREN,
    STATE(293),
    1,
    sym_comment,
    [13655] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(705),
    1,
    sym__raw_char,
    ACTIONS(707),
    1,
    sym_raw_end,
    STATE(294),
    1,
    sym_comment,
    STATE(330),
    1,
    aux_sym_raw_block_repeat1,
    [13677] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(709),
    1,
    anon_sym_COMMA,
    ACTIONS(711),
    1,
    anon_sym_in,
    STATE(295),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_in_expression_repeat1,
    [13699] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(529),
    1,
    anon_sym_COMMA,
    ACTIONS(713),
    1,
    anon_sym_EQ,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(296),
    1,
    sym_comment,
    [13721] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(715),
    1,
    anon_sym_COLON,
    STATE(297),
    1,
    sym_comment,
    [13743] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(717),
    1,
    anon_sym_COLON,
    STATE(298),
    1,
    sym_comment,
    [13765] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(719),
    1,
    anon_sym_COMMA,
    ACTIONS(722),
    1,
    anon_sym_RPAREN,
    STATE(299),
    2,
    sym_comment,
    aux_sym_function_call_repeat1,
    [13785] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(724),
    1,
    sym__raw_char,
    ACTIONS(727),
    1,
    sym_raw_end,
    STATE(300),
    2,
    sym_comment,
    aux_sym_raw_block_repeat1,
    [13805] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(729),
    1,
    anon_sym_COLON,
    STATE(301),
    1,
    sym_comment,
    [13827] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(731),
    2,
    anon_sym_COLON,
    sym_identifier,
    ACTIONS(733),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [13845] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(735),
    1,
    anon_sym_COMMA,
    ACTIONS(737),
    1,
    anon_sym_RPAREN,
    STATE(299),
    1,
    aux_sym_function_call_repeat1,
    STATE(303),
    1,
    sym_comment,
    [13867] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(428),
    1,
    anon_sym_DOT,
    ACTIONS(739),
    1,
    anon_sym_EQ,
    STATE(304),
    1,
    sym_comment,
    STATE(316),
    1,
    aux_sym_assignment_expression_repeat1,
    [13889] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(741),
    1,
    anon_sym_COLON,
    STATE(305),
    1,
    sym_comment,
    [13911] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    ACTIONS(746),
    1,
    anon_sym_RBRACE,
    STATE(306),
    2,
    sym_comment,
    aux_sym_dict_literal_repeat1,
    [13931] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(517),
    1,
    anon_sym_COMMA,
    ACTIONS(748),
    1,
    anon_sym_RBRACE,
    STATE(306),
    1,
    aux_sym_dict_literal_repeat1,
    STATE(307),
    1,
    sym_comment,
    [13953] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(735),
    1,
    anon_sym_COMMA,
    ACTIONS(750),
    1,
    anon_sym_RPAREN,
    STATE(299),
    1,
    aux_sym_function_call_repeat1,
    STATE(308),
    1,
    sym_comment,
    [13975] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(752),
    3,
    anon_sym_DQUOTE,
    aux_sym_string_literal_token1,
    anon_sym_BSLASH_DQUOTE,
    [13993] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(754),
    1,
    anon_sym_RBRACK,
    STATE(310),
    1,
    sym_comment,
    [14015] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(103),
    1,
    anon_sym_DQUOTE,
    ACTIONS(105),
    1,
    anon_sym_SQUOTE,
    STATE(311),
    1,
    sym_comment,
    STATE(389),
    1,
    sym_string_literal,
    [14037] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(735),
    1,
    anon_sym_COMMA,
    ACTIONS(756),
    1,
    anon_sym_RPAREN,
    STATE(308),
    1,
    aux_sym_function_call_repeat1,
    STATE(312),
    1,
    sym_comment,
    [14059] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(758),
    1,
    anon_sym_DOT,
    ACTIONS(761),
    1,
    anon_sym_EQ,
    STATE(313),
    2,
    sym_comment,
    aux_sym_assignment_expression_repeat1,
    [14079] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(763),
    3,
    anon_sym_SQUOTE,
    aux_sym_string_literal_token2,
    anon_sym_BSLASH_SQUOTE,
    [14097] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(440),
    2,
    anon_sym_COMMA,
    anon_sym_COLON,
    ACTIONS(442),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14115] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(428),
    1,
    anon_sym_DOT,
    ACTIONS(765),
    1,
    anon_sym_EQ,
    STATE(313),
    1,
    aux_sym_assignment_expression_repeat1,
    STATE(316),
    1,
    sym_comment,
    [14137] = 7,
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
    ACTIONS(767),
    1,
    anon_sym_COMMA,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(317),
    1,
    sym_comment,
    [14159] = 7,
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
    ACTIONS(769),
    1,
    anon_sym_COMMA,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(318),
    1,
    sym_comment,
    [14181] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(771),
    1,
    anon_sym_LPAREN,
    ACTIONS(773),
    1,
    sym_identifier,
    STATE(319),
    1,
    sym_comment,
    STATE(364),
    1,
    sym_function_call,
    [14203] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(775),
    1,
    anon_sym_RPAREN,
    STATE(320),
    1,
    sym_comment,
    [14225] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(517),
    1,
    anon_sym_COMMA,
    ACTIONS(777),
    1,
    anon_sym_RBRACE,
    STATE(306),
    1,
    aux_sym_dict_literal_repeat1,
    STATE(321),
    1,
    sym_comment,
    [14247] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(709),
    1,
    anon_sym_COMMA,
    ACTIONS(779),
    1,
    anon_sym_in,
    STATE(292),
    1,
    aux_sym_in_expression_repeat1,
    STATE(322),
    1,
    sym_comment,
    [14269] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(781),
    1,
    anon_sym_RBRACK,
    STATE(323),
    1,
    sym_comment,
    [14291] = 7,
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
    ACTIONS(783),
    1,
    anon_sym_COMMA,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(324),
    1,
    sym_comment,
    [14313] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(735),
    1,
    anon_sym_COMMA,
    ACTIONS(785),
    1,
    anon_sym_RPAREN,
    STATE(325),
    1,
    sym_comment,
    STATE(338),
    1,
    aux_sym_function_call_repeat1,
    [14335] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(787),
    1,
    anon_sym_RPAREN,
    STATE(326),
    1,
    sym_comment,
    [14357] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(789),
    1,
    anon_sym_RBRACK,
    STATE(327),
    1,
    sym_comment,
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
    ACTIONS(444),
    1,
    anon_sym_DOT,
    ACTIONS(446),
    1,
    anon_sym_LBRACK,
    ACTIONS(791),
    1,
    anon_sym_RBRACK,
    STATE(328),
    1,
    sym_comment,
    [14401] = 7,
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
    ACTIONS(793),
    1,
    anon_sym_COMMA,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(329),
    1,
    sym_comment,
    [14423] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(705),
    1,
    sym__raw_char,
    ACTIONS(795),
    1,
    sym_raw_end,
    STATE(300),
    1,
    aux_sym_raw_block_repeat1,
    STATE(330),
    1,
    sym_comment,
    [14445] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(620),
    1,
    aux_sym_comment_token2,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(797),
    3,
    anon_sym_POUND,
    aux_sym_comment_token3,
    anon_sym_POUND_RBRACE,
    [14463] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(428),
    1,
    anon_sym_DOT,
    ACTIONS(799),
    1,
    anon_sym_EQ,
    STATE(313),
    1,
    aux_sym_assignment_expression_repeat1,
    STATE(332),
    1,
    sym_comment,
    [14485] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(735),
    1,
    anon_sym_COMMA,
    ACTIONS(801),
    1,
    anon_sym_RPAREN,
    STATE(303),
    1,
    aux_sym_function_call_repeat1,
    STATE(333),
    1,
    sym_comment,
    [14507] = 7,
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
    ACTIONS(803),
    1,
    anon_sym_COMMA,
    STATE(250),
    1,
    aux_sym_list_literal_repeat1,
    STATE(334),
    1,
    sym_comment,
    [14529] = 7,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(517),
    1,
    anon_sym_COMMA,
    ACTIONS(805),
    1,
    anon_sym_RBRACE,
    STATE(306),
    1,
    aux_sym_dict_literal_repeat1,
    STATE(335),
    1,
    sym_comment,
    [14551] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(807),
    1,
    anon_sym_COLON,
    ACTIONS(809),
    1,
    anon_sym_recursive,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(811),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14571] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(813),
    1,
    anon_sym_COLON,
    ACTIONS(815),
    1,
    sym_identifier,
    STATE(337),
    1,
    sym_comment,
    ACTIONS(817),
    2,
    sym__eof,
    aux_sym_comment_token2,
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
    ACTIONS(735),
    1,
    anon_sym_COMMA,
    ACTIONS(819),
    1,
    anon_sym_RPAREN,
    STATE(299),
    1,
    aux_sym_function_call_repeat1,
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
    ACTIONS(761),
    2,
    anon_sym_DOT,
    anon_sym_EQ,
    [14647] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(773),
    1,
    sym_identifier,
    STATE(341),
    1,
    sym_comment,
    STATE(375),
    1,
    sym_function_call,
    [14666] = 5,
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
    ACTIONS(825),
    2,
    sym__raw_char,
    sym_raw_end,
    [14683] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(827),
    1,
    anon_sym_COLON,
    STATE(343),
    1,
    sym_comment,
    ACTIONS(829),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14700] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(831),
    1,
    anon_sym_COLON,
    STATE(344),
    1,
    sym_comment,
    ACTIONS(833),
    2,
    sym__eof,
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
    ACTIONS(835),
    1,
    sym_dec_literal,
    ACTIONS(837),
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
    ACTIONS(841),
    1,
    anon_sym_POUND,
    STATE(346),
    1,
    sym_comment,
    ACTIONS(839),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14753] = 6,
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
    STATE(347),
    1,
    sym_comment,
    [14772] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(773),
    1,
    sym_identifier,
    STATE(348),
    1,
    sym_comment,
    STATE(373),
    1,
    sym_function_call,
    [14791] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(349),
    1,
    sym_comment,
    ACTIONS(424),
    2,
    anon_sym_COMMA,
    anon_sym_in,
    [14808] = 6,
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
    STATE(350),
    1,
    sym_comment,
    [14827] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(845),
    1,
    anon_sym_POUND,
    STATE(351),
    1,
    sym_comment,
    ACTIONS(843),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14844] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(490),
    1,
    anon_sym_COLON,
    STATE(352),
    1,
    sym_comment,
    ACTIONS(492),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14861] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(849),
    1,
    anon_sym_POUND,
    STATE(353),
    1,
    sym_comment,
    ACTIONS(847),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [14878] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(851),
    1,
    anon_sym_COLON,
    STATE(354),
    1,
    sym_comment,
    ACTIONS(853),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14895] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(855),
    1,
    sym_identifier,
    STATE(234),
    1,
    sym_in_expression,
    STATE(355),
    1,
    sym_comment,
    [14914] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(807),
    1,
    anon_sym_COLON,
    STATE(356),
    1,
    sym_comment,
    ACTIONS(811),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14931] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(474),
    1,
    anon_sym_COLON,
    STATE(357),
    1,
    sym_comment,
    ACTIONS(476),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14948] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(857),
    1,
    sym_identifier,
    STATE(315),
    1,
    sym_assignment_expression,
    STATE(358),
    1,
    sym_comment,
    [14967] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(859),
    1,
    anon_sym_COLON,
    STATE(359),
    1,
    sym_comment,
    ACTIONS(861),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [14984] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(393),
    1,
    anon_sym_COLON,
    STATE(360),
    1,
    sym_comment,
    ACTIONS(395),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15001] = 6,
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
    anon_sym_LBRACK,
    STATE(109),
    1,
    sym_list_literal,
    STATE(361),
    1,
    sym_comment,
    [15020] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(381),
    1,
    anon_sym_COLON,
    STATE(362),
    1,
    sym_comment,
    ACTIONS(387),
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
    ACTIONS(863),
    1,
    anon_sym_COLON,
    STATE(363),
    1,
    sym_comment,
    ACTIONS(865),
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
    ACTIONS(867),
    1,
    anon_sym_COLON,
    STATE(364),
    1,
    sym_comment,
    ACTIONS(869),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15071] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(871),
    1,
    anon_sym_COLON,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(873),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15088] = 6,
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
    STATE(366),
    1,
    sym_comment,
    [15107] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(879),
    1,
    anon_sym_COLON,
    STATE(367),
    1,
    sym_comment,
    ACTIONS(881),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15124] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(883),
    1,
    anon_sym_COLON,
    STATE(368),
    1,
    sym_comment,
    ACTIONS(885),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15141] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(889),
    1,
    anon_sym_POUND,
    STATE(369),
    1,
    sym_comment,
    ACTIONS(887),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
    [15158] = 6,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(891),
    1,
    sym_dec_literal,
    ACTIONS(893),
    1,
    anon_sym__,
    STATE(370),
    1,
    sym_comment,
    [15177] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(895),
    1,
    anon_sym_COLON,
    STATE(371),
    1,
    sym_comment,
    ACTIONS(897),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15194] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(901),
    1,
    anon_sym_POUND,
    STATE(372),
    1,
    sym_comment,
    ACTIONS(899),
    2,
    ts_builtin_sym_end,
    aux_sym_comment_token2,
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
    ACTIONS(5),
    1,
    aux_sym_comment_token2,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    STATE(374),
    1,
    sym_comment,
    ACTIONS(722),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15245] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(907),
    1,
    anon_sym_COLON,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(909),
    2,
    sym__eof,
    aux_sym_comment_token2,
    [15262] = 5,
    ACTIONS(3),
    1,
    anon_sym_POUND_POUND,
    ACTIONS(7),
    1,
    anon_sym_LBRACE_POUND,
    ACTIONS(913),
    1,
    anon_sym_POUND,
    STATE(376),
    1,
    sym_comment,
    ACTIONS(911),
    2,
    ts_builtin_sym_end,
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
    ACTIONS(915),
    1,
    anon_sym_RPAREN,
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
    ACTIONS(917),
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
    ACTIONS(919),
    1,
    sym_dec_literal,
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
    ACTIONS(921),
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
    ACTIONS(923),
    1,
    anon_sym_LPAREN,
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
    ACTIONS(515),
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
    ACTIONS(925),
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
    ACTIONS(927),
    1,
    anon_sym_import,
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
    ACTIONS(929),
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
    ACTIONS(931),
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
    ACTIONS(265),
    1,
    anon_sym_LPAREN,
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
    sym_dec_literal,
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
    anon_sym_import,
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
    sym_identifier,
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
    anon_sym_context,
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
    sym_identifier,
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
    ACTIONS(608),
    1,
    anon_sym_RBRACK,
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
    ACTIONS(947),
    1,
    sym_dec_literal,
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
    sym_identifier,
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
    ACTIONS(589),
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
    ACTIONS(549),
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
    ACTIONS(620),
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
    [SMALL_STATE(67)] = 5653,
    [SMALL_STATE(68)] = 5736,
    [SMALL_STATE(69)] = 5819,
    [SMALL_STATE(70)] = 5902,
    [SMALL_STATE(71)] = 5987,
    [SMALL_STATE(72)] = 6072,
    [SMALL_STATE(73)] = 6117,
    [SMALL_STATE(74)] = 6162,
    [SMALL_STATE(75)] = 6206,
    [SMALL_STATE(76)] = 6250,
    [SMALL_STATE(77)] = 6294,
    [SMALL_STATE(78)] = 6338,
    [SMALL_STATE(79)] = 6384,
    [SMALL_STATE(80)] = 6432,
    [SMALL_STATE(81)] = 6480,
    [SMALL_STATE(82)] = 6524,
    [SMALL_STATE(83)] = 6568,
    [SMALL_STATE(84)] = 6614,
    [SMALL_STATE(85)] = 6658,
    [SMALL_STATE(86)] = 6702,
    [SMALL_STATE(87)] = 6744,
    [SMALL_STATE(88)] = 6788,
    [SMALL_STATE(89)] = 6830,
    [SMALL_STATE(90)] = 6874,
    [SMALL_STATE(91)] = 6922,
    [SMALL_STATE(92)] = 6966,
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
    [SMALL_STATE(204)] = 11434,
    [SMALL_STATE(205)] = 11468,
    [SMALL_STATE(206)] = 11501,
    [SMALL_STATE(207)] = 11534,
    [SMALL_STATE(208)] = 11567,
    [SMALL_STATE(209)] = 11591,
    [SMALL_STATE(210)] = 11623,
    [SMALL_STATE(211)] = 11650,
    [SMALL_STATE(212)] = 11677,
    [SMALL_STATE(213)] = 11704,
    [SMALL_STATE(214)] = 11729,
    [SMALL_STATE(215)] = 11756,
    [SMALL_STATE(216)] = 11777,
    [SMALL_STATE(217)] = 11802,
    [SMALL_STATE(218)] = 11827,
    [SMALL_STATE(219)] = 11856,
    [SMALL_STATE(220)] = 11883,
    [SMALL_STATE(221)] = 11910,
    [SMALL_STATE(222)] = 11935,
    [SMALL_STATE(223)] = 11960,
    [SMALL_STATE(224)] = 11989,
    [SMALL_STATE(225)] = 12014,
    [SMALL_STATE(226)] = 12038,
    [SMALL_STATE(227)] = 12062,
    [SMALL_STATE(228)] = 12086,
    [SMALL_STATE(229)] = 12114,
    [SMALL_STATE(230)] = 12142,
    [SMALL_STATE(231)] = 12166,
    [SMALL_STATE(232)] = 12186,
    [SMALL_STATE(233)] = 12214,
    [SMALL_STATE(234)] = 12242,
    [SMALL_STATE(235)] = 12268,
    [SMALL_STATE(236)] = 12296,
    [SMALL_STATE(237)] = 12324,
    [SMALL_STATE(238)] = 12344,
    [SMALL_STATE(239)] = 12372,
    [SMALL_STATE(240)] = 12396,
    [SMALL_STATE(241)] = 12420,
    [SMALL_STATE(242)] = 12446,
    [SMALL_STATE(243)] = 12470,
    [SMALL_STATE(244)] = 12496,
    [SMALL_STATE(245)] = 12516,
    [SMALL_STATE(246)] = 12536,
    [SMALL_STATE(247)] = 12564,
    [SMALL_STATE(248)] = 12584,
    [SMALL_STATE(249)] = 12612,
    [SMALL_STATE(250)] = 12636,
    [SMALL_STATE(251)] = 12658,
    [SMALL_STATE(252)] = 12682,
    [SMALL_STATE(253)] = 12702,
    [SMALL_STATE(254)] = 12726,
    [SMALL_STATE(255)] = 12754,
    [SMALL_STATE(256)] = 12782,
    [SMALL_STATE(257)] = 12810,
    [SMALL_STATE(258)] = 12833,
    [SMALL_STATE(259)] = 12856,
    [SMALL_STATE(260)] = 12879,
    [SMALL_STATE(261)] = 12902,
    [SMALL_STATE(262)] = 12925,
    [SMALL_STATE(263)] = 12950,
    [SMALL_STATE(264)] = 12973,
    [SMALL_STATE(265)] = 12998,
    [SMALL_STATE(266)] = 13019,
    [SMALL_STATE(267)] = 13040,
    [SMALL_STATE(268)] = 13063,
    [SMALL_STATE(269)] = 13086,
    [SMALL_STATE(270)] = 13109,
    [SMALL_STATE(271)] = 13132,
    [SMALL_STATE(272)] = 13155,
    [SMALL_STATE(273)] = 13180,
    [SMALL_STATE(274)] = 13203,
    [SMALL_STATE(275)] = 13226,
    [SMALL_STATE(276)] = 13249,
    [SMALL_STATE(277)] = 13272,
    [SMALL_STATE(278)] = 13293,
    [SMALL_STATE(279)] = 13316,
    [SMALL_STATE(280)] = 13339,
    [SMALL_STATE(281)] = 13362,
    [SMALL_STATE(282)] = 13385,
    [SMALL_STATE(283)] = 13408,
    [SMALL_STATE(284)] = 13431,
    [SMALL_STATE(285)] = 13452,
    [SMALL_STATE(286)] = 13475,
    [SMALL_STATE(287)] = 13498,
    [SMALL_STATE(288)] = 13521,
    [SMALL_STATE(289)] = 13544,
    [SMALL_STATE(290)] = 13569,
    [SMALL_STATE(291)] = 13591,
    [SMALL_STATE(292)] = 13613,
    [SMALL_STATE(293)] = 13633,
    [SMALL_STATE(294)] = 13655,
    [SMALL_STATE(295)] = 13677,
    [SMALL_STATE(296)] = 13699,
    [SMALL_STATE(297)] = 13721,
    [SMALL_STATE(298)] = 13743,
    [SMALL_STATE(299)] = 13765,
    [SMALL_STATE(300)] = 13785,
    [SMALL_STATE(301)] = 13805,
    [SMALL_STATE(302)] = 13827,
    [SMALL_STATE(303)] = 13845,
    [SMALL_STATE(304)] = 13867,
    [SMALL_STATE(305)] = 13889,
    [SMALL_STATE(306)] = 13911,
    [SMALL_STATE(307)] = 13931,
    [SMALL_STATE(308)] = 13953,
    [SMALL_STATE(309)] = 13975,
    [SMALL_STATE(310)] = 13993,
    [SMALL_STATE(311)] = 14015,
    [SMALL_STATE(312)] = 14037,
    [SMALL_STATE(313)] = 14059,
    [SMALL_STATE(314)] = 14079,
    [SMALL_STATE(315)] = 14097,
    [SMALL_STATE(316)] = 14115,
    [SMALL_STATE(317)] = 14137,
    [SMALL_STATE(318)] = 14159,
    [SMALL_STATE(319)] = 14181,
    [SMALL_STATE(320)] = 14203,
    [SMALL_STATE(321)] = 14225,
    [SMALL_STATE(322)] = 14247,
    [SMALL_STATE(323)] = 14269,
    [SMALL_STATE(324)] = 14291,
    [SMALL_STATE(325)] = 14313,
    [SMALL_STATE(326)] = 14335,
    [SMALL_STATE(327)] = 14357,
    [SMALL_STATE(328)] = 14379,
    [SMALL_STATE(329)] = 14401,
    [SMALL_STATE(330)] = 14423,
    [SMALL_STATE(331)] = 14445,
    [SMALL_STATE(332)] = 14463,
    [SMALL_STATE(333)] = 14485,
    [SMALL_STATE(334)] = 14507,
    [SMALL_STATE(335)] = 14529,
    [SMALL_STATE(336)] = 14551,
    [SMALL_STATE(337)] = 14571,
    [SMALL_STATE(338)] = 14591,
    [SMALL_STATE(339)] = 14613,
    [SMALL_STATE(340)] = 14630,
    [SMALL_STATE(341)] = 14647,
    [SMALL_STATE(342)] = 14666,
    [SMALL_STATE(343)] = 14683,
    [SMALL_STATE(344)] = 14700,
    [SMALL_STATE(345)] = 14717,
    [SMALL_STATE(346)] = 14736,
    [SMALL_STATE(347)] = 14753,
    [SMALL_STATE(348)] = 14772,
    [SMALL_STATE(349)] = 14791,
    [SMALL_STATE(350)] = 14808,
    [SMALL_STATE(351)] = 14827,
    [SMALL_STATE(352)] = 14844,
    [SMALL_STATE(353)] = 14861,
    [SMALL_STATE(354)] = 14878,
    [SMALL_STATE(355)] = 14895,
    [SMALL_STATE(356)] = 14914,
    [SMALL_STATE(357)] = 14931,
    [SMALL_STATE(358)] = 14948,
    [SMALL_STATE(359)] = 14967,
    [SMALL_STATE(360)] = 14984,
    [SMALL_STATE(361)] = 15001,
    [SMALL_STATE(362)] = 15020,
    [SMALL_STATE(363)] = 15037,
    [SMALL_STATE(364)] = 15054,
    [SMALL_STATE(365)] = 15071,
    [SMALL_STATE(366)] = 15088,
    [SMALL_STATE(367)] = 15107,
    [SMALL_STATE(368)] = 15124,
    [SMALL_STATE(369)] = 15141,
    [SMALL_STATE(370)] = 15158,
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
    SHIFT(259),
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
    SHIFT(240),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(381),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [27] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [29] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(11),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [33] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(276),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(275),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(354),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(251),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(337),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(397),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(341),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(264),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(319),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(289),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(311),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(205),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(355),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(406),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(152),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(350),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(253),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(401),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(143),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(6),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(8),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(260),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(274),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(120),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(361),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(163),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(176),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(242),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(394),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(15),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(280),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(281),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(182),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [141] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(347),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(395),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [149] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [151] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [153] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [155] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [157] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(400),
    [159] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [161] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(123),
    [163] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(382),
    [165] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [167] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(183),
    [169] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(402),
    [171] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [173] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(380),
    [175] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(194),
    [177] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [179] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [181] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [183] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(193),
    [185] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [187] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [189] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [191] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [193] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [195] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(174),
    [197] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [199] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(170),
    [201] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [203] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [205] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [207] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 2, 0, 0),
    [209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 2, 0, 0),
    [211] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [215] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 3, 0, 0),
    [217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 3, 0, 0),
    [219] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 5, 0, 0),
    [221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 5, 0, 0),
    [223] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 2, 0, 0),
    [225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 2, 0, 0),
    [227] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 5, 0, 0),
    [229] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 5, 0, 0),
    [231] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_number_literal, 2, 0, 0),
    [233] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(366),
    [235] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_number_literal, 2, 0, 0),
    [237] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_number_literal, 1, 0, 0),
    [239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(345),
    [241] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(396),
    [243] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(404),
    [245] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_number_literal, 1, 0, 0),
    [247] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 4, 0, 0),
    [249] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 4, 0, 0),
    [251] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 4, 0, 0),
    [253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 4, 0, 0),
    [255] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tuple_literal, 2, 0, 0),
    [257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tuple_literal, 2, 0, 0),
    [259] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_list_literal, 3, 0, 0),
    [261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_list_literal, 3, 0, 0),
    [263] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_primary_expression, 1, 0, 0),
    [265] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primary_expression, 1, 0, 0),
    [269] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [271] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(197),
    [273] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_expression, 1, 0, 0),
    [275] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(3),
    [277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_expression, 1, 0, 0),
    [279] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(4),
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
    SHIFT(370),
    [295] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(388),
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
    REDUCE(sym_unary_operator, 1, 0, 0),
    [377] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_binary_operator, 1, 0, 0),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(392),
    [381] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 3, 0, 0),
    [383] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(391),
    [385] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(390),
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
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(391),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(386),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
    [413] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_include_statement, 2, 0, 0),
    [415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_include_statement, 2, 0, 0),
    [417] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(9),
    [419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(204),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    SHIFT_REPEAT(392),
    [424] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    [426] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    [428] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(399),
    [430] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(358),
    [432] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_trans_statement, 2, 0, 0),
    [434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_trans_statement, 2, 0, 0),
    [438] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_source, 1, 0, 0),
    [440] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_trans_statement_repeat1, 2, 0, 0),
    [442] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_trans_statement_repeat1, 2, 0, 0),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [448] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_list_literal_repeat1, 2, 0, 0),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(37),
    [452] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [454] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ternary_expression, 2, 0, 0),
    [456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [458] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ternary_expression, 2, 0, 0),
    [460] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_in_expression, 3, 0, 1),
    [462] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_expression, 3, 0, 1),
    [464] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_as, 2, 0, 0),
    [466] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_as, 2, 0, 0),
    [468] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_set_statement, 4, 0, 0),
    [470] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(50),
    [472] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_statement, 4, 0, 0),
    [474] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_statement, 5, 0, 0),
    [476] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_statement, 5, 0, 0),
    [478] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_as, 3, 0, 0),
    [480] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_as, 3, 0, 0),
    [482] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_source_repeat1, 2, 0, 0),
    [484] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_source_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [487] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_source_repeat1, 2, 0, 0),
    SHIFT_REPEAT(369),
    [490] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_set_statement, 5, 0, 0),
    [492] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_statement, 5, 0, 0),
    [494] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_in_expression, 4, 0, 3),
    [496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_expression, 4, 0, 3),
    [498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [500] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [502] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_assignment_expression, 4, 0, 0),
    [504] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_assignment_expression, 4, 0, 0),
    [506] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_with_statement_repeat1, 2, 0, 0),
    [508] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_with_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_with_statement_repeat1, 2, 0, 0),
    [513] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [515] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [517] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [519] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [521] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_assignment_expression, 3, 0, 0),
    [523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_assignment_expression, 3, 0, 0),
    [525] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_attribute_context, 2, 0, 0),
    [527] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attribute_context, 2, 0, 0),
    [529] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [531] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(52),
    [533] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(17),
    [535] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [537] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_for_statement, 2, 0, 0),
    [539] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(356),
    [541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_for_statement, 2, 0, 0),
    [543] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [545] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(185),
    [547] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(20),
    [549] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(188),
    [551] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_attribute_ignore, 2, 0, 0),
    [553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attribute_ignore, 2, 0, 0),
    [555] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [557] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_ternary_expression, 4, 0, 0),
    [559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_ternary_expression, 4, 0, 0),
    [561] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [563] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [565] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_with_statement, 1, 0, 0),
    [567] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(304),
    [569] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_with_statement, 1, 0, 0),
    [571] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [573] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(164),
    [575] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_with_statement, 2, 0, 0),
    [577] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_with_statement, 2, 0, 0),
    [579] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_include_attribute, 1, 0, 0),
    [581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_include_attribute, 1, 0, 0),
    [583] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
    [585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
    [587] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [589] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [591] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_list_literal_repeat1, 2, 0, 0),
    SHIFT_REPEAT(51),
    [594] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_autoescape_statement, 1, 0, 0),
    [596] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_autoescape_statement, 1, 0, 0),
    [598] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [600] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [602] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [604] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [606] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [608] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [612] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_extends_statement, 2, 0, 0),
    [614] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_extends_statement, 2, 0, 0),
    [616] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(73),
    [618] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(314),
    [620] = { .entry = { .count = 1, .reusable = false } },
    SHIFT_EXTRA(),
    [622] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(331),
    [624] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(408),
    [626] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [628] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(309),
    [630] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_trans_statement, 1, 0, 0),
    [632] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(209),
    [634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_trans_statement, 1, 0, 0),
    [636] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(290),
    [638] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_arg, 1, 0, 0),
    [640] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(257),
    [642] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
    [644] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat2, 2, 0, 0),
    SHIFT_REPEAT(314),
    [647] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
    [649] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
    SHIFT_REPEAT(309),
    [652] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_if_expression, 2, 0, 0),
    [654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_if_expression, 2, 0, 0),
    [656] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [658] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_do_statement, 2, 0, 0),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_do_statement, 2, 0, 0),
    [662] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_statement, 2, 0, 0),
    [664] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_statement, 2, 0, 0),
    [666] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(198),
    [668] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_filter_statement, 2, 0, 0),
    [670] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_filter_statement, 2, 0, 0),
    [672] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [674] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
    SHIFT_REPEAT(331),
    [677] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
    [679] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_dict_literal_repeat1, 4, 0, 0),
    [681] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [683] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_trans_statement, 3, 0, 0),
    [685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_trans_statement, 3, 0, 0),
    [687] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(184),
    [689] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_trans_statement_repeat1, 2, 0, 0),
    SHIFT_REPEAT(358),
    [692] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_arg, 3, 0, 0),
    [694] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(409),
    [696] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(200),
    [698] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [700] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_in_expression_repeat1, 2, 0, 0),
    SHIFT_REPEAT(383),
    [703] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(178),
    [705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [707] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [709] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(383),
    [711] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [713] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [715] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [717] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [719] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
    SHIFT_REPEAT(24),
    [722] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
    [724] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
    SHIFT_REPEAT(342),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
    [729] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [731] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_with_statement_repeat1, 1, 0, 0),
    [733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_with_statement_repeat1, 1, 0, 0),
    [735] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [737] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [739] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(44),
    [741] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [743] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_dict_literal_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [746] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_dict_literal_repeat1, 2, 0, 0),
    [748] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [750] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [752] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
    [754] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [756] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [758] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_assignment_expression_repeat1, 2, 0, 0),
    SHIFT_REPEAT(399),
    [761] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_assignment_expression_repeat1, 2, 0, 0),
    [763] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_string_literal_repeat2, 1, 0, 0),
    [765] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [767] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(18),
    [769] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [771] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(398),
    [773] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(387),
    [775] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [777] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(147),
    [779] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [781] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [783] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [785] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(173),
    [787] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [789] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(252),
    [791] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [793] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [797] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_comment_repeat1, 1, 0, 0),
    [799] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [801] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [803] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(27),
    [805] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [807] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_for_statement, 3, 0, 0),
    [809] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(365),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_for_statement, 3, 0, 0),
    [813] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pluralize_statement, 1, 0, 0),
    [815] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(371),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pluralize_statement, 1, 0, 0),
    [819] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(168),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_source_repeat1, 1, 0, 0),
    [823] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_source_repeat1, 1, 0, 0),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raw_block_repeat1, 1, 0, 0),
    [827] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_block_statement, 2, 0, 0),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_block_statement, 2, 0, 0),
    [831] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_extends_statement, 3, 0, 0),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_extends_statement, 3, 0, 0),
    [835] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [837] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(379),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raw_block, 4, 0, 0),
    [841] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_raw_block, 4, 0, 0),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_line_statement, 4, 0, 0),
    [845] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_line_statement, 4, 0, 0),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_line_statement, 3, 0, 0),
    [849] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_line_statement, 3, 0, 0),
    [851] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_statement, 1, 0, 0),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_statement, 1, 0, 0),
    [855] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(295),
    [857] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(212),
    [859] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_autoescape_statement, 2, 0, 0),
    [861] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_autoescape_statement, 2, 0, 0),
    [863] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_attribute, 1, 0, 0),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_attribute, 1, 0, 0),
    [867] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_call_statement, 2, 0, 0),
    [869] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_call_statement, 2, 0, 0),
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
    REDUCE(sym_set_statement, 6, 0, 0),
    [885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_statement, 6, 0, 0),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__NEWLINE, 1, 0, 0),
    [889] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__NEWLINE, 1, 0, 0),
    [891] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(190),
    [893] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(385),
    [895] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_pluralize_statement, 2, 0, 0),
    [897] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_pluralize_statement, 2, 0, 0),
    [899] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raw_block, 5, 0, 2),
    [901] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_raw_block, 5, 0, 2),
    [903] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_call_statement, 5, 0, 0),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_call_statement, 5, 0, 0),
    [907] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_macro_statement, 2, 0, 0),
    [909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_macro_statement, 2, 0, 0),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__END, 1, 0, 0),
    [913] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__END, 1, 0, 0),
    [915] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(128),
    [917] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [919] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [921] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(187),
    [923] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [925] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(349),
    [927] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(272),
    [929] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(180),
    [931] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(237),
    [933] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(189),
    [935] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_import_from, 2, 0, 0),
    [937] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(217),
    [939] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(231),
    [941] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(215),
    [943] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(348),
    [945] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [947] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [949] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(343),
    [951] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(393),
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
    SHIFT(294),
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
