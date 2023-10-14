#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_lambda = 14,
  sym_prod = 15,
  sym_identifier = 16,
  sym_numeral = 17,
  sym_colon = 18,
  sym_arrow = 19,
  sym_darrow = 20,
  sym_lparen = 21,
  sym_rparen = 22,
  sym_comma = 23,
  sym_source_file = 24,
  sym__toplevel = 25,
  sym_check_command = 26,
  sym__expr = 27,
  sym__infix_expr = 28,
  sym__app_expr = 29,
  sym__prefix_expr = 30,
  sym__proj_expr = 31,
  sym__simple_expr = 32,
  sym_lambda_expr = 33,
  sym_dependent_function = 34,
  sym__darrow_expr = 35,
  sym__lambda_abstraction = 36,
  sym__quantifier_abstraction = 37,
  sym__typed_binder = 38,
  sym_simple_function = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym__lambda_abstraction_repeat1 = 41,
  aux_sym__lambda_abstraction_repeat2 = 42,
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
  [sym_lambda] = "lambda",
  [sym_prod] = "prod",
  [sym_identifier] = "identifier",
  [sym_numeral] = "numeral",
  [sym_colon] = "colon",
  [sym_arrow] = "arrow",
  [sym_darrow] = "darrow",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_comma] = "comma",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_check_command] = "check_command",
  [sym__expr] = "_expr",
  [sym__infix_expr] = "_infix_expr",
  [sym__app_expr] = "_app_expr",
  [sym__prefix_expr] = "_prefix_expr",
  [sym__proj_expr] = "_proj_expr",
  [sym__simple_expr] = "_simple_expr",
  [sym_lambda_expr] = "lambda_expr",
  [sym_dependent_function] = "dependent_function",
  [sym__darrow_expr] = "_darrow_expr",
  [sym__lambda_abstraction] = "_lambda_abstraction",
  [sym__quantifier_abstraction] = "_quantifier_abstraction",
  [sym__typed_binder] = "_typed_binder",
  [sym_simple_function] = "simple_function",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__lambda_abstraction_repeat1] = "_lambda_abstraction_repeat1",
  [aux_sym__lambda_abstraction_repeat2] = "_lambda_abstraction_repeat2",
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
  [sym_lambda] = sym_lambda,
  [sym_prod] = sym_prod,
  [sym_identifier] = sym_identifier,
  [sym_numeral] = sym_numeral,
  [sym_colon] = sym_colon,
  [sym_arrow] = sym_arrow,
  [sym_darrow] = sym_darrow,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_comma] = sym_comma,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_check_command] = sym_check_command,
  [sym__expr] = sym__expr,
  [sym__infix_expr] = sym__infix_expr,
  [sym__app_expr] = sym__app_expr,
  [sym__prefix_expr] = sym__prefix_expr,
  [sym__proj_expr] = sym__proj_expr,
  [sym__simple_expr] = sym__simple_expr,
  [sym_lambda_expr] = sym_lambda_expr,
  [sym_dependent_function] = sym_dependent_function,
  [sym__darrow_expr] = sym__darrow_expr,
  [sym__lambda_abstraction] = sym__lambda_abstraction,
  [sym__quantifier_abstraction] = sym__quantifier_abstraction,
  [sym__typed_binder] = sym__typed_binder,
  [sym_simple_function] = sym_simple_function,
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
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_prod] = {
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
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
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
  [sym_check_command] = {
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
  [sym__darrow_expr] = {
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
  [sym_simple_function] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 172) ADVANCE(66);
      if (lookahead == 928 ||
          lookahead == 8719) ADVANCE(74);
      if (lookahead == 955) ADVANCE(72);
      if (lookahead == 8594) ADVANCE(88);
      if (lookahead == 8658) ADVANCE(89);
      if (lookahead == 8868) ADVANCE(70);
      if (lookahead == 8869) ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 928 ||
          lookahead == 8719) ADVANCE(74);
      if (lookahead == 955) ADVANCE(72);
      if (lookahead == 8658) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 8658) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(18);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 8594) ADVANCE(88);
      if (lookahead == 8658) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_check);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_prop);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_finite);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_nat);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_fin);
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_stream);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_enumerate);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_lambda);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_lambda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_darrow);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_lparen);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
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
    [sym_lambda] = ACTIONS(1),
    [sym_prod] = ACTIONS(1),
    [sym_numeral] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_darrow] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__toplevel] = STATE(16),
    [sym_check_command] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_check] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(27), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [34] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(23), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [68] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(36), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [102] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(35), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [136] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(14), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [170] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [204] = 7,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(13), 1,
      sym_lambda,
    ACTIONS(15), 1,
      sym_prod,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(17), 4,
      sym__expr,
      sym_lambda_expr,
      sym_dependent_function,
      sym_simple_function,
    ACTIONS(9), 5,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_numeral,
    STATE(11), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [238] = 3,
    ACTIONS(11), 1,
      sym_fin,
    ACTIONS(19), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
    STATE(12), 6,
      sym__infix_expr,
      sym__app_expr,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
      sym__darrow_expr,
  [258] = 2,
    STATE(13), 3,
      sym__prefix_expr,
      sym__proj_expr,
      sym__simple_expr,
    ACTIONS(21), 6,
      sym_prop,
      sym_finite,
      sym_enum,
      sym_nat,
      sym_identifier,
      sym_numeral,
  [272] = 3,
    ACTIONS(25), 1,
      sym_arrow,
    ACTIONS(27), 1,
      sym_darrow,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_rparen,
      sym_comma,
  [287] = 2,
    ACTIONS(27), 1,
      sym_darrow,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_arrow,
      sym_rparen,
      sym_comma,
  [300] = 1,
    ACTIONS(31), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_arrow,
      sym_darrow,
      sym_rparen,
      sym_comma,
  [311] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_rparen,
      sym_comma,
  [320] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_rparen,
      sym_comma,
  [329] = 4,
    ACTIONS(7), 1,
      sym_check,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_comment,
    STATE(20), 3,
      sym__toplevel,
      sym_check_command,
      aux_sym_source_file_repeat1,
  [344] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
      sym_colon,
      sym_rparen,
      sym_comma,
  [353] = 5,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_lparen,
    STATE(29), 1,
      aux_sym__lambda_abstraction_repeat1,
    STATE(32), 1,
      sym__lambda_abstraction,
    STATE(25), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [370] = 5,
    ACTIONS(45), 1,
      sym_lparen,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym__lambda_abstraction_repeat1,
    STATE(34), 1,
      sym__quantifier_abstraction,
    STATE(22), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [387] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym_check,
    STATE(20), 3,
      sym__toplevel,
      sym_check_command,
      aux_sym_source_file_repeat1,
  [402] = 3,
    ACTIONS(59), 1,
      sym_lparen,
    ACTIONS(57), 2,
      sym_darrow,
      sym_comma,
    STATE(21), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [414] = 3,
    ACTIONS(45), 1,
      sym_lparen,
    ACTIONS(62), 1,
      sym_comma,
    STATE(21), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [425] = 2,
    ACTIONS(66), 1,
      sym_colon,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
  [434] = 3,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym__lambda_abstraction_repeat1,
    ACTIONS(71), 2,
      sym_colon,
      sym_darrow,
  [445] = 3,
    ACTIONS(45), 1,
      sym_lparen,
    ACTIONS(73), 1,
      sym_darrow,
    STATE(21), 2,
      sym__typed_binder,
      aux_sym__lambda_abstraction_repeat2,
  [456] = 3,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_colon,
    STATE(24), 1,
      aux_sym__lambda_abstraction_repeat1,
  [466] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_check,
  [472] = 3,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_colon,
    STATE(24), 1,
      aux_sym__lambda_abstraction_repeat1,
  [482] = 3,
    ACTIONS(73), 1,
      sym_darrow,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym__lambda_abstraction_repeat1,
  [492] = 1,
    ACTIONS(83), 3,
      sym_darrow,
      sym_lparen,
      sym_comma,
  [498] = 2,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym__lambda_abstraction_repeat1,
  [505] = 1,
    ACTIONS(87), 1,
      sym_darrow,
  [509] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [513] = 1,
    ACTIONS(91), 1,
      sym_comma,
  [517] = 1,
    ACTIONS(93), 1,
      sym_comma,
  [521] = 1,
    ACTIONS(95), 1,
      sym_rparen,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 300,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 344,
  [SMALL_STATE(18)] = 353,
  [SMALL_STATE(19)] = 370,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 402,
  [SMALL_STATE(22)] = 414,
  [SMALL_STATE(23)] = 425,
  [SMALL_STATE(24)] = 434,
  [SMALL_STATE(25)] = 445,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 482,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 498,
  [SMALL_STATE(32)] = 505,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 513,
  [SMALL_STATE(35)] = 517,
  [SMALL_STATE(36)] = 521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__darrow_expr, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__app_expr, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependent_function, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expr, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_function, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat2, 2), SHIFT_REPEAT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier_abstraction, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_command, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat1, 2), SHIFT_REPEAT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lambda_abstraction_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_abstraction, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_command, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_binder, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier_abstraction, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
