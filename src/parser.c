#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_check = 2,
  sym_nat = 3,
  anon_sym_Fin = 4,
  sym_finite = 5,
  sym_enum = 6,
  sym_identifier = 7,
  sym_numeral = 8,
  sym_colon = 9,
  sym_source_file = 10,
  sym__toplevel = 11,
  sym_check = 12,
  sym__expression = 13,
  sym__type = 14,
  sym__universe = 15,
  sym_fin = 16,
  sym__term = 17,
  aux_sym_source_file_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_check] = "check",
  [sym_nat] = "nat",
  [anon_sym_Fin] = "Fin",
  [sym_finite] = "finite",
  [sym_enum] = "enum",
  [sym_identifier] = "identifier",
  [sym_numeral] = "numeral",
  [sym_colon] = "colon",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_check] = "check",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [sym__universe] = "_universe",
  [sym_fin] = "fin",
  [sym__term] = "_term",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_check] = anon_sym_check,
  [sym_nat] = sym_nat,
  [anon_sym_Fin] = anon_sym_Fin,
  [sym_finite] = sym_finite,
  [sym_enum] = sym_enum,
  [sym_identifier] = sym_identifier,
  [sym_numeral] = sym_numeral,
  [sym_colon] = sym_colon,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_check] = sym_check,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [sym__universe] = sym__universe,
  [sym_fin] = sym_fin,
  [sym__term] = sym__term,
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
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Fin] = {
    .visible = true,
    .named = false,
  },
  [sym_finite] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_check] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__universe] = {
    .visible = false,
    .named = true,
  },
  [sym_fin] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(20);
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
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_nat);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_Fin);
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_finite);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [anon_sym_Fin] = ACTIONS(1),
    [sym_finite] = ACTIONS(1),
    [sym_enum] = ACTIONS(1),
    [sym_numeral] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__toplevel] = STATE(5),
    [sym_check] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_check] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(7),
    [sym__type] = STATE(7),
    [sym__universe] = STATE(7),
    [sym_fin] = STATE(7),
    [sym__term] = STATE(7),
    [sym_nat] = ACTIONS(9),
    [anon_sym_Fin] = ACTIONS(11),
    [sym_finite] = ACTIONS(9),
    [sym_enum] = ACTIONS(9),
    [sym_identifier] = ACTIONS(9),
    [sym_numeral] = ACTIONS(9),
  },
  [3] = {
    [sym__expression] = STATE(8),
    [sym__type] = STATE(8),
    [sym__universe] = STATE(8),
    [sym_fin] = STATE(8),
    [sym__term] = STATE(8),
    [sym_nat] = ACTIONS(13),
    [anon_sym_Fin] = ACTIONS(11),
    [sym_finite] = ACTIONS(13),
    [sym_enum] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [sym_numeral] = ACTIONS(13),
  },
  [4] = {
    [sym__expression] = STATE(9),
    [sym__type] = STATE(9),
    [sym__universe] = STATE(9),
    [sym_fin] = STATE(9),
    [sym__term] = STATE(9),
    [sym_nat] = ACTIONS(15),
    [anon_sym_Fin] = ACTIONS(11),
    [sym_finite] = ACTIONS(15),
    [sym_enum] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_numeral] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_check,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    STATE(6), 3,
      sym__toplevel,
      sym_check,
      aux_sym_source_file_repeat1,
  [15] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_check,
    STATE(6), 3,
      sym__toplevel,
      sym_check,
      aux_sym_source_file_repeat1,
  [30] = 2,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
  [39] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
      sym_colon,
  [46] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_check,
  [52] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 46,
  [SMALL_STATE(10)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fin, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check, 4),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
