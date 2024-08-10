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

[
  "endtrans"
  "block"
  "endblock"
  "with"
  "endwith"
  "filter"
  "endfilter"
  "macro"
  "endmacro"
  "endcall"
  "set"
  "endset"
  "trans"
  "endtrans"
  "autoescape"
  "endautoescape"
  "do"
  "pluralize"
  "extends"
  "is"
] @keyword

[
  "if"
  "else"
  "endif"
] @keyword.conditional

[
  "for"
  "in"
  "continue"
  "break"
  "endfor"
] @keyword.repeat

"call" @function.call

(function_call
  (identifier) @function.call)

(arg
  (identifier) @variable.parameter)

(expression
  (expression) @variable.member
  "."
  (expression)+ @variable.member)

(assignment_expression
  (identifier) @variable.member
  "."
  (identifier)+ @variable.member)

(inline_trans
  "_" @function.builtin)

"debug" @function.builtin
