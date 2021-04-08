; keywords

[
 "abstract"
 ; "aggregation"
 "association"
 ; "attribute"
 ; "bidirectional"
 "class"
 "composition"
 "data_type"
 ; "dependency"
 "diagram"
 ; "directional"
 "enum"
 "fontname"
 ; "generalizes"
 "include"
 "interface"
 "member"
 "member_type"
 ; "method"
 "owner"
 "owner_type"
 "primitive"
 ; "private"
 ; "protected"
 ; "public"
 ; "realizes"
 ; "static"
 "title"
 "caption"
] @keyword

[
  (comment)
  (commentDefinition)
  (commentMultilineDefinition)
] @comment

[
 (definitionTextEscape)
 (stringEscape)
 ] @string.escape

[
 (definition)
 (includeFileName)
 ] @label

[
 (primitiveString)
 (associationType)
 ] @type

[
 (definitionText)
 ; (string)
 (diagramAttrValue)
 ] @string

[
 (associationOwnerCardinality)
 (associationMemberCardinality)
 (cardinality)
 (attributeKeyword "<<")
 (attributeKeyword ">>")
 ] @attribute

[
 (visibilityMod)
 (deriveMod)
 ] @operator

[
 (associationMemberAttrname)
 (associationOwnerAttrname)
 (attributeName)
 ] @identifier

[
 (diagramId)
 (classId)
 (enumId)
 (dataTypeId)
 (associationId)
 (memberId)
 (ownerId)
 (attributeTypeString)
 ] @constant

[
  (associationMemberAttrname "#")
  (associationOwnerAttrname "#")
   ":"
 ] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
 ] @punctuation.bracket
