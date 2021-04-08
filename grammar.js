const NEWLINE = '\n';

// const NAME_RE = /[a-zA-Z0-9 _-][a-zA-Z0-9 _-+/]*/;
const NAME_RE = /[a-zA-Z0-9 _-]+/;

const CLASS_NAME_RE = /[a-zA-Z0-9_ :.-]+/;
const CLASS_NAME_NO_SURROUNDING_SPACE_RE = /[a-zA-Z0-9_:.-]+[a-zA-Z0-9_ :.-]*[a-zA-Z0-9_:.-]+/;

// const ATTRIBUTE_KW_ID_RE = /[a-zA-Z0-9_\- /]+/;
// const ATTRIBUTE_TYPE_RE = /[a-zA-Z0-9_\- /+]+/;
// const ATTRIBUTE_NAME_RE = /[a-zA-Z0-9_\- /+]+/;

// // Without /, +
// const ATTRIBUTE_KW_ID_RE = /[a-zA-Z0-9_\- ]+/;
// const ATTRIBUTE_NAME_RE = /[a-zA-Z0-9_\- ]+/;
// const ATTRIBUTE_TYPE_RE = /[a-zA-Z0-9_\- ]+/;

// With inner /, +
const ATTRIBUTE_KW_ID_RE = /[a-zA-Z0-9_\- ][a-zA-Z0-9_\- /+]*/;
const ATTRIBUTE_NAME_RE = /[a-zA-Z0-9_\- ][a-zA-Z0-9_\- /+]*/;
const ATTRIBUTE_TYPE_RE = /[a-zA-Z0-9_\- ][a-zA-Z0-9_\- /+]*/;

// // Without /, +, ' '
// const ATTRIBUTE_NAME_NO_SURROUNDING_SPACE_RE = /[a-zA-Z0-9_]+[a-zA-Z0-9_\- ]+[a-zA-Z0-9_\-]+/;
// const ATTRIBUTE_TYPE_NO_SURROUNDING_SPACE_RE = /[a-zA-Z0-9_\-]+[a-zA-Z0-9_\- ]+[a-zA-Z0-9_\-]+/;

// With inner /, +, ' '
const ATTRIBUTE_NAME_NO_SURROUNDING_SPACE_RE = /[a-zA-Z0-9_]+[a-zA-Z0-9_\- /+]*[a-zA-Z0-9_\-]+/;
const ATTRIBUTE_TYPE_NO_SURROUNDING_SPACE_RE = /[a-zA-Z0-9_\-]+[a-zA-Z0-9_\- /+]*[a-zA-Z0-9_\-]+/;

module.exports = grammar({
  name: 'lutaml',

  extras: $ => [
    $.comment,
    // /\s|\\\n/,
    // /\s|\n/,
    /\s/,
    // / /,
  ],

  rules: {
    program: $ => $.diagram,
    diagram: $ => seq('diagram', field('name', $.diagramId), $.diagramBlock),
    diagramId: $ => token(CLASS_NAME_RE),

    _diagramBlockContent: $ => choice(
      $.diagramAttrPair,
      $.class,
      $.enum,
      $.primitive,
      $.dataType,
      $.association,
      $.commentDefinition,
      $.commentMultilineDefinition,
      $.includeStatement,
    ),

    diagramBlock: $ => seq(
      '{',
      optional(seq(
        $._diagramBlockContent,
        repeat(seq(NEWLINE, $._diagramBlockContent)),
        optional(NEWLINE)
      )),
      '}',
    ),

    association: $ => seq('association', field('name', $.associationId), $.associationBlock),

    _associationBlock: $ => choice(
      $.associationXType,
      $.associationOwnerDefinition,
      $.associationMemberDefinition,
      $.commentDefinition,
      $.commentMultilineDefinition,
    ),

    associationBlock: $ => seq(
      '{',
      field('members',
        optional(seq(
          $._associationBlock,
          repeat(seq(NEWLINE, $._associationBlock)),
          optional(NEWLINE)
        )),
      ), '}',
    ),

    associationId: $ => token(NAME_RE),

    associationMod: $ => seq($.associationDirection, $.associationId),
    associationXType: $ => choice($.associationOwnerType, $.associationMemberType),
    associationOwnerType: $ => seq('owner_type', field('owner_end_type', $.associationType)),
    associationMemberType: $ => seq('member_type', field('member_end_type', $.associationType)),
    associationType: $ => choice('association', 'composition', 'aggregation', 'generalization', 'uses', 'inheritance', 'direct'),
    associationDirection: $ => choice('from', 'to'),

    underscoreCase: $ => /[a-z][_a-z0-9]*/,

    name: $ => token(NAME_RE),
    ownerId: $ => token(NAME_RE),
    memberId: $ => token(NAME_RE),

    associationOwnerDefinition: $ => seq(
      'owner',
      field('owner_end', $.ownerId),
      optional($.associationOwnerAttrname),
      optional($.associationOwnerCardinality),
    ),
    associationOwnerAttrname: $ => seq(
      '#',
      optional($.visibilityMod),
      optional($.deriveMod),
      field('owner_end_attribute_name', $.name),
    ),
    associationMemberAttrname: $ => seq(
      '#',
      optional($.visibilityMod),
      optional($.deriveMod),
      field('member_end_attribute_name', $.name),
    ),
    associationOwnerCardinality: $ => seq(
      '[',
      field('owner_end_cardinality', $.cardinalityBody),
      ']',
    ),
    associationMemberCardinality: $ => seq(
      '[',
      field('member_end_cardinality', $.cardinalityBody),
      ']',
    ),
    associationMemberDefinition: $ => seq(
      'member',
      field('member_end', $.memberId),
      optional($.associationMemberAttrname),
      optional($.associationMemberCardinality),
    ),

    attributeKeywordId: $ => token(ATTRIBUTE_KW_ID_RE),
    attributeKeyword: $ => seq('<<', $.attributeKeywordId, '>>'),
    attributeType: $ => seq(':', optional($.attributeKeyword), $.attributeTypeString),
    attributeTypeString: $ => choice(
      token(ATTRIBUTE_TYPE_NO_SURROUNDING_SPACE_RE),
      seq('"', optional(token(ATTRIBUTE_TYPE_RE)), '"'),
      seq("'", optional(token(ATTRIBUTE_TYPE_RE)), "'"),
    ),

    class: $ => seq(
      field('modifier', optional($.classModifier)),
      'class',
      field('name', $.classId),
      optional(field('keyword', $.attributeKeyword)),
      optional($.classBlock),
    ),

    _classId: $ => seq(token(CLASS_NAME_RE), optional(seq('(', token(CLASS_NAME_RE), ')'))),
    classId: $ => $._classId,

    classBlock: $ => seq('{', field('members', optional($._commonBlockStatementList)), '}'),

    _commonBlockStatement : $ => choice(
      $.definition,
      field('attributes', $.attributeDefinition),
      $.commentDefinition,
      $.commentMultilineDefinition,
    ),

    _commonBlockStatementList : $ => seq(
      $._commonBlockStatement,
      repeat(seq(NEWLINE, $._commonBlockStatement)),
      optional(NEWLINE),
    ),

    classModifier: $ => choice(
      'abstract',
      'interface',
    ),

    definition: $ => seq('definition', $.definitionBlock),

    attributeName: $ => choice(
      token(seq('"', ATTRIBUTE_NAME_RE, '"')),
      token(seq("'", ATTRIBUTE_NAME_RE, "'")),
      token(ATTRIBUTE_NAME_NO_SURROUNDING_SPACE_RE),
    ),

    attributeDefinition: $ => seq(
      optional($.visibilityMod),
      optional($.deriveMod),
      $.attributeName,
      optional($.attributeType),
      optional($.cardinality),
      optional($.classBlock),
    ),
    definitionBlock: $ => seq('{', field('definition', repeat($.definitionText)), '}'),
    definitionText: $ => choice(token(/[^\\{}]+/), $.definitionTextEscape),
    definitionTextEscape: $ => token(/\\(\\|\{|\})/),

    primitive: $ => seq('primitive', field('name', $.primitiveString)),
    primitiveString: $ => choice(
      token(CLASS_NAME_NO_SURROUNDING_SPACE_RE),
      seq('"', repeat(choice(/\\"/, token(CLASS_NAME_RE))), '"'),
      seq("'", repeat(choice(/\\'/, token(CLASS_NAME_RE))), "'"),
    ),

    dataType: $ => seq(
      'data_type',
      token(/\s+/),
      field('name', $.dataTypeId),
      optional(field('keyword', $.attributeKeyword)),
      optional($.dataTypeBlock),
    ),

    dataTypeId: $ => choice(
      $._classId,
      seq('"', optional($._classId), '"'),
      seq("'", optional($._classId), "'"),
    ),

    enumId: $ => token(CLASS_NAME_RE),

    enum: $ => seq(
      'enum',
      field('name', $.enumId),
      optional(field('keyword', $.attributeKeyword)),
      $.enumBlock,
    ),

    dataTypeBlock: $ => seq('{', field('members', optional($._commonBlockStatementList)), '}'),

    enumBlock: $ => seq('{', field('members', optional($._commonBlockStatementList)), '}'),

    visibilityMod: $ => field('visibility_modifier', choice('+', '-', '~', '#')),
    deriveMod: $ => field('derived_modifier', '/'),

    cardinalityBody: $ => seq(
      field('min', $.cardinalitySet),
      optional(
        seq(
          '..',
          field('max', optional($.cardinalitySet)),
        ),
      ),
    ),
    cardinality: $ => seq('[', $.cardinalityBody, ']'),
    cardinalitySet: $ => choice('*', '0', $.int),
    int: $ => /[1-9]+[0-9]*/,

    diagramAttrPair: $ => seq($.diagramAttrName, token(/\s+/), alias($.string, $.diagramAttrValue)),
    diagramAttrName: $ => choice('title', 'caption', 'fontname'),

    includeStatement: $ => seq('include', alias($.string, $.includeFileName)),

    string: $ => choice(
      $._stringSingleQuote,
      $._stringDoubleQuote,
      $._stringNoQuote,
    ),

    _stringSingleQuote: $ => seq("'", repeat(choice(/[^\\'\n]/, $.stringEscape)), "'"),
    _stringDoubleQuote: $ => seq('"', repeat(choice(/[^\\"\n]/, $.stringEscape)), '"'),
    _stringNoQuote: $ => seq(token(/[^"'\n]/), repeat(choice(/[^\\"'\n]/, $.stringEscape))),

    stringEscape: $ => token(/\\(\\|"|')/),
    commentMultilineDefinition: $ => seq('*|', repeat(/./), '|*'), // works?
    commentDefinition: $ => token(seq('**', /[^\n]*/)),
    comment: $ => token(seq('//', /.*/)),

  }
});
