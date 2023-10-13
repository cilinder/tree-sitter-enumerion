#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_check = 1,
  sym_nat = 2,
  anon_sym_Fin = 3,
  sym_finite = 4,
  sym_enum = 5,
  sym_identifier = 6,
  sym_numeral = 7,
  sym_colon = 8,
  sym_source_file = 9,
  sym__toplevel = 10,
  sym_check = 11,
  sym__expression = 12,
  sym__type = 13,
  sym__universe = 14,
  sym_fin = 15,
  sym__term = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(16);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_nat);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_Fin);
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_finite);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
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
    [anon_sym_check] = ACTIONS(5),
  },
  [2] = {
    [sym__expression] = STATE(7),
    [sym__type] = STATE(7),
    [sym__universe] = STATE(7),
    [sym_fin] = STATE(7),
    [sym__term] = STATE(7),
    [sym_nat] = ACTIONS(7),
    [anon_sym_Fin] = ACTIONS(9),
    [sym_finite] = ACTIONS(7),
    [sym_enum] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [sym_numeral] = ACTIONS(7),
  },
  [3] = {
    [sym__expression] = STATE(8),
    [sym__type] = STATE(8),
    [sym__universe] = STATE(8),
    [sym_fin] = STATE(8),
    [sym__term] = STATE(8),
    [sym_nat] = ACTIONS(11),
    [anon_sym_Fin] = ACTIONS(9),
    [sym_finite] = ACTIONS(11),
    [sym_enum] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [sym_numeral] = ACTIONS(11),
  },
  [4] = {
    [sym__expression] = STATE(9),
    [sym__type] = STATE(9),
    [sym__universe] = STATE(9),
    [sym_fin] = STATE(9),
    [sym__term] = STATE(9),
    [sym_nat] = ACTIONS(13),
    [anon_sym_Fin] = ACTIONS(9),
    [sym_finite] = ACTIONS(13),
    [sym_enum] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [sym_numeral] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_check,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym__toplevel,
      sym_check,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_check,
    STATE(6), 3,
      sym__toplevel,
      sym_check,
      aux_sym_source_file_repeat1,
  [24] = 2,
    ACTIONS(24), 1,
      sym_colon,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_check,
  [32] = 1,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      anon_sym_check,
      sym_colon,
  [38] = 1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      anon_sym_check,
  [43] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 38,
  [SMALL_STATE(10)] = 43,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fin, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check, 4),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Enumerion(void) {
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
