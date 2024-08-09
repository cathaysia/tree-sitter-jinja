[
  "{{"
  "{{-"
  "-}}"
  "}}"
  "{%"
  "{%-"
  "-%}"
  "%}"
] @keyword.directive

(string_literal) @string

(number_literal) @number

(float_literal) @number

(boolean_literal) @boolean

(null_literal) @constant

(comment) @comment

[
  ","
  "."
  ":"
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "<"
  ">"
] @punctuation.bracket

[
  "-"
  "*"
  "+"
  "="
  "%"
  "~"
  "|"
] @operator

(loop_expression
  "loop" @variable.builtin
  [
    "index"
    "index0"
    "revindex"
    "revindex0"
    "first"
    "last"
    "length"
    "cycle"
    "depth"
    "depth0"
    "previtem"
    "nextitem"
    "changed"
  ]? @variable.member)
