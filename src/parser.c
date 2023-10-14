#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_check = 2,
  anon_sym_Prop = 3,
  anon_sym_Finite = 4,
  anon_sym_Enum = 5,
  anon_sym_Nat = 6,
  anon_sym_Fin = 7,
  anon_sym_size = 8,
  anon_sym_stream = 9,
  anon_sym_enumerate = 10,
  anon_sym_with = 11,
  anon_sym_match = 12,
  anon_sym_begin = 13,
  anon_sym_end = 14,
  aux_sym_true_const_token1 = 15,
  aux_sym_false_const_token1 = 16,
  aux_sym_lambda_token1 = 17,
  aux_sym_prod_token1 = 18,
  sym_arrow = 19,
  sym_darrow = 20,
  sym_plus = 21,
  sym_minus = 22,
  sym_times = 23,
  sym_divide = 24,
  sym_pow = 25,
  sym_lt = 26,
  sym_leq = 27,
  sym_equal = 28,
  aux_sym_exists_token1 = 29,
  aux_sym_forall_token1 = 30,
  sym_land = 31,
  sym_lor = 32,
  aux_sym_neg_token1 = 33,
  sym_colon = 34,
  sym_lparen = 35,
  sym_rparen = 36,
  sym_lbrace = 37,
  sym_rbrace = 38,
  sym_comma = 39,
  sym_semicolon = 40,
  sym_vbar = 41,
  sym_coloneq = 42,
  sym_identifier = 43,
  sym_numeral = 44,
  sym_tag = 45,
  sym_source_file = 46,
  sym_toplevel = 47,
  sym__expr = 48,
  sym__infix_expr = 49,
  sym__app_expr = 50,
  sym__prefix_expr = 51,
  sym__proj_expr = 52,
  sym__simple_expr = 53,
  sym_lambda_expr = 54,
  sym_dependent_function = 55,
  sym_simple_function = 56,
  sym_exists_expr = 57,
  sym_forall_expr = 58,
  sym_match_expr = 59,
  sym__darrow_expr = 60,
  sym__or_expr = 61,
  sym__and_expr = 62,
  sym__lt_expr = 63,
  sym__leq_expr = 64,
  sym__equal_expr = 65,
  sym__plus_expr = 66,
  sym__minus_expr = 67,
  sym__times_expr = 68,
  sym__divide_expr = 69,
  sym__pow_expr = 70,
  sym__lambda_abstraction = 71,
  sym__quantifier_abstraction = 72,
  sym__typed_binder = 73,
  aux_sym__match_cases = 74,
  sym__match_case = 75,
  sym__pattern = 76,
  sym_check = 77,
  sym_prop = 78,
  sym_finite = 79,
  sym_enum = 80,
  sym_nat = 81,
  sym_fin = 82,
  sym_with_keyword = 83,
  sym_match = 84,
  sym_begin = 85,
  sym_end = 86,
  sym_true_const = 87,
  sym_false_const = 88,
  sym_lambda = 89,
  sym_prod = 90,
  sym_exists = 91,
  sym_forall = 92,
  sym_neg = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym__lambda_abstraction_repeat1 = 95,
  aux_sym__lambda_abstraction_repeat2 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_check] = "check",
  [anon_sym_Prop] = "Prop",
  [anon_sym_Finite] = "Finite",
  [anon_sym_Enum] = "Enum",
  [anon_sym_Nat] = "Nat",
  [anon_sym_Fin] = "Fin",
  [anon_sym_size] = "size",
  [anon_sym_stream] = "stream",
  [anon_sym_enumerate] = "enumerate",
  [anon_sym_with] = "with",
  [anon_sym_match] = "match",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [aux_sym_true_const_token1] = "true_const_token1",
  [aux_sym_false_const_token1] = "false_const_token1",
  [aux_sym_lambda_token1] = "lambda_token1",
  [aux_sym_prod_token1] = "prod_token1",
  [sym_arrow] = "arrow",
  [sym_darrow] = "darrow",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_times] = "times",
  [sym_divide] = "divide",
  [sym_pow] = "pow",
  [sym_lt] = "lt",
  [sym_leq] = "leq",
  [sym_equal] = "equal",
  [aux_sym_exists_token1] = "exists_token1",
  [aux_sym_forall_token1] = "forall_token1",
  [sym_land] = "land",
  [sym_lor] = "lor",
  [aux_sym_neg_token1] = "neg_token1",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_lbrace] = "lbrace",
  [sym_rbrace] = "rbrace",
  [sym_comma] = "comma",
  [sym_semicolon] = "semicolon",
  [sym_vbar] = "vbar",
  [sym_coloneq] = "coloneq",
  [sym_identifier] = "identifier",
  [sym_numeral] = "numeral",
  [sym_tag] = "tag",
  [sym_source_file] = "source_file",
  [sym_toplevel] = "toplevel",
  [sym__expr] = "_expr",
  [sym__infix_expr] = "_infix_expr",
  [sym__app_expr] = "_app_expr",
  [sym__prefix_expr] = "_prefix_expr",
  [sym__proj_expr] = "_proj_expr",
  [sym__simple_expr] = "_simple_expr",
  [sym_lambda_expr] = "lambda_expr",
  [sym_dependent_function] = "dependent_function",
  [sym_simple_function] = "simple_function",
  [sym_exists_expr] = "exists_expr",
  [sym_forall_expr] = "forall_expr",
  [sym_match_expr] = "match_expr",
  [sym__darrow_expr] = "_darrow_expr",
  [sym__or_expr] = "_or_expr",
  [sym__and_expr] = "_and_expr",
  [sym__lt_expr] = "_lt_expr",
  [sym__leq_expr] = "_leq_expr",
  [sym__equal_expr] = "_equal_expr",
  [sym__plus_expr] = "_plus_expr",
  [sym__minus_expr] = "_minus_expr",
  [sym__times_expr] = "_times_expr",
  [sym__divide_expr] = "_divide_expr",
  [sym__pow_expr] = "_pow_expr",
  [sym__lambda_abstraction] = "_lambda_abstraction",
  [sym__quantifier_abstraction] = "_quantifier_abstraction",
  [sym__typed_binder] = "_typed_binder",
  [aux_sym__match_cases] = "_match_cases",
  [sym__match_case] = "_match_case",
  [sym__pattern] = "_pattern",
  [sym_check] = "check",
  [sym_prop] = "prop",
  [sym_finite] = "finite",
  [sym_enum] = "enum",
  [sym_nat] = "nat",
  [sym_fin] = "fin",
  [sym_with_keyword] = "with_keyword",
  [sym_match] = "match",
  [sym_begin] = "begin",
  [sym_end] = "end",
  [sym_true_const] = "true_const",
  [sym_false_const] = "false_const",
  [sym_lambda] = "lambda",
  [sym_prod] = "prod",
  [sym_exists] = "exists",
  [sym_forall] = "forall",
  [sym_neg] = "neg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__lambda_abstraction_repeat1] = "_lambda_abstraction_repeat1",
  [aux_sym__lambda_abstraction_repeat2] = "_lambda_abstraction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_Prop] = anon_sym_Prop,
  [anon_sym_Finite] = anon_sym_Finite,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_Nat] = anon_sym_Nat,
  [anon_sym_Fin] = anon_sym_Fin,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_enumerate] = anon_sym_enumerate,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_true_const_token1] = aux_sym_true_const_token1,
  [aux_sym_false_const_token1] = aux_sym_false_const_token1,
  [aux_sym_lambda_token1] = aux_sym_lambda_token1,
  [aux_sym_prod_token1] = aux_sym_prod_token1,
  [sym_arrow] = sym_arrow,
  [sym_darrow] = sym_darrow,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_times] = sym_times,
  [sym_divide] = sym_divide,
  [sym_pow] = sym_pow,
  [sym_lt] = sym_lt,
  [sym_leq] = sym_leq,
  [sym_equal] = sym_equal,
  [aux_sym_exists_token1] = aux_sym_exists_token1,
  [aux_sym_forall_token1] = aux_sym_forall_token1,
  [sym_land] = sym_land,
  [sym_lor] = sym_lor,
  [aux_sym_neg_token1] = aux_sym_neg_token1,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_lbrace] = sym_lbrace,
  [sym_rbrace] = sym_rbrace,
  [sym_comma] = sym_comma,
  [sym_semicolon] = sym_semicolon,
  [sym_vbar] = sym_vbar,
  [sym_coloneq] = sym_coloneq,
  [sym_identifier] = sym_identifier,
  [sym_numeral] = sym_numeral,
  [sym_tag] = sym_tag,
  [sym_source_file] = sym_source_file,
  [sym_toplevel] = sym_toplevel,
  [sym__expr] = sym__expr,
  [sym__infix_expr] = sym__infix_expr,
  [sym__app_expr] = sym__app_expr,
  [sym__prefix_expr] = sym__prefix_expr,
  [sym__proj_expr] = sym__proj_expr,
  [sym__simple_expr] = sym__simple_expr,
  [sym_lambda_expr] = sym_lambda_expr,
  [sym_dependent_function] = sym_dependent_function,
  [sym_simple_function] = sym_simple_function,
  [sym_exists_expr] = sym_exists_expr,
  [sym_forall_expr] = sym_forall_expr,
  [sym_match_expr] = sym_match_expr,
  [sym__darrow_expr] = sym__darrow_expr,
  [sym__or_expr] = sym__or_expr,
  [sym__and_expr] = sym__and_expr,
  [sym__lt_expr] = sym__lt_expr,
  [sym__leq_expr] = sym__leq_expr,
  [sym__equal_expr] = sym__equal_expr,
  [sym__plus_expr] = sym__plus_expr,
  [sym__minus_expr] = sym__minus_expr,
  [sym__times_expr] = sym__times_expr,
  [sym__divide_expr] = sym__divide_expr,
  [sym__pow_expr] = sym__pow_expr,
  [sym__lambda_abstraction] = sym__lambda_abstraction,
  [sym__quantifier_abstraction] = sym__quantifier_abstraction,
  [sym__typed_binder] = sym__typed_binder,
  [aux_sym__match_cases] = aux_sym__match_cases,
  [sym__match_case] = sym__match_case,
  [sym__pattern] = sym__pattern,
  [sym_check] = sym_check,
  [sym_prop] = sym_prop,
  [sym_finite] = sym_finite,
  [sym_enum] = sym_enum,
  [sym_nat] = sym_nat,
  [sym_fin] = sym_fin,
  [sym_with_keyword] = sym_with_keyword,
  [sym_match] = sym_match,
  [sym_begin] = sym_begin,
  [sym_end] = sym_end,
  [sym_true_const] = sym_true_const,
  [sym_false_const] = sym_false_const,
  [sym_lambda] = sym_lambda,
  [sym_prod] = sym_prod,
  [sym_exists] = sym_exists,
  [sym_forall] = sym_forall,
  [sym_neg] = sym_neg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__lambda_abstraction_repeat1] = aux_sym__lambda_abstraction_repeat1,
  [aux_sym__lambda_abstraction_repeat2] = aux_sym__lambda_abstraction_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Finite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enumerate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_true_const_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_false_const_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lambda_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prod_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_darrow] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_times] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_pow] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_leq] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_exists_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_forall_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_land] = {
    .visible = true,
    .named = true,
  },
  [sym_lor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_neg_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [sym_lbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_rbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_vbar] = {
    .visible = true,
    .named = true,
  },
  [sym_coloneq] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__infix_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__app_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__proj_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_dependent_function] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_function] = {
    .visible = true,
    .named = true,
  },
  [sym_exists_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_forall_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__darrow_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__or_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__and_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__lt_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__leq_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__equal_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__plus_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__minus_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__times_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__divide_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__pow_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__lambda_abstraction] = {
    .visible = false,
    .named = true,
  },
  [sym__quantifier_abstraction] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_binder] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__match_cases] = {
    .visible = false,
    .named = false,
  },
  [sym__match_case] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_check] = {
    .visible = true,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_finite] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [sym_fin] = {
    .visible = true,
    .named = true,
  },
  [sym_with_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_true_const] = {
    .visible = true,
    .named = true,
  },
  [sym_false_const] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_prod] = {
    .visible = true,
    .named = true,
  },
  [sym_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_neg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lambda_abstraction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lambda_abstraction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(134);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == 172) ADVANCE(81);
      if (lookahead == 928 ||
          lookahead == 8719) ADVANCE(106);
      if (lookahead == 955) ADVANCE(104);
      if (lookahead == 8594) ADVANCE(108);
      if (lookahead == 8658) ADVANCE(109);
      if (lookahead == 8704) ADVANCE(120);
      if (lookahead == 8707) ADVANCE(118);
      if (lookahead == 8743) ADVANCE(122);
      if (lookahead == 8744) ADVANCE(123);
      if (lookahead == 8804) ADVANCE(116);
      if (lookahead == 8868) ADVANCE(102);
      if (lookahead == 8869) ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 172) ADVANCE(81);
      if (lookahead == 928 ||
          lookahead == 8719) ADVANCE(106);
      if (lookahead == 955) ADVANCE(104);
      if (lookahead == 8658) ADVANCE(109);
      if (lookahead == 8704) ADVANCE(120);
      if (lookahead == 8707) ADVANCE(118);
      if (lookahead == 8868) ADVANCE(102);
      if (lookahead == 8869) ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 8658) ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 172) ADVANCE(81);
      if (lookahead == 8868) ADVANCE(102);
      if (lookahead == 8869) ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 8868) ADVANCE(102);
      if (lookahead == 8869) ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 80:
      if (lookahead == 'z') ADVANCE(27);
      END_STATE();
    case 81:
      if (lookahead == 172) ADVANCE(124);
      END_STATE();
    case 82:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == 8594) ADVANCE(108);
      if (lookahead == 8658) ADVANCE(109);
      if (lookahead == 8743) ADVANCE(122);
      if (lookahead == 8744) ADVANCE(123);
      if (lookahead == 8804) ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Prop);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Finite);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Fin);
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_enumerate);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_true_const_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_false_const_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_lambda_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_lambda_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_prod_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_prod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_darrow);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_minus);
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_times);
      if (lookahead == '*') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_leq);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_equal);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_exists_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_exists_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_forall_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_forall_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_land);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_lor);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_neg_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_neg_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_colon);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_lparen);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_lbrace);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_rbrace);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_vbar);
      if (lookahead == '|') ADVANCE(123);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_coloneq);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 84},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 84},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 84},
  [35] = {.lex_state = 84},
  [36] = {.lex_state = 84},
  [37] = {.lex_state = 84},
  [38] = {.lex_state = 84},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 84},
  [41] = {.lex_state = 84},
  [42] = {.lex_state = 84},
  [43] = {.lex_state = 84},
  [44] = {.lex_state = 84},
  [45] = {.lex_state = 84},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 84},
  [55] = {.lex_state = 84},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 84},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 84},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 84},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_Prop] = ACTIONS(1),
    [anon_sym_Finite] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_Nat] = ACTIONS(1),
    [anon_sym_Fin] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_enumerate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_true_const_token1] = ACTIONS(1),
    [aux_sym_false_const_token1] = ACTIONS(1),
    [aux_sym_lambda_token1] = ACTIONS(1),
    [aux_sym_prod_token1] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_darrow] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_times] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_pow] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_leq] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [aux_sym_exists_token1] = ACTIONS(1),
    [aux_sym_forall_token1] = ACTIONS(1),
    [sym_land] = ACTIONS(1),
    [sym_lor] = ACTIONS(1),
    [aux_sym_neg_token1] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_lbrace] = ACTIONS(1),
    [sym_rbrace] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_vbar] = ACTIONS(1),
    [sym_coloneq] = ACTIONS(1),
    [sym_numeral] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(98),
    [sym_toplevel] = STATE(62),
    [sym_check] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_check] = ACTIONS(7),
  },
  [2] = {
    [sym__expr] = STATE(59),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(59),
    [sym_dependent_function] = STATE(59),
    [sym_simple_function] = STATE(59),
    [sym_exists_expr] = STATE(59),
    [sym_forall_expr] = STATE(59),
    [sym_match_expr] = STATE(59),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [3] = {
    [sym__expr] = STATE(81),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(81),
    [sym_dependent_function] = STATE(81),
    [sym_simple_function] = STATE(81),
    [sym_exists_expr] = STATE(81),
    [sym_forall_expr] = STATE(81),
    [sym_match_expr] = STATE(81),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [4] = {
    [sym__expr] = STATE(77),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(77),
    [sym_dependent_function] = STATE(77),
    [sym_simple_function] = STATE(77),
    [sym_exists_expr] = STATE(77),
    [sym_forall_expr] = STATE(77),
    [sym_match_expr] = STATE(77),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [5] = {
    [sym__expr] = STATE(82),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(82),
    [sym_dependent_function] = STATE(82),
    [sym_simple_function] = STATE(82),
    [sym_exists_expr] = STATE(82),
    [sym_forall_expr] = STATE(82),
    [sym_match_expr] = STATE(82),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [6] = {
    [sym__expr] = STATE(58),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(58),
    [sym_dependent_function] = STATE(58),
    [sym_simple_function] = STATE(58),
    [sym_exists_expr] = STATE(58),
    [sym_forall_expr] = STATE(58),
    [sym_match_expr] = STATE(58),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [7] = {
    [sym__expr] = STATE(54),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(54),
    [sym_dependent_function] = STATE(54),
    [sym_simple_function] = STATE(54),
    [sym_exists_expr] = STATE(54),
    [sym_forall_expr] = STATE(54),
    [sym_match_expr] = STATE(54),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [8] = {
    [sym__expr] = STATE(57),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(57),
    [sym_dependent_function] = STATE(57),
    [sym_simple_function] = STATE(57),
    [sym_exists_expr] = STATE(57),
    [sym_forall_expr] = STATE(57),
    [sym_match_expr] = STATE(57),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [9] = {
    [sym__expr] = STATE(92),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(92),
    [sym_dependent_function] = STATE(92),
    [sym_simple_function] = STATE(92),
    [sym_exists_expr] = STATE(92),
    [sym_forall_expr] = STATE(92),
    [sym_match_expr] = STATE(92),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [10] = {
    [sym__expr] = STATE(102),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(102),
    [sym_dependent_function] = STATE(102),
    [sym_simple_function] = STATE(102),
    [sym_exists_expr] = STATE(102),
    [sym_forall_expr] = STATE(102),
    [sym_match_expr] = STATE(102),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [11] = {
    [sym__expr] = STATE(56),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(56),
    [sym_dependent_function] = STATE(56),
    [sym_simple_function] = STATE(56),
    [sym_exists_expr] = STATE(56),
    [sym_forall_expr] = STATE(56),
    [sym_match_expr] = STATE(56),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [12] = {
    [sym__expr] = STATE(55),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(55),
    [sym_dependent_function] = STATE(55),
    [sym_simple_function] = STATE(55),
    [sym_exists_expr] = STATE(55),
    [sym_forall_expr] = STATE(55),
    [sym_match_expr] = STATE(55),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [13] = {
    [sym__expr] = STATE(95),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(95),
    [sym_dependent_function] = STATE(95),
    [sym_simple_function] = STATE(95),
    [sym_exists_expr] = STATE(95),
    [sym_forall_expr] = STATE(95),
    [sym_match_expr] = STATE(95),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [14] = {
    [sym__expr] = STATE(91),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(91),
    [sym_dependent_function] = STATE(91),
    [sym_simple_function] = STATE(91),
    [sym_exists_expr] = STATE(91),
    [sym_forall_expr] = STATE(91),
    [sym_match_expr] = STATE(91),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
  [15] = {
    [sym__expr] = STATE(86),
    [sym__infix_expr] = STATE(37),
    [sym__app_expr] = STATE(37),
    [sym__prefix_expr] = STATE(37),
    [sym__proj_expr] = STATE(37),
    [sym__simple_expr] = STATE(37),
    [sym_lambda_expr] = STATE(86),
    [sym_dependent_function] = STATE(86),
    [sym_simple_function] = STATE(86),
    [sym_exists_expr] = STATE(86),
    [sym_forall_expr] = STATE(86),
    [sym_match_expr] = STATE(86),
    [sym__darrow_expr] = STATE(37),
    [sym__or_expr] = STATE(37),
    [sym__and_expr] = STATE(37),
    [sym__lt_expr] = STATE(37),
    [sym__leq_expr] = STATE(37),
    [sym__equal_expr] = STATE(37),
    [sym__plus_expr] = STATE(37),
    [sym__minus_expr] = STATE(37),
    [sym__times_expr] = STATE(37),
    [sym__divide_expr] = STATE(37),
    [sym__pow_expr] = STATE(37),
    [sym_prop] = STATE(37),
    [sym_finite] = STATE(37),
    [sym_enum] = STATE(37),
    [sym_nat] = STATE(37),
    [sym_fin] = STATE(48),
    [sym_match] = STATE(3),
    [sym_begin] = STATE(15),
    [sym_true_const] = STATE(37),
    [sym_false_const] = STATE(37),
    [sym_lambda] = STATE(61),
    [sym_prod] = STATE(63),
    [sym_exists] = STATE(64),
    [sym_forall] = STATE(66),
    [sym_neg] = STATE(48),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Finite] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(17),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
    [aux_sym_true_const_token1] = ACTIONS(23),
    [aux_sym_false_const_token1] = ACTIONS(25),
    [aux_sym_lambda_token1] = ACTIONS(27),
    [aux_sym_prod_token1] = ACTIONS(29),
    [aux_sym_exists_token1] = ACTIONS(31),
    [aux_sym_forall_token1] = ACTIONS(33),
    [aux_sym_neg_token1] = ACTIONS(35),
    [sym_lparen] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_numeral] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(41), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [68] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(38), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [136] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(43), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [204] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(40), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [272] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(46), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [340] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(29), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [408] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(30), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [476] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(31), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [544] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(33), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [612] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(35), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [680] = 15,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(17), 1,
      anon_sym_Fin,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(35), 1,
      aux_sym_neg_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(48), 2,
      sym_fin,
      sym_neg,
    STATE(36), 22,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
      sym__or_expr,
      sym__and_expr,
      sym__lt_expr,
      sym__leq_expr,
      sym__equal_expr,
      sym__plus_expr,
      sym__minus_expr,
      sym__times_expr,
      sym__divide_expr,
      sym__pow_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [748] = 2,
    ACTIONS(89), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(87), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [774] = 2,
    ACTIONS(93), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(91), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [800] = 2,
    ACTIONS(97), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(95), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [826] = 13,
    ACTIONS(101), 1,
      sym_darrow,
    ACTIONS(103), 1,
      sym_plus,
    ACTIONS(105), 1,
      sym_minus,
    ACTIONS(107), 1,
      sym_times,
    ACTIONS(109), 1,
      sym_divide,
    ACTIONS(111), 1,
      sym_pow,
    ACTIONS(113), 1,
      sym_lt,
    ACTIONS(115), 1,
      sym_leq,
    ACTIONS(117), 1,
      sym_equal,
    ACTIONS(119), 1,
      sym_land,
    ACTIONS(121), 1,
      sym_lor,
    ACTIONS(123), 1,
      sym_vbar,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_colon,
      sym_rparen,
      sym_comma,
  [874] = 2,
    ACTIONS(127), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [900] = 2,
    ACTIONS(131), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [926] = 2,
    ACTIONS(135), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [952] = 2,
    ACTIONS(139), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [978] = 2,
    ACTIONS(143), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(141), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1004] = 2,
    ACTIONS(147), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(145), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1030] = 15,
    ACTIONS(101), 1,
      sym_darrow,
    ACTIONS(103), 1,
      sym_plus,
    ACTIONS(105), 1,
      sym_minus,
    ACTIONS(107), 1,
      sym_times,
    ACTIONS(109), 1,
      sym_divide,
    ACTIONS(111), 1,
      sym_pow,
    ACTIONS(113), 1,
      sym_lt,
    ACTIONS(115), 1,
      sym_leq,
    ACTIONS(117), 1,
      sym_equal,
    ACTIONS(119), 1,
      sym_land,
    ACTIONS(121), 1,
      sym_lor,
    ACTIONS(151), 1,
      sym_arrow,
    ACTIONS(153), 1,
      sym_colon,
    ACTIONS(155), 1,
      sym_vbar,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
  [1082] = 13,
    ACTIONS(101), 1,
      sym_darrow,
    ACTIONS(103), 1,
      sym_plus,
    ACTIONS(105), 1,
      sym_minus,
    ACTIONS(107), 1,
      sym_times,
    ACTIONS(109), 1,
      sym_divide,
    ACTIONS(111), 1,
      sym_pow,
    ACTIONS(113), 1,
      sym_lt,
    ACTIONS(115), 1,
      sym_leq,
    ACTIONS(117), 1,
      sym_equal,
    ACTIONS(119), 1,
      sym_land,
    ACTIONS(121), 1,
      sym_lor,
    ACTIONS(159), 1,
      sym_vbar,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1130] = 2,
    ACTIONS(163), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1156] = 2,
    ACTIONS(167), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1182] = 2,
    ACTIONS(171), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1208] = 2,
    ACTIONS(175), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1234] = 2,
    ACTIONS(179), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1260] = 2,
    ACTIONS(183), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(181), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1286] = 2,
    ACTIONS(187), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1312] = 2,
    ACTIONS(191), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(189), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1338] = 2,
    ACTIONS(195), 5,
      sym_minus,
      sym_times,
      sym_lt,
      sym_equal,
      sym_vbar,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_arrow,
      sym_darrow,
      sym_plus,
      sym_divide,
      sym_pow,
      sym_leq,
      sym_land,
      sym_lor,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1364] = 12,
    ACTIONS(9), 1,
      anon_sym_Prop,
    ACTIONS(11), 1,
      anon_sym_Finite,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      anon_sym_Nat,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      aux_sym_true_const_token1,
    ACTIONS(25), 1,
      aux_sym_false_const_token1,
    ACTIONS(37), 1,
      sym_lparen,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym_numeral,
    STATE(15), 1,
      sym_begin,
    STATE(32), 9,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_true_const,
      sym_false_const,
  [1409] = 2,
    ACTIONS(201), 8,
      anon_sym_Prop,
      anon_sym_Finite,
      anon_sym_Enum,
      anon_sym_Nat,
      aux_sym_true_const_token1,
      aux_sym_false_const_token1,
      sym_lparen,
      sym_numeral,
    ACTIONS(203), 9,
      anon_sym_Fin,
      anon_sym_match,
      anon_sym_begin,
      aux_sym_lambda_token1,
      aux_sym_prod_token1,
      aux_sym_exists_token1,
      aux_sym_forall_token1,
      aux_sym_neg_token1,
      sym_identifier,
  [1431] = 2,
    ACTIONS(205), 8,
      anon_sym_Prop,
      anon_sym_Finite,
      anon_sym_Enum,
      anon_sym_Nat,
      aux_sym_true_const_token1,
      aux_sym_false_const_token1,
      sym_lparen,
      sym_numeral,
    ACTIONS(207), 9,
      anon_sym_Fin,
      anon_sym_match,
      anon_sym_begin,
      aux_sym_lambda_token1,
      aux_sym_prod_token1,
      aux_sym_exists_token1,
      aux_sym_forall_token1,
      aux_sym_neg_token1,
      sym_identifier,
  [1453] = 2,
    ACTIONS(209), 8,
      anon_sym_Prop,
      anon_sym_Finite,
      anon_sym_Enum,
      anon_sym_Nat,
      aux_sym_true_const_token1,
      aux_sym_false_const_token1,
      sym_lparen,
      sym_numeral,
    ACTIONS(211), 9,
      anon_sym_Fin,
      anon_sym_match,
      anon_sym_begin,
      aux_sym_lambda_token1,
      aux_sym_prod_token1,
      aux_sym_exists_token1,
      aux_sym_forall_token1,
      aux_sym_neg_token1,
      sym_identifier,
  [1475] = 2,
    ACTIONS(215), 2,
      anon_sym_begin,
      sym_identifier,
    ACTIONS(213), 8,
      anon_sym_Prop,
      anon_sym_Finite,
      anon_sym_Enum,
      anon_sym_Nat,
      aux_sym_true_const_token1,
      aux_sym_false_const_token1,
      sym_lparen,
      sym_numeral,
  [1490] = 2,
    ACTIONS(219), 2,
      anon_sym_begin,
      sym_identifier,
    ACTIONS(217), 8,
      anon_sym_Prop,
      anon_sym_Finite,
      anon_sym_Enum,
      anon_sym_Nat,
      aux_sym_true_const_token1,
      aux_sym_false_const_token1,
      sym_lparen,
      sym_numeral,
  [1505] = 1,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1516] = 1,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1527] = 1,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1538] = 1,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1549] = 1,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1560] = 1,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1571] = 1,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      anon_sym_with,
      anon_sym_end,
      sym_rparen,
      sym_comma,
      sym_vbar,
  [1582] = 5,
    ACTIONS(235), 1,
      sym_lparen,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(76), 1,
      aux_sym__lambda_abstraction_repeat1,
    STATE(93), 1,
      sym__lambda_abstraction,
    STATE(69), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1599] = 5,
    ACTIONS(7), 1,
      anon_sym_check,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym_comment,
    STATE(4), 1,
      sym_check,
    STATE(65), 2,
      sym_toplevel,
      aux_sym_source_file_repeat1,
  [1616] = 5,
    ACTIONS(235), 1,
      sym_lparen,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym__lambda_abstraction_repeat1,
    STATE(97), 1,
      sym__quantifier_abstraction,
    STATE(68), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1633] = 5,
    ACTIONS(235), 1,
      sym_lparen,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym__lambda_abstraction_repeat1,
    STATE(100), 1,
      sym__quantifier_abstraction,
    STATE(68), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1650] = 5,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_check,
    STATE(4), 1,
      sym_check,
    STATE(65), 2,
      sym_toplevel,
      aux_sym_source_file_repeat1,
  [1667] = 5,
    ACTIONS(235), 1,
      sym_lparen,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym__lambda_abstraction_repeat1,
    STATE(101), 1,
      sym__quantifier_abstraction,
    STATE(68), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1684] = 3,
    ACTIONS(255), 1,
      sym_lparen,
    ACTIONS(253), 2,
      sym_darrow,
      sym_comma,
    STATE(67), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1696] = 3,
    ACTIONS(235), 1,
      sym_lparen,
    ACTIONS(258), 1,
      sym_comma,
    STATE(67), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1707] = 3,
    ACTIONS(235), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_darrow,
    STATE(67), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [1718] = 4,
    ACTIONS(262), 1,
      anon_sym_end,
    ACTIONS(264), 1,
      sym_vbar,
    STATE(60), 1,
      sym_end,
    STATE(75), 1,
      aux_sym__match_cases,
  [1731] = 3,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(71), 1,
      aux_sym__lambda_abstraction_repeat1,
    ACTIONS(266), 2,
      sym_darrow,
      sym_colon,
  [1742] = 3,
    ACTIONS(271), 1,
      sym_tag,
    STATE(87), 1,
      sym__match_case,
    STATE(90), 1,
      sym__pattern,
  [1752] = 3,
    ACTIONS(273), 1,
      sym_colon,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(71), 1,
      aux_sym__lambda_abstraction_repeat1,
  [1762] = 1,
    ACTIONS(277), 3,
      sym_darrow,
      sym_lparen,
      sym_comma,
  [1768] = 3,
    ACTIONS(279), 1,
      anon_sym_end,
    ACTIONS(281), 1,
      sym_vbar,
    STATE(75), 1,
      aux_sym__match_cases,
  [1778] = 3,
    ACTIONS(260), 1,
      sym_darrow,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(71), 1,
      aux_sym__lambda_abstraction_repeat1,
  [1788] = 1,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
  [1794] = 3,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(286), 1,
      sym_colon,
    STATE(71), 1,
      aux_sym__lambda_abstraction_repeat1,
  [1804] = 2,
    ACTIONS(264), 1,
      sym_vbar,
    STATE(70), 1,
      aux_sym__match_cases,
  [1811] = 2,
    ACTIONS(288), 1,
      sym_darrow,
    ACTIONS(290), 1,
      sym_lparen,
  [1818] = 2,
    ACTIONS(292), 1,
      anon_sym_with,
    STATE(79), 1,
      sym_with_keyword,
  [1825] = 1,
    ACTIONS(294), 2,
      anon_sym_end,
      sym_vbar,
  [1830] = 1,
    ACTIONS(296), 2,
      sym_lparen,
      sym_identifier,
  [1835] = 2,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(78), 1,
      aux_sym__lambda_abstraction_repeat1,
  [1842] = 1,
    ACTIONS(300), 2,
      sym_lparen,
      sym_identifier,
  [1847] = 2,
    ACTIONS(262), 1,
      anon_sym_end,
    STATE(28), 1,
      sym_end,
  [1854] = 1,
    ACTIONS(279), 2,
      anon_sym_end,
      sym_vbar,
  [1859] = 1,
    ACTIONS(302), 2,
      sym_lparen,
      sym_identifier,
  [1864] = 1,
    ACTIONS(304), 2,
      sym_lparen,
      sym_identifier,
  [1869] = 1,
    ACTIONS(306), 1,
      sym_darrow,
  [1873] = 1,
    ACTIONS(308), 1,
      sym_rparen,
  [1877] = 1,
    ACTIONS(310), 1,
      sym_comma,
  [1881] = 1,
    ACTIONS(312), 1,
      sym_darrow,
  [1885] = 1,
    ACTIONS(314), 1,
      sym_vbar,
  [1889] = 1,
    ACTIONS(316), 1,
      sym_rparen,
  [1893] = 1,
    ACTIONS(318), 1,
      sym_identifier,
  [1897] = 1,
    ACTIONS(320), 1,
      sym_comma,
  [1901] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
  [1905] = 1,
    ACTIONS(324), 1,
      sym_colon,
  [1909] = 1,
    ACTIONS(326), 1,
      sym_comma,
  [1913] = 1,
    ACTIONS(328), 1,
      sym_comma,
  [1917] = 1,
    ACTIONS(330), 1,
      sym_rparen,
  [1921] = 1,
    ACTIONS(332), 1,
      sym_darrow,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 68,
  [SMALL_STATE(18)] = 136,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 272,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 408,
  [SMALL_STATE(23)] = 476,
  [SMALL_STATE(24)] = 544,
  [SMALL_STATE(25)] = 612,
  [SMALL_STATE(26)] = 680,
  [SMALL_STATE(27)] = 748,
  [SMALL_STATE(28)] = 774,
  [SMALL_STATE(29)] = 800,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 874,
  [SMALL_STATE(32)] = 900,
  [SMALL_STATE(33)] = 926,
  [SMALL_STATE(34)] = 952,
  [SMALL_STATE(35)] = 978,
  [SMALL_STATE(36)] = 1004,
  [SMALL_STATE(37)] = 1030,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1130,
  [SMALL_STATE(40)] = 1156,
  [SMALL_STATE(41)] = 1182,
  [SMALL_STATE(42)] = 1208,
  [SMALL_STATE(43)] = 1234,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1286,
  [SMALL_STATE(46)] = 1312,
  [SMALL_STATE(47)] = 1338,
  [SMALL_STATE(48)] = 1364,
  [SMALL_STATE(49)] = 1409,
  [SMALL_STATE(50)] = 1431,
  [SMALL_STATE(51)] = 1453,
  [SMALL_STATE(52)] = 1475,
  [SMALL_STATE(53)] = 1490,
  [SMALL_STATE(54)] = 1505,
  [SMALL_STATE(55)] = 1516,
  [SMALL_STATE(56)] = 1527,
  [SMALL_STATE(57)] = 1538,
  [SMALL_STATE(58)] = 1549,
  [SMALL_STATE(59)] = 1560,
  [SMALL_STATE(60)] = 1571,
  [SMALL_STATE(61)] = 1582,
  [SMALL_STATE(62)] = 1599,
  [SMALL_STATE(63)] = 1616,
  [SMALL_STATE(64)] = 1633,
  [SMALL_STATE(65)] = 1650,
  [SMALL_STATE(66)] = 1667,
  [SMALL_STATE(67)] = 1684,
  [SMALL_STATE(68)] = 1696,
  [SMALL_STATE(69)] = 1707,
  [SMALL_STATE(70)] = 1718,
  [SMALL_STATE(71)] = 1731,
  [SMALL_STATE(72)] = 1742,
  [SMALL_STATE(73)] = 1752,
  [SMALL_STATE(74)] = 1762,
  [SMALL_STATE(75)] = 1768,
  [SMALL_STATE(76)] = 1778,
  [SMALL_STATE(77)] = 1788,
  [SMALL_STATE(78)] = 1794,
  [SMALL_STATE(79)] = 1804,
  [SMALL_STATE(80)] = 1811,
  [SMALL_STATE(81)] = 1818,
  [SMALL_STATE(82)] = 1825,
  [SMALL_STATE(83)] = 1830,
  [SMALL_STATE(84)] = 1835,
  [SMALL_STATE(85)] = 1842,
  [SMALL_STATE(86)] = 1847,
  [SMALL_STATE(87)] = 1854,
  [SMALL_STATE(88)] = 1859,
  [SMALL_STATE(89)] = 1864,
  [SMALL_STATE(90)] = 1869,
  [SMALL_STATE(91)] = 1873,
  [SMALL_STATE(92)] = 1877,
  [SMALL_STATE(93)] = 1881,
  [SMALL_STATE(94)] = 1885,
  [SMALL_STATE(95)] = 1889,
  [SMALL_STATE(96)] = 1893,
  [SMALL_STATE(97)] = 1897,
  [SMALL_STATE(98)] = 1901,
  [SMALL_STATE(99)] = 1905,
  [SMALL_STATE(100)] = 1909,
  [SMALL_STATE(101)] = 1913,
  [SMALL_STATE(102)] = 1917,
  [SMALL_STATE(103)] = 1921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_const, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true_const, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expr, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expr, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt_expr, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt_expr, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pow_expr, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pow_expr, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__divide_expr, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__divide_expr, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__app_expr, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__app_expr, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__times_expr, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__times_expr, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_expr, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_expr, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plus_expr, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plus_expr, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__darrow_expr, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__darrow_expr, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false_const, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false_const, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equal_expr, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equal_expr, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__and_expr, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__and_expr, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nat, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nat, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__or_expr, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__or_expr, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finite, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finite, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__leq_expr, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__leq_expr, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neg, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neg, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fin, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fin, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_expr, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists_expr, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependent_function, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_function, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expr, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expr, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat2, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat2, 2), SHIFT_REPEAT(84),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier_abstraction, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_abstraction, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat1, 2), SHIFT_REPEAT(71),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_binder, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_cases, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_cases, 2), SHIFT_REPEAT(72),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_case, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prod, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier_abstraction, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_keyword, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [322] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_enumerion(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
