#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_enum = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLON = 8,
  sym_identifier = 9,
  anon_sym_SLASH_SLASH = 10,
  aux_sym__comment_token1 = 11,
  sym_source_file = 12,
  sym_enum = 13,
  sym_enum_entry = 14,
  sym_parameters = 15,
  sym_parameter = 16,
  sym__comment = 17,
  aux_sym_enum_repeat1 = 18,
  aux_sym_parameters_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__comment_token1] = "_comment_token1",
  [sym_source_file] = "source_file",
  [sym_enum] = "enum",
  [sym_enum_entry] = "enum_entry",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym__comment] = "_comment",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__comment_token1] = aux_sym__comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_enum] = sym_enum,
  [sym_enum_entry] = sym_enum_entry,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym__comment] = sym__comment,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_enum] = STATE(24),
    [sym__comment] = STATE(1),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(2), 1,
      sym__comment,
    STATE(3), 1,
      aux_sym_enum_repeat1,
    STATE(13), 1,
      sym_enum_entry,
  [19] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__comment,
    STATE(4), 1,
      aux_sym_enum_repeat1,
    STATE(13), 1,
      sym_enum_entry,
  [38] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(13), 1,
      sym_enum_entry,
    STATE(4), 2,
      sym__comment,
      aux_sym_enum_repeat1,
  [55] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(20), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym__comment,
    STATE(7), 1,
      aux_sym_parameters_repeat1,
  [71] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(22), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym__comment,
      aux_sym_parameters_repeat1,
  [85] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_parameters_repeat1,
    STATE(7), 1,
      sym__comment,
  [101] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__comment,
    STATE(17), 1,
      sym_parameters,
  [117] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym__comment,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [128] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym__comment,
    ACTIONS(33), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(9), 1,
      sym_parameter,
    STATE(11), 1,
      sym__comment,
  [152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym__comment,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [163] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym__comment,
    ACTIONS(39), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [174] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym__comment,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(5), 1,
      sym_parameter,
    STATE(15), 1,
      sym__comment,
  [198] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym__comment,
  [208] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym__comment,
  [218] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym__comment,
  [228] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym__comment,
  [238] = 3,
    ACTIONS(51), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      aux_sym__comment_token1,
    STATE(20), 1,
      sym__comment,
  [248] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(21), 1,
      sym__comment,
  [258] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym__comment,
  [268] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym__comment,
  [278] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__comment,
  [288] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym__comment,
  [298] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym__comment,
  [308] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(27), 1,
      sym__comment,
  [318] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 198,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 258,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_entry, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_entry, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_HAXE_ENUM(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
