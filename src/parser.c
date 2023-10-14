#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_check = 2,
  sym_prop = 3,
  sym_finite = 4,
  sym_enum = 5,
  sym_nat = 6,
  sym_fin = 7,
  sym_not = 8,
  sym_size = 9,
  sym_stream = 10,
  sym_enumerate = 11,
  sym_true = 12,
  sym_false = 13,
  sym_identifier = 14,
  sym_numeral = 15,
  sym_colon = 16,
  sym_arrow = 17,
  sym_darrow = 18,
  sym_source_file = 19,
  sym__toplevel = 20,
  sym__expr = 21,
  sym__infix_expr = 22,
  sym__app_expr = 23,
  sym__prefix_expr = 24,
  sym__proj_expr = 25,
  sym__simple_expr = 26,
  sym__darrow_expr = 27,
  sym__simple_function_space = 28,
  aux_sym_source_file_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_check] = "check",
  [sym_prop] = "prop",
  [sym_finite] = "finite",
  [sym_enum] = "enum",
  [sym_nat] = "nat",
  [sym_fin] = "fin",
  [sym_not] = "not",
  [sym_size] = "size",
  [sym_stream] = "stream",
  [sym_enumerate] = "enumerate",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_numeral] = "numeral",
  [sym_colon] = "colon",
  [sym_arrow] = "arrow",
  [sym_darrow] = "darrow",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym__expr] = "_expr",
  [sym__infix_expr] = "_infix_expr",
  [sym__app_expr] = "_app_expr",
  [sym__prefix_expr] = "_prefix_expr",
  [sym__proj_expr] = "_proj_expr",
  [sym__simple_expr] = "_simple_expr",
  [sym__darrow_expr] = "_darrow_expr",
  [sym__simple_function_space] = "_simple_function_space",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_check] = sym_check,
  [sym_prop] = sym_prop,
  [sym_finite] = sym_finite,
  [sym_enum] = sym_enum,
  [sym_nat] = sym_nat,
  [sym_fin] = sym_fin,
  [sym_not] = sym_not,
  [sym_size] = sym_size,
  [sym_stream] = sym_stream,
  [sym_enumerate] = sym_enumerate,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_identifier] = sym_identifier,
  [sym_numeral] = sym_numeral,
  [sym_colon] = sym_colon,
  [sym_arrow] = sym_arrow,
  [sym_darrow] = sym_darrow,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym__expr] = sym__expr,
  [sym__infix_expr] = sym__infix_expr,
  [sym__app_expr] = sym__app_expr,
  [sym__prefix_expr] = sym__prefix_expr,
  [sym__proj_expr] = sym__proj_expr,
  [sym__simple_expr] = sym__simple_expr,
  [sym__darrow_expr] = sym__darrow_expr,
  [sym__simple_function_space] = sym__simple_function_space,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym_stream] = {
    .visible = true,
    .named = true,
  },
  [sym_enumerate] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_darrow] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
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
  [sym__darrow_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_function_space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 172) ADVANCE(56);
      if (lookahead == 8594) ADVANCE(66);
      if (lookahead == 8868) ADVANCE(60);
      if (lookahead == 8869) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'z') ADVANCE(15);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_check);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_prop);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_finite);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_nat);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_fin);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_stream);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_enumerate);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_darrow);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_check] = ACTIONS(1),
    [sym_prop] = ACTIONS(1),
    [sym_finite] = ACTIONS(1),
    [sym_enum] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [sym_fin] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_size] = ACTIONS(1),
    [sym_stream] = ACTIONS(1),
    [sym_enumerate] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_numeral] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_darrow] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym__toplevel] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_check] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      sym_fin,
    STATE(12), 2,
      sym__expr,
      sym__simple_function_space,
    ACTIONS(9), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
    STATE(7), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [24] = 4,
    ACTIONS(11), 1,
      sym_fin,
    STATE(14), 2,
      sym__expr,
      sym__simple_function_space,
    ACTIONS(9), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
    STATE(7), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [48] = 4,
    ACTIONS(11), 1,
      sym_fin,
    STATE(13), 2,
      sym__expr,
      sym__simple_function_space,
    ACTIONS(9), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
    STATE(7), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [72] = 3,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
    STATE(9), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [92] = 2,
    STATE(8), 3,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
    ACTIONS(15), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
  [106] = 3,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(21), 1,
      sym_darrow,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
  [119] = 1,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_arrow,
      sym_darrow,
  [128] = 2,
    ACTIONS(21), 1,
      sym_darrow,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_arrow,
  [139] = 4,
    ACTIONS(7), 1,
      sym_check,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    STATE(11), 2,
      sym__toplevel,
      aux_sym_source_file_repeat1,
  [153] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_check,
    STATE(11), 2,
      sym__toplevel,
      aux_sym_source_file_repeat1,
  [167] = 2,
    ACTIONS(41), 1,
      sym_colon,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
  [176] = 1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
  [183] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
  [189] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__app_expr, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__darrow_expr, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_function_space, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 4),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
