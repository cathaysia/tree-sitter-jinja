const { anySep1, commaSep, commaSep1, anySep } = require('./common/common')
const literal = require('./common/literal')
const expression = require('./common/expression')

const PREC = {
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  UNARY: 14,
}

module.exports = grammar({
  name: 'jinja2',
  extras: $ => [/\s/, $.comment],

  rules: {
    source: $ => repeat($.definition),
    ...literal.rules,
    ...expression.rules,
    definition: $ => choice($.control, $.render_expression, $._words),
    control: $ => seq(choice('{%', '{%-'), $.statement, choice('-%}', '%}')),
    render_expression: $ =>
      seq(
        choice('{{', '{{-'),
        $.expression,
        optional($.inline_if_expression),
        choice('}}', '-}}'),
      ),
    statement: $ =>
      seq(
        choice(
          'endfor',
          seq('elif', $.expression),
          'else',
          'endif',
          'endblock',
          'endwith',
          'endfilter',
          'endmacro',
          'endcall',
          'endset',
          'endtrans',
          'continue',
          'break',
          'debug',
          'endautoescape',
          seq('do', $.expression),
          $.include_statement,
          $.import_statement,
          $.set_statement,
          $.for_expression,
          $.if_expression,
          $.with_statement,
          $.call_statement,
          $.set_statement,
          $.extends_statement,
          $.macro_statement,
          $.filter_statement,
          $.block_statement,
          $.pluralize_statement,
          $.trans_statement,
          $.autoescape_statement,
        ),
        optional($.inline_if_expression),
      ),
    autoescape_statement: $ => seq('autoescape', optional($.boolean_literal)),
    trans_statement: $ =>
      seq('trans', commaSep(choice($.identifier, $.assignment_expression))),
    pluralize_statement: $ => seq('pluralize', optional($.identifier)),
    inline_if_expression: $ =>
      seq('if', $.expression, optional(seq('else', $.expression))),
    block_statement: $ => seq('block', $.identifier),
    filter_statement: $ => seq('filter', $.expression),
    macro_statement: $ => seq('macro', $.function_call),
    extends_statement: $ =>
      seq(
        'extends',
        choice($.string_literal, $.identifier),
        $.inline_if_expression,
      ),
    call_statement: $ => seq('call', '(', $.identifier, ')', $.function_call),
    with_statement: $ => seq('with', repeat($.assignment_expression)),
    import_statement: $ =>
      seq(
        optional($.import_from),
        'import',
        $.identifier,
        optional($.import_as),
        optional($.import_attribute),
      ),
    import_from: $ => seq('from', $.string_literal),
    import_as: $ => seq('as', commaSep1($.identifier)),
    import_attribute: $ => $.attribute_context,
    include_statement: $ =>
      seq('include', $.string_literal, repeat($.include_attribute)),
    include_attribute: $ =>
      seq(optional('ignore missing'), $.attribute_context),
    attribute_context: $ => seq(choice('with', 'without'), 'context'),
    set_statement: $ => seq('set', commaSep1($.expression), '=', $.expression),
    for_expression: $ => seq('for', $.in_expression, optional('recursive')),
    if_expression: $ => seq('if', $.expression),

    _words: _ => prec.right(repeat1(choice(/[^\{]/, /\{[^\#\%]/))),
    identifier: $ => /[a-zA-Z][\w\d]*/,
    comment: $ =>
      choice(
        seq('##', /[^\r\n]*/, /\r?\n/),
        seq('{#', repeat(choice(/[^#]+/, '#')), '#}'),
      ),
  },
})
