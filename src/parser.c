#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 227
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 1
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 33

enum {
  anon_sym_diagram = 1,
  aux_sym_diagramId_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_LF = 4,
  anon_sym_RBRACE = 5,
  anon_sym_association = 6,
  aux_sym_associationId_token1 = 7,
  anon_sym_owner_type = 8,
  anon_sym_member_type = 9,
  anon_sym_composition = 10,
  anon_sym_aggregation = 11,
  anon_sym_generalization = 12,
  anon_sym_uses = 13,
  anon_sym_inheritance = 14,
  anon_sym_direct = 15,
  anon_sym_from = 16,
  anon_sym_to = 17,
  anon_sym_owner = 18,
  anon_sym_POUND = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_member = 22,
  aux_sym_attributeKeywordId_token1 = 23,
  anon_sym_LT_LT = 24,
  anon_sym_GT_GT = 25,
  anon_sym_COLON = 26,
  aux_sym_attributeTypeString_token1 = 27,
  anon_sym_DQUOTE = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_class = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_abstract = 33,
  anon_sym_interface = 34,
  anon_sym_definition = 35,
  aux_sym_attributeName_token1 = 36,
  aux_sym_attributeName_token2 = 37,
  aux_sym_attributeName_token3 = 38,
  aux_sym_definitionText_token1 = 39,
  sym_definitionTextEscape = 40,
  anon_sym_primitive = 41,
  aux_sym_primitiveString_token1 = 42,
  aux_sym_primitiveString_token2 = 43,
  aux_sym_primitiveString_token3 = 44,
  anon_sym_data_type = 45,
  aux_sym_dataType_token1 = 46,
  anon_sym_enum = 47,
  anon_sym_PLUS = 48,
  anon_sym_DASH = 49,
  anon_sym_TILDE = 50,
  anon_sym_SLASH = 51,
  anon_sym_DOT_DOT = 52,
  anon_sym_STAR = 53,
  anon_sym_0 = 54,
  sym_int = 55,
  anon_sym_title = 56,
  anon_sym_caption = 57,
  anon_sym_fontname = 58,
  anon_sym_include = 59,
  aux_sym__stringSingleQuote_token1 = 60,
  aux_sym__stringDoubleQuote_token1 = 61,
  aux_sym__stringNoQuote_token1 = 62,
  aux_sym__stringNoQuote_token2 = 63,
  sym_stringEscape = 64,
  anon_sym_STAR_PIPE = 65,
  aux_sym_commentMultilineDefinition_token1 = 66,
  anon_sym_PIPE_STAR = 67,
  sym_commentDefinition = 68,
  sym_comment = 69,
  sym_program = 70,
  sym_diagram = 71,
  sym_diagramId = 72,
  sym__diagramBlockContent = 73,
  sym_diagramBlock = 74,
  sym_association = 75,
  sym__associationBlock = 76,
  sym_associationBlock = 77,
  sym_associationId = 78,
  sym_associationXType = 79,
  sym_associationOwnerType = 80,
  sym_associationMemberType = 81,
  sym_associationType = 82,
  sym_name = 83,
  sym_ownerId = 84,
  sym_memberId = 85,
  sym_associationOwnerDefinition = 86,
  sym_associationOwnerAttrname = 87,
  sym_associationMemberAttrname = 88,
  sym_associationOwnerCardinality = 89,
  sym_associationMemberCardinality = 90,
  sym_associationMemberDefinition = 91,
  sym_attributeKeywordId = 92,
  sym_attributeKeyword = 93,
  sym_attributeType = 94,
  sym_attributeTypeString = 95,
  sym_class = 96,
  sym__classId = 97,
  sym_classId = 98,
  sym_classBlock = 99,
  sym__commonBlockStatement = 100,
  sym__commonBlockStatementList = 101,
  sym_classModifier = 102,
  sym_definition = 103,
  sym_attributeName = 104,
  sym_attributeDefinition = 105,
  sym_definitionBlock = 106,
  sym_definitionText = 107,
  sym_primitive = 108,
  sym_primitiveString = 109,
  sym_dataType = 110,
  sym_dataTypeId = 111,
  sym_enumId = 112,
  sym_enum = 113,
  sym_dataTypeBlock = 114,
  sym_enumBlock = 115,
  sym_visibilityMod = 116,
  sym_deriveMod = 117,
  sym_cardinalityBody = 118,
  sym_cardinality = 119,
  sym_cardinalitySet = 120,
  sym_diagramAttrPair = 121,
  sym_diagramAttrName = 122,
  sym_includeStatement = 123,
  sym_string = 124,
  sym__stringSingleQuote = 125,
  sym__stringDoubleQuote = 126,
  sym__stringNoQuote = 127,
  sym_commentMultilineDefinition = 128,
  aux_sym_diagramBlock_repeat1 = 129,
  aux_sym_associationBlock_repeat1 = 130,
  aux_sym__commonBlockStatementList_repeat1 = 131,
  aux_sym_definitionBlock_repeat1 = 132,
  aux_sym_primitiveString_repeat1 = 133,
  aux_sym_primitiveString_repeat2 = 134,
  aux_sym__stringSingleQuote_repeat1 = 135,
  aux_sym__stringDoubleQuote_repeat1 = 136,
  aux_sym__stringNoQuote_repeat1 = 137,
  aux_sym_commentMultilineDefinition_repeat1 = 138,
  alias_sym_includeFileName = 139,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_diagram] = "diagram",
  [aux_sym_diagramId_token1] = "diagramId_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [anon_sym_association] = "association",
  [aux_sym_associationId_token1] = "associationId_token1",
  [anon_sym_owner_type] = "owner_type",
  [anon_sym_member_type] = "member_type",
  [anon_sym_composition] = "composition",
  [anon_sym_aggregation] = "aggregation",
  [anon_sym_generalization] = "generalization",
  [anon_sym_uses] = "uses",
  [anon_sym_inheritance] = "inheritance",
  [anon_sym_direct] = "direct",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_owner] = "owner",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_member] = "member",
  [aux_sym_attributeKeywordId_token1] = "attributeKeywordId_token1",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [aux_sym_attributeTypeString_token1] = "attributeTypeString_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_class] = "class",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_abstract] = "abstract",
  [anon_sym_interface] = "interface",
  [anon_sym_definition] = "definition",
  [aux_sym_attributeName_token1] = "attributeName_token1",
  [aux_sym_attributeName_token2] = "attributeName_token2",
  [aux_sym_attributeName_token3] = "attributeName_token3",
  [aux_sym_definitionText_token1] = "definitionText_token1",
  [sym_definitionTextEscape] = "definitionTextEscape",
  [anon_sym_primitive] = "primitive",
  [aux_sym_primitiveString_token1] = "primitiveString_token1",
  [aux_sym_primitiveString_token2] = "primitiveString_token2",
  [aux_sym_primitiveString_token3] = "primitiveString_token3",
  [anon_sym_data_type] = "data_type",
  [aux_sym_dataType_token1] = "dataType_token1",
  [anon_sym_enum] = "enum",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR] = "*",
  [anon_sym_0] = "0",
  [sym_int] = "int",
  [anon_sym_title] = "title",
  [anon_sym_caption] = "caption",
  [anon_sym_fontname] = "fontname",
  [anon_sym_include] = "include",
  [aux_sym__stringSingleQuote_token1] = "_stringSingleQuote_token1",
  [aux_sym__stringDoubleQuote_token1] = "_stringDoubleQuote_token1",
  [aux_sym__stringNoQuote_token1] = "_stringNoQuote_token1",
  [aux_sym__stringNoQuote_token2] = "_stringNoQuote_token2",
  [sym_stringEscape] = "stringEscape",
  [anon_sym_STAR_PIPE] = "*|",
  [aux_sym_commentMultilineDefinition_token1] = "commentMultilineDefinition_token1",
  [anon_sym_PIPE_STAR] = "|*",
  [sym_commentDefinition] = "commentDefinition",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_diagram] = "diagram",
  [sym_diagramId] = "diagramId",
  [sym__diagramBlockContent] = "_diagramBlockContent",
  [sym_diagramBlock] = "diagramBlock",
  [sym_association] = "association",
  [sym__associationBlock] = "_associationBlock",
  [sym_associationBlock] = "associationBlock",
  [sym_associationId] = "associationId",
  [sym_associationXType] = "associationXType",
  [sym_associationOwnerType] = "associationOwnerType",
  [sym_associationMemberType] = "associationMemberType",
  [sym_associationType] = "associationType",
  [sym_name] = "name",
  [sym_ownerId] = "ownerId",
  [sym_memberId] = "memberId",
  [sym_associationOwnerDefinition] = "associationOwnerDefinition",
  [sym_associationOwnerAttrname] = "associationOwnerAttrname",
  [sym_associationMemberAttrname] = "associationMemberAttrname",
  [sym_associationOwnerCardinality] = "associationOwnerCardinality",
  [sym_associationMemberCardinality] = "associationMemberCardinality",
  [sym_associationMemberDefinition] = "associationMemberDefinition",
  [sym_attributeKeywordId] = "attributeKeywordId",
  [sym_attributeKeyword] = "attributeKeyword",
  [sym_attributeType] = "attributeType",
  [sym_attributeTypeString] = "attributeTypeString",
  [sym_class] = "class",
  [sym__classId] = "_classId",
  [sym_classId] = "classId",
  [sym_classBlock] = "classBlock",
  [sym__commonBlockStatement] = "_commonBlockStatement",
  [sym__commonBlockStatementList] = "_commonBlockStatementList",
  [sym_classModifier] = "classModifier",
  [sym_definition] = "definition",
  [sym_attributeName] = "attributeName",
  [sym_attributeDefinition] = "attributeDefinition",
  [sym_definitionBlock] = "definitionBlock",
  [sym_definitionText] = "definitionText",
  [sym_primitive] = "primitive",
  [sym_primitiveString] = "primitiveString",
  [sym_dataType] = "dataType",
  [sym_dataTypeId] = "dataTypeId",
  [sym_enumId] = "enumId",
  [sym_enum] = "enum",
  [sym_dataTypeBlock] = "dataTypeBlock",
  [sym_enumBlock] = "enumBlock",
  [sym_visibilityMod] = "visibilityMod",
  [sym_deriveMod] = "deriveMod",
  [sym_cardinalityBody] = "cardinalityBody",
  [sym_cardinality] = "cardinality",
  [sym_cardinalitySet] = "cardinalitySet",
  [sym_diagramAttrPair] = "diagramAttrPair",
  [sym_diagramAttrName] = "diagramAttrName",
  [sym_includeStatement] = "includeStatement",
  [sym_string] = "diagramAttrValue",
  [sym__stringSingleQuote] = "_stringSingleQuote",
  [sym__stringDoubleQuote] = "_stringDoubleQuote",
  [sym__stringNoQuote] = "_stringNoQuote",
  [sym_commentMultilineDefinition] = "commentMultilineDefinition",
  [aux_sym_diagramBlock_repeat1] = "diagramBlock_repeat1",
  [aux_sym_associationBlock_repeat1] = "associationBlock_repeat1",
  [aux_sym__commonBlockStatementList_repeat1] = "_commonBlockStatementList_repeat1",
  [aux_sym_definitionBlock_repeat1] = "definitionBlock_repeat1",
  [aux_sym_primitiveString_repeat1] = "primitiveString_repeat1",
  [aux_sym_primitiveString_repeat2] = "primitiveString_repeat2",
  [aux_sym__stringSingleQuote_repeat1] = "_stringSingleQuote_repeat1",
  [aux_sym__stringDoubleQuote_repeat1] = "_stringDoubleQuote_repeat1",
  [aux_sym__stringNoQuote_repeat1] = "_stringNoQuote_repeat1",
  [aux_sym_commentMultilineDefinition_repeat1] = "commentMultilineDefinition_repeat1",
  [alias_sym_includeFileName] = "includeFileName",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_diagram] = anon_sym_diagram,
  [aux_sym_diagramId_token1] = aux_sym_diagramId_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_association] = anon_sym_association,
  [aux_sym_associationId_token1] = aux_sym_associationId_token1,
  [anon_sym_owner_type] = anon_sym_owner_type,
  [anon_sym_member_type] = anon_sym_member_type,
  [anon_sym_composition] = anon_sym_composition,
  [anon_sym_aggregation] = anon_sym_aggregation,
  [anon_sym_generalization] = anon_sym_generalization,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_inheritance] = anon_sym_inheritance,
  [anon_sym_direct] = anon_sym_direct,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_owner] = anon_sym_owner,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_member] = anon_sym_member,
  [aux_sym_attributeKeywordId_token1] = aux_sym_attributeKeywordId_token1,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_attributeTypeString_token1] = aux_sym_attributeTypeString_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_definition] = anon_sym_definition,
  [aux_sym_attributeName_token1] = aux_sym_attributeName_token1,
  [aux_sym_attributeName_token2] = aux_sym_attributeName_token2,
  [aux_sym_attributeName_token3] = aux_sym_attributeName_token3,
  [aux_sym_definitionText_token1] = aux_sym_definitionText_token1,
  [sym_definitionTextEscape] = sym_definitionTextEscape,
  [anon_sym_primitive] = anon_sym_primitive,
  [aux_sym_primitiveString_token1] = aux_sym_primitiveString_token1,
  [aux_sym_primitiveString_token2] = aux_sym_primitiveString_token2,
  [aux_sym_primitiveString_token3] = aux_sym_primitiveString_token3,
  [anon_sym_data_type] = anon_sym_data_type,
  [aux_sym_dataType_token1] = aux_sym_dataType_token1,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_0] = anon_sym_0,
  [sym_int] = sym_int,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_caption] = anon_sym_caption,
  [anon_sym_fontname] = anon_sym_fontname,
  [anon_sym_include] = anon_sym_include,
  [aux_sym__stringSingleQuote_token1] = aux_sym__stringSingleQuote_token1,
  [aux_sym__stringDoubleQuote_token1] = aux_sym__stringDoubleQuote_token1,
  [aux_sym__stringNoQuote_token1] = aux_sym__stringNoQuote_token1,
  [aux_sym__stringNoQuote_token2] = aux_sym__stringNoQuote_token2,
  [sym_stringEscape] = sym_stringEscape,
  [anon_sym_STAR_PIPE] = anon_sym_STAR_PIPE,
  [aux_sym_commentMultilineDefinition_token1] = aux_sym_commentMultilineDefinition_token1,
  [anon_sym_PIPE_STAR] = anon_sym_PIPE_STAR,
  [sym_commentDefinition] = sym_commentDefinition,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_diagram] = sym_diagram,
  [sym_diagramId] = sym_diagramId,
  [sym__diagramBlockContent] = sym__diagramBlockContent,
  [sym_diagramBlock] = sym_diagramBlock,
  [sym_association] = sym_association,
  [sym__associationBlock] = sym__associationBlock,
  [sym_associationBlock] = sym_associationBlock,
  [sym_associationId] = sym_associationId,
  [sym_associationXType] = sym_associationXType,
  [sym_associationOwnerType] = sym_associationOwnerType,
  [sym_associationMemberType] = sym_associationMemberType,
  [sym_associationType] = sym_associationType,
  [sym_name] = sym_name,
  [sym_ownerId] = sym_ownerId,
  [sym_memberId] = sym_memberId,
  [sym_associationOwnerDefinition] = sym_associationOwnerDefinition,
  [sym_associationOwnerAttrname] = sym_associationOwnerAttrname,
  [sym_associationMemberAttrname] = sym_associationMemberAttrname,
  [sym_associationOwnerCardinality] = sym_associationOwnerCardinality,
  [sym_associationMemberCardinality] = sym_associationMemberCardinality,
  [sym_associationMemberDefinition] = sym_associationMemberDefinition,
  [sym_attributeKeywordId] = sym_attributeKeywordId,
  [sym_attributeKeyword] = sym_attributeKeyword,
  [sym_attributeType] = sym_attributeType,
  [sym_attributeTypeString] = sym_attributeTypeString,
  [sym_class] = sym_class,
  [sym__classId] = sym__classId,
  [sym_classId] = sym_classId,
  [sym_classBlock] = sym_classBlock,
  [sym__commonBlockStatement] = sym__commonBlockStatement,
  [sym__commonBlockStatementList] = sym__commonBlockStatementList,
  [sym_classModifier] = sym_classModifier,
  [sym_definition] = sym_definition,
  [sym_attributeName] = sym_attributeName,
  [sym_attributeDefinition] = sym_attributeDefinition,
  [sym_definitionBlock] = sym_definitionBlock,
  [sym_definitionText] = sym_definitionText,
  [sym_primitive] = sym_primitive,
  [sym_primitiveString] = sym_primitiveString,
  [sym_dataType] = sym_dataType,
  [sym_dataTypeId] = sym_dataTypeId,
  [sym_enumId] = sym_enumId,
  [sym_enum] = sym_enum,
  [sym_dataTypeBlock] = sym_dataTypeBlock,
  [sym_enumBlock] = sym_enumBlock,
  [sym_visibilityMod] = sym_visibilityMod,
  [sym_deriveMod] = sym_deriveMod,
  [sym_cardinalityBody] = sym_cardinalityBody,
  [sym_cardinality] = sym_cardinality,
  [sym_cardinalitySet] = sym_cardinalitySet,
  [sym_diagramAttrPair] = sym_diagramAttrPair,
  [sym_diagramAttrName] = sym_diagramAttrName,
  [sym_includeStatement] = sym_includeStatement,
  [sym_string] = sym_string,
  [sym__stringSingleQuote] = sym__stringSingleQuote,
  [sym__stringDoubleQuote] = sym__stringDoubleQuote,
  [sym__stringNoQuote] = sym__stringNoQuote,
  [sym_commentMultilineDefinition] = sym_commentMultilineDefinition,
  [aux_sym_diagramBlock_repeat1] = aux_sym_diagramBlock_repeat1,
  [aux_sym_associationBlock_repeat1] = aux_sym_associationBlock_repeat1,
  [aux_sym__commonBlockStatementList_repeat1] = aux_sym__commonBlockStatementList_repeat1,
  [aux_sym_definitionBlock_repeat1] = aux_sym_definitionBlock_repeat1,
  [aux_sym_primitiveString_repeat1] = aux_sym_primitiveString_repeat1,
  [aux_sym_primitiveString_repeat2] = aux_sym_primitiveString_repeat2,
  [aux_sym__stringSingleQuote_repeat1] = aux_sym__stringSingleQuote_repeat1,
  [aux_sym__stringDoubleQuote_repeat1] = aux_sym__stringDoubleQuote_repeat1,
  [aux_sym__stringNoQuote_repeat1] = aux_sym__stringNoQuote_repeat1,
  [aux_sym_commentMultilineDefinition_repeat1] = aux_sym_commentMultilineDefinition_repeat1,
  [alias_sym_includeFileName] = alias_sym_includeFileName,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_diagram] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagramId_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_association] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_associationId_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_owner_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_composition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aggregation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generalization] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inheritance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_direct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attributeKeywordId_token1] = {
    .visible = false,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attributeTypeString_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definition] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attributeName_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributeName_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributeName_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definitionText_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_definitionTextEscape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_primitive] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitiveString_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitiveString_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitiveString_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_data_type] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dataType_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fontname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stringSingleQuote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringDoubleQuote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringNoQuote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringNoQuote_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_stringEscape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commentMultilineDefinition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_commentDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram] = {
    .visible = true,
    .named = true,
  },
  [sym_diagramId] = {
    .visible = true,
    .named = true,
  },
  [sym__diagramBlockContent] = {
    .visible = false,
    .named = true,
  },
  [sym_diagramBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_association] = {
    .visible = true,
    .named = true,
  },
  [sym__associationBlock] = {
    .visible = false,
    .named = true,
  },
  [sym_associationBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_associationId] = {
    .visible = true,
    .named = true,
  },
  [sym_associationXType] = {
    .visible = true,
    .named = true,
  },
  [sym_associationOwnerType] = {
    .visible = true,
    .named = true,
  },
  [sym_associationMemberType] = {
    .visible = true,
    .named = true,
  },
  [sym_associationType] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_ownerId] = {
    .visible = true,
    .named = true,
  },
  [sym_memberId] = {
    .visible = true,
    .named = true,
  },
  [sym_associationOwnerDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_associationOwnerAttrname] = {
    .visible = true,
    .named = true,
  },
  [sym_associationMemberAttrname] = {
    .visible = true,
    .named = true,
  },
  [sym_associationOwnerCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_associationMemberCardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_associationMemberDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeKeywordId] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeKeyword] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeType] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeTypeString] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym__classId] = {
    .visible = false,
    .named = true,
  },
  [sym_classId] = {
    .visible = true,
    .named = true,
  },
  [sym_classBlock] = {
    .visible = true,
    .named = true,
  },
  [sym__commonBlockStatement] = {
    .visible = false,
    .named = true,
  },
  [sym__commonBlockStatementList] = {
    .visible = false,
    .named = true,
  },
  [sym_classModifier] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeName] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_definitionBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_definitionText] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_primitiveString] = {
    .visible = true,
    .named = true,
  },
  [sym_dataType] = {
    .visible = true,
    .named = true,
  },
  [sym_dataTypeId] = {
    .visible = true,
    .named = true,
  },
  [sym_enumId] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_dataTypeBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_enumBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_visibilityMod] = {
    .visible = true,
    .named = true,
  },
  [sym_deriveMod] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinalityBody] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinalitySet] = {
    .visible = true,
    .named = true,
  },
  [sym_diagramAttrPair] = {
    .visible = true,
    .named = true,
  },
  [sym_diagramAttrName] = {
    .visible = true,
    .named = true,
  },
  [sym_includeStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__stringSingleQuote] = {
    .visible = false,
    .named = true,
  },
  [sym__stringDoubleQuote] = {
    .visible = false,
    .named = true,
  },
  [sym__stringNoQuote] = {
    .visible = false,
    .named = true,
  },
  [sym_commentMultilineDefinition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagramBlock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_associationBlock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__commonBlockStatementList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definitionBlock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitiveString_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitiveString_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringSingleQuote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringDoubleQuote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringNoQuote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commentMultilineDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_includeFileName] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_attributes = 1,
  field_definition = 2,
  field_derived_modifier = 3,
  field_keyword = 4,
  field_max = 5,
  field_member_end = 6,
  field_member_end_attribute_name = 7,
  field_member_end_cardinality = 8,
  field_member_end_type = 9,
  field_members = 10,
  field_min = 11,
  field_modifier = 12,
  field_name = 13,
  field_owner_end = 14,
  field_owner_end_attribute_name = 15,
  field_owner_end_cardinality = 16,
  field_owner_end_type = 17,
  field_visibility_modifier = 18,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_definition] = "definition",
  [field_derived_modifier] = "derived_modifier",
  [field_keyword] = "keyword",
  [field_max] = "max",
  [field_member_end] = "member_end",
  [field_member_end_attribute_name] = "member_end_attribute_name",
  [field_member_end_cardinality] = "member_end_cardinality",
  [field_member_end_type] = "member_end_type",
  [field_members] = "members",
  [field_min] = "min",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_owner_end] = "owner_end",
  [field_owner_end_attribute_name] = "owner_end_attribute_name",
  [field_owner_end_cardinality] = "owner_end_cardinality",
  [field_owner_end_type] = "owner_end_type",
  [field_visibility_modifier] = "visibility_modifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 2},
  [20] = {.index = 26, .length = 1},
  [21] = {.index = 27, .length = 1},
  [22] = {.index = 28, .length = 1},
  [23] = {.index = 29, .length = 1},
  [24] = {.index = 30, .length = 3},
  [25] = {.index = 33, .length = 1},
  [26] = {.index = 34, .length = 1},
  [27] = {.index = 35, .length = 1},
  [28] = {.index = 36, .length = 1},
  [29] = {.index = 37, .length = 1},
  [30] = {.index = 38, .length = 2},
  [31] = {.index = 40, .length = 1},
  [32] = {.index = 41, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_keyword, 2},
    {field_name, 1},
  [3] =
    {field_name, 2},
  [4] =
    {field_modifier, 0},
    {field_name, 2},
  [6] =
    {field_visibility_modifier, 0},
  [7] =
    {field_derived_modifier, 0},
  [8] =
    {field_attributes, 0, .inherited = true},
  [9] =
    {field_attributes, 0},
  [10] =
    {field_keyword, 3},
    {field_name, 2},
  [12] =
    {field_keyword, 3},
    {field_modifier, 0},
    {field_name, 2},
  [15] =
    {field_owner_end_type, 1},
  [16] =
    {field_member_end_type, 1},
  [17] =
    {field_owner_end, 1},
  [18] =
    {field_member_end, 1},
  [19] =
    {field_members, 1},
  [20] =
    {field_attributes, 0, .inherited = true},
    {field_attributes, 1, .inherited = true},
  [22] =
    {field_attributes, 1, .inherited = true},
    {field_members, 1},
  [24] =
    {field_members, 1},
    {field_members, 2},
  [26] =
    {field_attributes, 1, .inherited = true},
  [27] =
    {field_min, 0},
  [28] =
    {field_owner_end_attribute_name, 1},
  [29] =
    {field_member_end_attribute_name, 1},
  [30] =
    {field_members, 1},
    {field_members, 2},
    {field_members, 3},
  [33] =
    {field_definition, 1},
  [34] =
    {field_owner_end_attribute_name, 2},
  [35] =
    {field_owner_end_cardinality, 1},
  [36] =
    {field_member_end_attribute_name, 2},
  [37] =
    {field_member_end_cardinality, 1},
  [38] =
    {field_max, 2},
    {field_min, 0},
  [40] =
    {field_owner_end_attribute_name, 3},
  [41] =
    {field_member_end_attribute_name, 3},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_includeFileName,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_string, 2,
    sym_string,
    alias_sym_includeFileName,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(189);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '*') ADVANCE(264);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '~') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(185);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(281);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '|') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '~') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(249);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '~') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '|') ADVANCE(285);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(290);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(263);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(262);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == '<') ADVANCE(220);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(221);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 177:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 178:
      if (lookahead == 'w') ADVANCE(123);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 180:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 182:
      if (lookahead == 'z') ADVANCE(48);
      END_STATE();
    case 183:
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 184:
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 185:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(284);
      END_STATE();
    case 186:
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(249);
      END_STATE();
    case 187:
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 188:
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_diagram);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_diagramId_token1);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_diagramId_token1);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_association);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_associationId_token1);
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == '-') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_associationId_token1);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_associationId_token1);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_owner_type);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_member_type);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_aggregation);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_generalization);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_inheritance);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_direct);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_owner);
      if (lookahead == '_') ADVANCE(168);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_member);
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_attributeKeywordId_token1);
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_attributeKeywordId_token1);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_attributeKeywordId_token1);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_attributeKeywordId_token1);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_attributeTypeString_token1);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_definition);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_attributeName_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_attributeName_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_attributeName_token3);
      if (lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_definitionText_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(292);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_definitionText_token1);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_definitionText_token1);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_definitionText_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_definitionTextEscape);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_primitiveString_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_primitiveString_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_primitiveString_token3);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_data_type);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_dataType_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '|') ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '0') ADVANCE(267);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_caption);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_fontname);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__stringSingleQuote_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__stringSingleQuote_token1);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__stringSingleQuote_token1);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__stringDoubleQuote_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__stringDoubleQuote_token1);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__stringDoubleQuote_token1);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__stringNoQuote_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__stringNoQuote_token1);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__stringNoQuote_token1);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__stringNoQuote_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__stringNoQuote_token2);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__stringNoQuote_token2);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_stringEscape);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_STAR_PIPE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_commentMultilineDefinition_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_commentMultilineDefinition_token1);
      if (lookahead == '*') ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_commentMultilineDefinition_token1);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_commentMultilineDefinition_token1);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '|') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PIPE_STAR);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_commentDefinition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 28},
  [202] = {.lex_state = 28},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 28},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_diagram] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_association] = ACTIONS(1),
    [anon_sym_owner_type] = ACTIONS(1),
    [anon_sym_member_type] = ACTIONS(1),
    [anon_sym_composition] = ACTIONS(1),
    [anon_sym_aggregation] = ACTIONS(1),
    [anon_sym_generalization] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_inheritance] = ACTIONS(1),
    [anon_sym_direct] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_owner] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_definition] = ACTIONS(1),
    [sym_definitionTextEscape] = ACTIONS(1),
    [anon_sym_primitive] = ACTIONS(1),
    [aux_sym_primitiveString_token2] = ACTIONS(1),
    [aux_sym_primitiveString_token3] = ACTIONS(1),
    [anon_sym_data_type] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_caption] = ACTIONS(1),
    [anon_sym_fontname] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [sym_stringEscape] = ACTIONS(1),
    [anon_sym_STAR_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_STAR] = ACTIONS(1),
    [sym_commentDefinition] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(222),
    [sym_diagram] = STATE(214),
    [anon_sym_diagram] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_association,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      anon_sym_primitive,
    ACTIONS(17), 1,
      anon_sym_data_type,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(27), 1,
      sym_commentDefinition,
    STATE(207), 1,
      sym_classModifier,
    STATE(209), 1,
      sym_diagramAttrName,
    ACTIONS(13), 2,
      anon_sym_abstract,
      anon_sym_interface,
    ACTIONS(21), 3,
      anon_sym_title,
      anon_sym_caption,
      anon_sym_fontname,
    STATE(131), 9,
      sym__diagramBlockContent,
      sym_association,
      sym_class,
      sym_primitive,
      sym_dataType,
      sym_enum,
      sym_diagramAttrPair,
      sym_includeStatement,
      sym_commentMultilineDefinition,
  [57] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_association,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      anon_sym_primitive,
    ACTIONS(17), 1,
      anon_sym_data_type,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_commentDefinition,
    STATE(207), 1,
      sym_classModifier,
    STATE(209), 1,
      sym_diagramAttrName,
    ACTIONS(13), 2,
      anon_sym_abstract,
      anon_sym_interface,
    ACTIONS(21), 3,
      anon_sym_title,
      anon_sym_caption,
      anon_sym_fontname,
    STATE(106), 9,
      sym__diagramBlockContent,
      sym_association,
      sym_class,
      sym_primitive,
      sym_dataType,
      sym_enum,
      sym_diagramAttrPair,
      sym_includeStatement,
      sym_commentMultilineDefinition,
  [114] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_association,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      anon_sym_primitive,
    ACTIONS(17), 1,
      anon_sym_data_type,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(27), 1,
      sym_commentDefinition,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_classModifier,
    STATE(209), 1,
      sym_diagramAttrName,
    ACTIONS(13), 2,
      anon_sym_abstract,
      anon_sym_interface,
    ACTIONS(21), 3,
      anon_sym_title,
      anon_sym_caption,
      anon_sym_fontname,
    STATE(131), 9,
      sym__diagramBlockContent,
      sym_association,
      sym_class,
      sym_primitive,
      sym_dataType,
      sym_enum,
      sym_diagramAttrPair,
      sym_includeStatement,
      sym_commentMultilineDefinition,
  [171] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_association,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      anon_sym_primitive,
    ACTIONS(17), 1,
      anon_sym_data_type,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(27), 1,
      sym_commentDefinition,
    STATE(207), 1,
      sym_classModifier,
    STATE(209), 1,
      sym_diagramAttrName,
    ACTIONS(13), 2,
      anon_sym_abstract,
      anon_sym_interface,
    ACTIONS(21), 3,
      anon_sym_title,
      anon_sym_caption,
      anon_sym_fontname,
    STATE(131), 9,
      sym__diagramBlockContent,
      sym_association,
      sym_class,
      sym_primitive,
      sym_dataType,
      sym_enum,
      sym_diagramAttrPair,
      sym_includeStatement,
      sym_commentMultilineDefinition,
  [225] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_definition,
    ACTIONS(43), 1,
      aux_sym_attributeName_token3,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      sym_commentDefinition,
    STATE(22), 1,
      sym_attributeName,
    STATE(26), 1,
      sym_visibilityMod,
    STATE(83), 1,
      sym_deriveMod,
    STATE(181), 1,
      sym_attributeDefinition,
    STATE(217), 1,
      sym__commonBlockStatementList,
    ACTIONS(41), 2,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
    STATE(98), 3,
      sym__commonBlockStatement,
      sym_definition,
      sym_commentMultilineDefinition,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [277] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(39), 1,
      anon_sym_definition,
    ACTIONS(43), 1,
      aux_sym_attributeName_token3,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      sym_commentDefinition,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_attributeName,
    STATE(26), 1,
      sym_visibilityMod,
    STATE(83), 1,
      sym_deriveMod,
    STATE(181), 1,
      sym_attributeDefinition,
    STATE(208), 1,
      sym__commonBlockStatementList,
    ACTIONS(41), 2,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
    STATE(98), 3,
      sym__commonBlockStatement,
      sym_definition,
      sym_commentMultilineDefinition,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [329] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(39), 1,
      anon_sym_definition,
    ACTIONS(43), 1,
      aux_sym_attributeName_token3,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      sym_commentDefinition,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_attributeName,
    STATE(26), 1,
      sym_visibilityMod,
    STATE(83), 1,
      sym_deriveMod,
    STATE(181), 1,
      sym_attributeDefinition,
    STATE(215), 1,
      sym__commonBlockStatementList,
    ACTIONS(41), 2,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
    STATE(98), 3,
      sym__commonBlockStatement,
      sym_definition,
      sym_commentMultilineDefinition,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [381] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(39), 1,
      anon_sym_definition,
    ACTIONS(43), 1,
      aux_sym_attributeName_token3,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_commentDefinition,
    STATE(22), 1,
      sym_attributeName,
    STATE(26), 1,
      sym_visibilityMod,
    STATE(83), 1,
      sym_deriveMod,
    STATE(181), 1,
      sym_attributeDefinition,
    ACTIONS(41), 2,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
    STATE(164), 3,
      sym__commonBlockStatement,
      sym_definition,
      sym_commentMultilineDefinition,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [430] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(39), 1,
      anon_sym_definition,
    ACTIONS(43), 1,
      aux_sym_attributeName_token3,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      sym_commentDefinition,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_attributeName,
    STATE(26), 1,
      sym_visibilityMod,
    STATE(83), 1,
      sym_deriveMod,
    STATE(181), 1,
      sym_attributeDefinition,
    ACTIONS(41), 2,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
    STATE(164), 3,
      sym__commonBlockStatement,
      sym_definition,
      sym_commentMultilineDefinition,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [479] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(39), 1,
      anon_sym_definition,
    ACTIONS(43), 1,
      aux_sym_attributeName_token3,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      sym_commentDefinition,
    STATE(22), 1,
      sym_attributeName,
    STATE(26), 1,
      sym_visibilityMod,
    STATE(83), 1,
      sym_deriveMod,
    STATE(181), 1,
      sym_attributeDefinition,
    ACTIONS(41), 2,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
    STATE(164), 3,
      sym__commonBlockStatement,
      sym_definition,
      sym_commentMultilineDefinition,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [525] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_owner_type,
    ACTIONS(63), 1,
      anon_sym_member_type,
    ACTIONS(65), 1,
      anon_sym_owner,
    ACTIONS(67), 1,
      anon_sym_member,
    ACTIONS(69), 1,
      sym_commentDefinition,
    STATE(160), 2,
      sym_associationOwnerType,
      sym_associationMemberType,
    STATE(118), 5,
      sym__associationBlock,
      sym_associationXType,
      sym_associationOwnerDefinition,
      sym_associationMemberDefinition,
      sym_commentMultilineDefinition,
  [561] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(61), 1,
      anon_sym_owner_type,
    ACTIONS(63), 1,
      anon_sym_member_type,
    ACTIONS(65), 1,
      anon_sym_owner,
    ACTIONS(67), 1,
      anon_sym_member,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_commentDefinition,
    STATE(160), 2,
      sym_associationOwnerType,
      sym_associationMemberType,
    STATE(92), 5,
      sym__associationBlock,
      sym_associationXType,
      sym_associationOwnerDefinition,
      sym_associationMemberDefinition,
      sym_commentMultilineDefinition,
  [597] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(61), 1,
      anon_sym_owner_type,
    ACTIONS(63), 1,
      anon_sym_member_type,
    ACTIONS(65), 1,
      anon_sym_owner,
    ACTIONS(67), 1,
      anon_sym_member,
    ACTIONS(69), 1,
      sym_commentDefinition,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(160), 2,
      sym_associationOwnerType,
      sym_associationMemberType,
    STATE(118), 5,
      sym__associationBlock,
      sym_associationXType,
      sym_associationOwnerDefinition,
      sym_associationMemberDefinition,
      sym_commentMultilineDefinition,
  [633] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR_PIPE,
    ACTIONS(61), 1,
      anon_sym_owner_type,
    ACTIONS(63), 1,
      anon_sym_member_type,
    ACTIONS(65), 1,
      anon_sym_owner,
    ACTIONS(67), 1,
      anon_sym_member,
    ACTIONS(69), 1,
      sym_commentDefinition,
    STATE(160), 2,
      sym_associationOwnerType,
      sym_associationMemberType,
    STATE(118), 5,
      sym__associationBlock,
      sym_associationXType,
      sym_associationOwnerDefinition,
      sym_associationMemberDefinition,
      sym_commentMultilineDefinition,
  [666] = 7,
    ACTIONS(77), 1,
      aux_sym_associationId_token1,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      sym_comment,
    STATE(68), 1,
      sym_visibilityMod,
    STATE(104), 1,
      sym_name,
    STATE(183), 1,
      sym_deriveMod,
    ACTIONS(79), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [691] = 7,
    ACTIONS(77), 1,
      aux_sym_associationId_token1,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      sym_comment,
    STATE(70), 1,
      sym_visibilityMod,
    STATE(102), 1,
      sym_name,
    STATE(188), 1,
      sym_deriveMod,
    ACTIONS(79), 4,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(129), 1,
      sym_associationType,
    ACTIONS(85), 7,
      anon_sym_association,
      anon_sym_composition,
      anon_sym_aggregation,
      anon_sym_generalization,
      anon_sym_uses,
      anon_sym_inheritance,
      anon_sym_direct,
  [732] = 9,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_attributeType,
    STATE(80), 1,
      sym_cardinality,
    STATE(187), 1,
      sym_classBlock,
  [760] = 9,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_attributeType,
    STATE(65), 1,
      sym_cardinality,
    STATE(175), 1,
      sym_classBlock,
  [788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(130), 1,
      sym_associationType,
    ACTIONS(85), 7,
      anon_sym_association,
      anon_sym_composition,
      anon_sym_aggregation,
      anon_sym_generalization,
      anon_sym_uses,
      anon_sym_inheritance,
      anon_sym_direct,
  [804] = 9,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_attributeType,
    STATE(52), 1,
      sym_cardinality,
    STATE(142), 1,
      sym_classBlock,
  [832] = 6,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      aux_sym__stringNoQuote_token1,
    STATE(159), 1,
      sym_string,
    STATE(155), 3,
      sym__stringSingleQuote,
      sym__stringDoubleQuote,
      sym__stringNoQuote,
  [853] = 6,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      aux_sym__stringNoQuote_token1,
    STATE(126), 1,
      sym_string,
    STATE(155), 3,
      sym__stringSingleQuote,
      sym__stringDoubleQuote,
      sym__stringNoQuote,
  [874] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_cardinality,
    STATE(187), 1,
      sym_classBlock,
  [896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_attributeName,
    STATE(51), 1,
      sym_deriveMod,
    ACTIONS(41), 3,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
      aux_sym_attributeName_token3,
  [914] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      anon_sym_LT_LT,
    STATE(86), 1,
      sym_attributeKeyword,
    STATE(178), 1,
      sym_dataTypeBlock,
  [936] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT_LT,
    ACTIONS(121), 1,
      aux_sym_attributeTypeString_token1,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym_attributeKeyword,
    STATE(61), 1,
      sym_attributeTypeString,
  [958] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_cardinality,
    STATE(175), 1,
      sym_classBlock,
  [980] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_LT_LT,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_attributeKeyword,
    STATE(143), 1,
      sym_classBlock,
  [1002] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      sym_associationMemberAttrname,
    STATE(156), 1,
      sym_associationMemberCardinality,
  [1024] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_associationOwnerAttrname,
    STATE(153), 1,
      sym_associationOwnerCardinality,
  [1046] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_attributeKeyword,
    STATE(127), 1,
      sym_classBlock,
  [1068] = 7,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_cardinality,
    STATE(168), 1,
      sym_classBlock,
  [1090] = 4,
    ACTIONS(83), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym__stringNoQuote_repeat1,
    ACTIONS(155), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
    ACTIONS(157), 2,
      aux_sym__stringNoQuote_token2,
      sym_stringEscape,
  [1105] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      aux_sym_definitionText_token1,
      sym_definitionTextEscape,
    STATE(41), 2,
      sym_definitionText,
      aux_sym_definitionBlock_repeat1,
  [1120] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(163), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [1133] = 4,
    ACTIONS(83), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym__stringNoQuote_repeat1,
    ACTIONS(167), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
    ACTIONS(169), 2,
      aux_sym__stringNoQuote_token2,
      sym_stringEscape,
  [1148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_cardinalitySet,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_0,
      sym_int,
  [1163] = 4,
    ACTIONS(83), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym__stringNoQuote_repeat1,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
    ACTIONS(178), 2,
      aux_sym__stringNoQuote_token2,
      sym_stringEscape,
  [1178] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 2,
      aux_sym_definitionText_token1,
      sym_definitionTextEscape,
    STATE(41), 2,
      sym_definitionText,
      aux_sym_definitionBlock_repeat1,
  [1193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 1,
      sym_cardinalitySet,
    STATE(199), 1,
      sym_cardinalityBody,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_0,
      sym_int,
  [1208] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      aux_sym_definitionText_token1,
      sym_definitionTextEscape,
    STATE(36), 2,
      sym_definitionText,
      aux_sym_definitionBlock_repeat1,
  [1223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 1,
      sym_cardinalitySet,
    STATE(204), 1,
      sym_cardinalityBody,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_0,
      sym_int,
  [1238] = 6,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_diagramId_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_dataTypeId,
    STATE(58), 1,
      sym__classId,
  [1257] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
  [1272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 1,
      sym_cardinalitySet,
    STATE(213), 1,
      sym_cardinalityBody,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_0,
      sym_int,
  [1287] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_diagramId_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_primitiveString_token3,
    STATE(57), 1,
      aux_sym_primitiveString_repeat2,
  [1303] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(207), 3,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_LBRACE,
      aux_sym_attributeTypeString_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_attributeName,
    ACTIONS(41), 3,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
      aux_sym_attributeName_token3,
  [1337] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_classBlock,
  [1353] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_classBlock,
  [1369] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      aux_sym_diagramId_token1,
    ACTIONS(217), 1,
      aux_sym_primitiveString_token2,
    STATE(56), 1,
      aux_sym_primitiveString_repeat1,
  [1385] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(219), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
  [1397] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_diagramId_token1,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      aux_sym_primitiveString_token2,
    STATE(67), 1,
      aux_sym_primitiveString_repeat1,
  [1413] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      aux_sym_diagramId_token1,
    ACTIONS(231), 1,
      aux_sym_primitiveString_token3,
    STATE(81), 1,
      aux_sym_primitiveString_repeat2,
  [1429] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(233), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
  [1441] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(237), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_attributeTypeString_token1,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_attributeTypeString,
  [1469] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(241), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT_LT,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_enumBlock,
    STATE(140), 1,
      sym_attributeKeyword,
  [1497] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(247), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
  [1509] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      aux_sym__stringDoubleQuote_repeat1,
    ACTIONS(253), 2,
      aux_sym__stringDoubleQuote_token1,
      sym_stringEscape,
  [1523] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_classBlock,
  [1539] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym__stringSingleQuote_repeat1,
    ACTIONS(257), 2,
      aux_sym__stringSingleQuote_token1,
      sym_stringEscape,
  [1553] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_diagramId_token1,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      aux_sym_primitiveString_token2,
    STATE(67), 1,
      aux_sym_primitiveString_repeat1,
  [1569] = 5,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_associationId_token1,
    STATE(99), 1,
      sym_name,
    STATE(180), 1,
      sym_deriveMod,
  [1585] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(269), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
  [1597] = 5,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_associationId_token1,
    STATE(96), 1,
      sym_name,
    STATE(176), 1,
      sym_deriveMod,
  [1613] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 3,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_primitiveString_token1,
    STATE(165), 1,
      sym_primitiveString,
  [1641] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_classBlock,
  [1657] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_associationOwnerCardinality,
  [1673] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_associationMemberCardinality,
  [1689] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      aux_sym__stringSingleQuote_repeat1,
    ACTIONS(297), 2,
      aux_sym__stringSingleQuote_token1,
      sym_stringEscape,
  [1703] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(299), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1715] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(303), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1727] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym__stringSingleQuote_repeat1,
    ACTIONS(309), 2,
      aux_sym__stringSingleQuote_token1,
      sym_stringEscape,
  [1741] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_classBlock,
  [1757] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_diagramId_token1,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(317), 1,
      aux_sym_primitiveString_token3,
    STATE(81), 1,
      aux_sym_primitiveString_repeat2,
  [1773] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(320), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_attributeName,
    ACTIONS(41), 3,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
      aux_sym_attributeName_token3,
  [1797] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(324), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    ACTIONS(328), 3,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
      aux_sym_attributeName_token3,
  [1821] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_dataTypeBlock,
  [1837] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__stringDoubleQuote_repeat1,
    ACTIONS(338), 2,
      aux_sym__stringDoubleQuote_token1,
      sym_stringEscape,
  [1851] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      aux_sym__stringDoubleQuote_repeat1,
    ACTIONS(342), 2,
      aux_sym__stringDoubleQuote_token1,
      sym_stringEscape,
  [1865] = 5,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_classBlock,
  [1881] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(349), 1,
      aux_sym_diagramId_token1,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym__classId,
  [1894] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_diagramId_token1,
    STATE(33), 1,
      sym_classId,
    STATE(55), 1,
      sym__classId,
  [1907] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_associationBlock_repeat1,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1931] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1942] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1953] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      aux_sym_attributeName_token1,
      aux_sym_attributeName_token2,
      aux_sym_attributeName_token3,
  [1973] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym__commonBlockStatementList_repeat1,
  [1986] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1997] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_diagramId_token1,
    STATE(30), 1,
      sym_classId,
    STATE(55), 1,
      sym__classId,
  [2010] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(381), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2021] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2032] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_commentMultilineDefinition_token1,
    ACTIONS(391), 1,
      anon_sym_PIPE_STAR,
    STATE(114), 1,
      aux_sym_commentMultilineDefinition_repeat1,
  [2045] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LF,
    ACTIONS(395), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2056] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2067] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_diagramBlock_repeat1,
  [2080] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym__commonBlockStatementList_repeat1,
  [2093] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_RBRACE,
      aux_sym_definitionText_token1,
      sym_definitionTextEscape,
  [2102] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_associationBlock_repeat1,
  [2115] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_associationBlock_repeat1,
  [2128] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_diagramBlock_repeat1,
  [2141] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(349), 1,
      aux_sym_diagramId_token1,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      sym__classId,
  [2154] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_diagramBlock_repeat1,
  [2167] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_commentMultilineDefinition_token1,
    ACTIONS(432), 1,
      anon_sym_PIPE_STAR,
    STATE(116), 1,
      aux_sym_commentMultilineDefinition_repeat1,
  [2180] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(434), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2191] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_commentMultilineDefinition_token1,
    ACTIONS(439), 1,
      anon_sym_PIPE_STAR,
    STATE(116), 1,
      aux_sym_commentMultilineDefinition_repeat1,
  [2204] = 4,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym__commonBlockStatementList_repeat1,
  [2217] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      anon_sym_LF,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_associationBlock,
  [2237] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
  [2247] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [2257] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_diagramId_token1,
    STATE(184), 1,
      sym_diagramId,
  [2267] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_associationId_token1,
    STATE(32), 1,
      sym_ownerId,
  [2277] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_attributeKeywordId_token1,
    STATE(224), 1,
      sym_attributeKeywordId,
  [2287] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
  [2297] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
  [2307] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [2317] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [2327] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
  [2337] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
  [2347] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_LF,
  [2357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2365] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [2375] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
  [2385] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
  [2395] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [2405] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
  [2415] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
  [2425] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_enumBlock,
  [2445] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
  [2455] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
  [2465] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
  [2475] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_attributeKeywordId_token1,
    STATE(196), 1,
      sym_attributeKeywordId,
  [2485] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_associationId_token1,
    ACTIONS(330), 1,
      anon_sym_SLASH,
  [2495] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
  [2505] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
  [2515] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
  [2525] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
  [2535] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [2545] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
  [2555] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
  [2565] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
  [2575] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
  [2585] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
  [2595] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [2605] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
  [2615] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_associationId_token1,
    STATE(31), 1,
      sym_memberId,
  [2625] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
  [2635] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
  [2645] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_definitionBlock,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
  [2673] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
  [2683] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
  [2693] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [2703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
  [2711] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
  [2721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    ACTIONS(599), 1,
      anon_sym_DOT_DOT,
  [2731] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
  [2741] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_attributeKeywordId_token1,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
  [2751] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      aux_sym_attributeKeywordId_token1,
  [2761] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
  [2771] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
  [2781] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
  [2791] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_associationId_token1,
    STATE(94), 1,
      sym_name,
  [2801] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
  [2811] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [2821] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [2831] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_associationId_token1,
    STATE(95), 1,
      sym_name,
  [2841] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LF,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
  [2851] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [2861] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_associationId_token1,
    STATE(99), 1,
      sym_name,
  [2871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_diagramBlock,
  [2881] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [2891] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
  [2901] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [2911] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_associationId_token1,
    STATE(96), 1,
      sym_name,
  [2921] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_associationId_token1,
    STATE(119), 1,
      sym_associationId,
  [2931] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
  [2941] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
  [2951] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_diagramId_token1,
    STATE(62), 1,
      sym_enumId,
  [2961] = 3,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_GT_GT,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_GT_GT,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SQUOTE,
  [3020] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_dataType_token1,
  [3027] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(679), 1,
      aux_sym_dataType_token1,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SQUOTE,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_class,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [3076] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym_dataType_token1,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_class,
  [3097] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_associationId_token1,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [3146] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_diagramId_token1,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_GT_GT,
  [3188] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_diagramId_token1,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 329,
  [SMALL_STATE(9)] = 381,
  [SMALL_STATE(10)] = 430,
  [SMALL_STATE(11)] = 479,
  [SMALL_STATE(12)] = 525,
  [SMALL_STATE(13)] = 561,
  [SMALL_STATE(14)] = 597,
  [SMALL_STATE(15)] = 633,
  [SMALL_STATE(16)] = 666,
  [SMALL_STATE(17)] = 691,
  [SMALL_STATE(18)] = 716,
  [SMALL_STATE(19)] = 732,
  [SMALL_STATE(20)] = 760,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 853,
  [SMALL_STATE(25)] = 874,
  [SMALL_STATE(26)] = 896,
  [SMALL_STATE(27)] = 914,
  [SMALL_STATE(28)] = 936,
  [SMALL_STATE(29)] = 958,
  [SMALL_STATE(30)] = 980,
  [SMALL_STATE(31)] = 1002,
  [SMALL_STATE(32)] = 1024,
  [SMALL_STATE(33)] = 1046,
  [SMALL_STATE(34)] = 1068,
  [SMALL_STATE(35)] = 1090,
  [SMALL_STATE(36)] = 1105,
  [SMALL_STATE(37)] = 1120,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1148,
  [SMALL_STATE(40)] = 1163,
  [SMALL_STATE(41)] = 1178,
  [SMALL_STATE(42)] = 1193,
  [SMALL_STATE(43)] = 1208,
  [SMALL_STATE(44)] = 1223,
  [SMALL_STATE(45)] = 1238,
  [SMALL_STATE(46)] = 1257,
  [SMALL_STATE(47)] = 1272,
  [SMALL_STATE(48)] = 1287,
  [SMALL_STATE(49)] = 1303,
  [SMALL_STATE(50)] = 1315,
  [SMALL_STATE(51)] = 1325,
  [SMALL_STATE(52)] = 1337,
  [SMALL_STATE(53)] = 1353,
  [SMALL_STATE(54)] = 1369,
  [SMALL_STATE(55)] = 1385,
  [SMALL_STATE(56)] = 1397,
  [SMALL_STATE(57)] = 1413,
  [SMALL_STATE(58)] = 1429,
  [SMALL_STATE(59)] = 1441,
  [SMALL_STATE(60)] = 1453,
  [SMALL_STATE(61)] = 1469,
  [SMALL_STATE(62)] = 1481,
  [SMALL_STATE(63)] = 1497,
  [SMALL_STATE(64)] = 1509,
  [SMALL_STATE(65)] = 1523,
  [SMALL_STATE(66)] = 1539,
  [SMALL_STATE(67)] = 1553,
  [SMALL_STATE(68)] = 1569,
  [SMALL_STATE(69)] = 1585,
  [SMALL_STATE(70)] = 1597,
  [SMALL_STATE(71)] = 1613,
  [SMALL_STATE(72)] = 1625,
  [SMALL_STATE(73)] = 1641,
  [SMALL_STATE(74)] = 1657,
  [SMALL_STATE(75)] = 1673,
  [SMALL_STATE(76)] = 1689,
  [SMALL_STATE(77)] = 1703,
  [SMALL_STATE(78)] = 1715,
  [SMALL_STATE(79)] = 1727,
  [SMALL_STATE(80)] = 1741,
  [SMALL_STATE(81)] = 1757,
  [SMALL_STATE(82)] = 1773,
  [SMALL_STATE(83)] = 1785,
  [SMALL_STATE(84)] = 1797,
  [SMALL_STATE(85)] = 1809,
  [SMALL_STATE(86)] = 1821,
  [SMALL_STATE(87)] = 1837,
  [SMALL_STATE(88)] = 1851,
  [SMALL_STATE(89)] = 1865,
  [SMALL_STATE(90)] = 1881,
  [SMALL_STATE(91)] = 1894,
  [SMALL_STATE(92)] = 1907,
  [SMALL_STATE(93)] = 1920,
  [SMALL_STATE(94)] = 1931,
  [SMALL_STATE(95)] = 1942,
  [SMALL_STATE(96)] = 1953,
  [SMALL_STATE(97)] = 1964,
  [SMALL_STATE(98)] = 1973,
  [SMALL_STATE(99)] = 1986,
  [SMALL_STATE(100)] = 1997,
  [SMALL_STATE(101)] = 2010,
  [SMALL_STATE(102)] = 2021,
  [SMALL_STATE(103)] = 2032,
  [SMALL_STATE(104)] = 2045,
  [SMALL_STATE(105)] = 2056,
  [SMALL_STATE(106)] = 2067,
  [SMALL_STATE(107)] = 2080,
  [SMALL_STATE(108)] = 2093,
  [SMALL_STATE(109)] = 2102,
  [SMALL_STATE(110)] = 2115,
  [SMALL_STATE(111)] = 2128,
  [SMALL_STATE(112)] = 2141,
  [SMALL_STATE(113)] = 2154,
  [SMALL_STATE(114)] = 2167,
  [SMALL_STATE(115)] = 2180,
  [SMALL_STATE(116)] = 2191,
  [SMALL_STATE(117)] = 2204,
  [SMALL_STATE(118)] = 2217,
  [SMALL_STATE(119)] = 2227,
  [SMALL_STATE(120)] = 2237,
  [SMALL_STATE(121)] = 2247,
  [SMALL_STATE(122)] = 2257,
  [SMALL_STATE(123)] = 2267,
  [SMALL_STATE(124)] = 2277,
  [SMALL_STATE(125)] = 2287,
  [SMALL_STATE(126)] = 2297,
  [SMALL_STATE(127)] = 2307,
  [SMALL_STATE(128)] = 2317,
  [SMALL_STATE(129)] = 2327,
  [SMALL_STATE(130)] = 2337,
  [SMALL_STATE(131)] = 2347,
  [SMALL_STATE(132)] = 2357,
  [SMALL_STATE(133)] = 2365,
  [SMALL_STATE(134)] = 2375,
  [SMALL_STATE(135)] = 2385,
  [SMALL_STATE(136)] = 2395,
  [SMALL_STATE(137)] = 2405,
  [SMALL_STATE(138)] = 2415,
  [SMALL_STATE(139)] = 2425,
  [SMALL_STATE(140)] = 2435,
  [SMALL_STATE(141)] = 2445,
  [SMALL_STATE(142)] = 2455,
  [SMALL_STATE(143)] = 2465,
  [SMALL_STATE(144)] = 2475,
  [SMALL_STATE(145)] = 2485,
  [SMALL_STATE(146)] = 2495,
  [SMALL_STATE(147)] = 2505,
  [SMALL_STATE(148)] = 2515,
  [SMALL_STATE(149)] = 2525,
  [SMALL_STATE(150)] = 2535,
  [SMALL_STATE(151)] = 2545,
  [SMALL_STATE(152)] = 2555,
  [SMALL_STATE(153)] = 2565,
  [SMALL_STATE(154)] = 2575,
  [SMALL_STATE(155)] = 2585,
  [SMALL_STATE(156)] = 2595,
  [SMALL_STATE(157)] = 2605,
  [SMALL_STATE(158)] = 2615,
  [SMALL_STATE(159)] = 2625,
  [SMALL_STATE(160)] = 2635,
  [SMALL_STATE(161)] = 2645,
  [SMALL_STATE(162)] = 2655,
  [SMALL_STATE(163)] = 2665,
  [SMALL_STATE(164)] = 2673,
  [SMALL_STATE(165)] = 2683,
  [SMALL_STATE(166)] = 2693,
  [SMALL_STATE(167)] = 2703,
  [SMALL_STATE(168)] = 2711,
  [SMALL_STATE(169)] = 2721,
  [SMALL_STATE(170)] = 2731,
  [SMALL_STATE(171)] = 2741,
  [SMALL_STATE(172)] = 2751,
  [SMALL_STATE(173)] = 2761,
  [SMALL_STATE(174)] = 2771,
  [SMALL_STATE(175)] = 2781,
  [SMALL_STATE(176)] = 2791,
  [SMALL_STATE(177)] = 2801,
  [SMALL_STATE(178)] = 2811,
  [SMALL_STATE(179)] = 2821,
  [SMALL_STATE(180)] = 2831,
  [SMALL_STATE(181)] = 2841,
  [SMALL_STATE(182)] = 2851,
  [SMALL_STATE(183)] = 2861,
  [SMALL_STATE(184)] = 2871,
  [SMALL_STATE(185)] = 2881,
  [SMALL_STATE(186)] = 2891,
  [SMALL_STATE(187)] = 2901,
  [SMALL_STATE(188)] = 2911,
  [SMALL_STATE(189)] = 2921,
  [SMALL_STATE(190)] = 2931,
  [SMALL_STATE(191)] = 2941,
  [SMALL_STATE(192)] = 2951,
  [SMALL_STATE(193)] = 2961,
  [SMALL_STATE(194)] = 2971,
  [SMALL_STATE(195)] = 2978,
  [SMALL_STATE(196)] = 2985,
  [SMALL_STATE(197)] = 2992,
  [SMALL_STATE(198)] = 2999,
  [SMALL_STATE(199)] = 3006,
  [SMALL_STATE(200)] = 3013,
  [SMALL_STATE(201)] = 3020,
  [SMALL_STATE(202)] = 3027,
  [SMALL_STATE(203)] = 3034,
  [SMALL_STATE(204)] = 3041,
  [SMALL_STATE(205)] = 3048,
  [SMALL_STATE(206)] = 3055,
  [SMALL_STATE(207)] = 3062,
  [SMALL_STATE(208)] = 3069,
  [SMALL_STATE(209)] = 3076,
  [SMALL_STATE(210)] = 3083,
  [SMALL_STATE(211)] = 3090,
  [SMALL_STATE(212)] = 3097,
  [SMALL_STATE(213)] = 3104,
  [SMALL_STATE(214)] = 3111,
  [SMALL_STATE(215)] = 3118,
  [SMALL_STATE(216)] = 3125,
  [SMALL_STATE(217)] = 3132,
  [SMALL_STATE(218)] = 3139,
  [SMALL_STATE(219)] = 3146,
  [SMALL_STATE(220)] = 3153,
  [SMALL_STATE(221)] = 3160,
  [SMALL_STATE(222)] = 3167,
  [SMALL_STATE(223)] = 3174,
  [SMALL_STATE(224)] = 3181,
  [SMALL_STATE(225)] = 3188,
  [SMALL_STATE(226)] = 3195,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commonBlockStatementList, 2, .production_id = 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commonBlockStatementList, 3, .production_id = 17),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeDefinition, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeDefinition, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeDefinition, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeDefinition, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeDefinition, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeDefinition, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataType, 3, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataType, 3, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberDefinition, 2, .production_id = 15),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberDefinition, 2, .production_id = 15),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerDefinition, 2, .production_id = 14),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerDefinition, 2, .production_id = 14),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeDefinition, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeDefinition, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringNoQuote, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeName, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeName, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stringNoQuote_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stringNoQuote_repeat1, 2), SHIFT_REPEAT(38),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinalityBody, 2, .production_id = 21),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringNoQuote, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definitionBlock_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definitionBlock_repeat1, 2), SHIFT_REPEAT(108),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classId, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classId, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memberId, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memberId, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeKeyword, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classId, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classId, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataTypeId, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataTypeId, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeString, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeString, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classId, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classId, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primitiveString_repeat1, 2), SHIFT_REPEAT(67),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primitiveString_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primitiveString_repeat1, 2), SHIFT_REPEAT(67),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataTypeId, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataTypeId, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ownerId, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ownerId, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 11),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4, .production_id = 11),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerDefinition, 3, .production_id = 14),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerDefinition, 3, .production_id = 14),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberDefinition, 3, .production_id = 15),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberDefinition, 3, .production_id = 15),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeString, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeString, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stringSingleQuote_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stringSingleQuote_repeat1, 2), SHIFT_REPEAT(79),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primitiveString_repeat2, 2), SHIFT_REPEAT(81),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primitiveString_repeat2, 2),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primitiveString_repeat2, 2), SHIFT_REPEAT(81),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeString, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeString, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataTypeId, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataTypeId, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibilityMod, 1, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibilityMod, 1, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataType, 4, .production_id = 10),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataType, 4, .production_id = 10),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stringDoubleQuote_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stringDoubleQuote_repeat1, 2), SHIFT_REPEAT(88),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeDefinition, 5),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeDefinition, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberAttrname, 4, .production_id = 32),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberAttrname, 4, .production_id = 32),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerAttrname, 4, .production_id = 31),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerAttrname, 4, .production_id = 31),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberAttrname, 3, .production_id = 28),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberAttrname, 3, .production_id = 28),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deriveMod, 1, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commonBlockStatementList, 1, .production_id = 8),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerAttrname, 3, .production_id = 26),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerAttrname, 3, .production_id = 26),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberAttrname, 2, .production_id = 23),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberAttrname, 2, .production_id = 23),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerAttrname, 2, .production_id = 22),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerAttrname, 2, .production_id = 22),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__commonBlockStatementList_repeat1, 2, .production_id = 17), SHIFT_REPEAT(11),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__commonBlockStatementList_repeat1, 2, .production_id = 17),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitionText, 1),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_associationBlock_repeat1, 2), SHIFT_REPEAT(15),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_associationBlock_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagramBlock_repeat1, 2), SHIFT_REPEAT(5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagramBlock_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeKeyword, 3),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentMultilineDefinition_repeat1, 2), SHIFT_REPEAT(116),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentMultilineDefinition_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commonBlockStatementList, 2, .production_id = 17),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_associationBlock_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stringDoubleQuote, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringDoubleQuote, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stringSingleQuote, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringSingleQuote, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationBlock, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationBlock, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramAttrPair, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_diagramAttrPair, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 5),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4, .production_id = 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationType, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationType, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerType, 2, .production_id = 12),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerType, 2, .production_id = 12),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberType, 2, .production_id = 13),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberType, 2, .production_id = 13),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagramBlock_repeat1, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultilineDefinition, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentMultilineDefinition, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationBlock, 3, .production_id = 16),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationBlock, 3, .production_id = 16),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stringSingleQuote, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringSingleQuote, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stringDoubleQuote, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringDoubleQuote, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classBlock, 3, .production_id = 18),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classBlock, 3, .production_id = 18),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveString, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveString, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, .production_id = 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_association, 3, .production_id = 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_association, 3, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataTypeBlock, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataTypeBlock, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeDefinition, 6),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeDefinition, 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataType, 5, .production_id = 10),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataType, 5, .production_id = 10),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBlock, 3, .production_id = 18),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumBlock, 3, .production_id = 18),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 11),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, .production_id = 11),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classBlock, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classBlock, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultilineDefinition, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentMultilineDefinition, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationBlock, 4, .production_id = 19),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationBlock, 4, .production_id = 19),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_includeStatement, 2, .production_id = 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_includeStatement, 2, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationXType, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationXType, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definitionBlock, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitionBlock, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumId, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__commonBlockStatementList_repeat1, 2, .production_id = 20),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__commonBlockStatementList_repeat1, 2, .production_id = 20),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 2, .production_id = 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 2, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBlock, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumBlock, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinalitySet, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinalityBody, 1, .production_id = 21),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveString, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveString, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberCardinality, 3, .production_id = 29),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberCardinality, 3, .production_id = 29),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerCardinality, 3, .production_id = 27),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerCardinality, 3, .production_id = 27),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataType, 4, .production_id = 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataType, 4, .production_id = 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataTypeBlock, 3, .production_id = 18),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataTypeBlock, 3, .production_id = 18),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commonBlockStatement, 1, .production_id = 9),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commonBlockStatement, 1, .production_id = 9),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveString, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveString, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationOwnerDefinition, 4, .production_id = 14),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationOwnerDefinition, 4, .production_id = 14),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4, .production_id = 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationMemberDefinition, 4, .production_id = 15),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationMemberDefinition, 4, .production_id = 15),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationBlock, 5, .production_id = 24),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associationBlock, 5, .production_id = 24),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definitionBlock, 3, .production_id = 25),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitionBlock, 3, .production_id = 25),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associationId, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeKeywordId, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramAttrName, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 3, .production_id = 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramBlock, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classModifier, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramBlock, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramId, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramBlock, 4),
  [715] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinalityBody, 3, .production_id = 30),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagramBlock, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lutaml(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
