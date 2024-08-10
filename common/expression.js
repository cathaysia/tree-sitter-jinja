const { commaSep, commaSep1, anySep1 } = require('./common')

exports.rules = {
  expression: $ =>
    prec.left(
      choice(
        $.binary_expression,
        seq($.expression, '.', $.expression),
        seq($.expression, '[', $.expression, ']'),
      ),
    ),
  binary_expression: $ =>
    choice(
      $.unary_expression,
      seq($.binary_expression, $.binary_operator, $.unary_expression),
    ),
  assignment_expression: $ =>
    seq(anySep1($.identifier, '.'), '=', $.expression),
  in_expression: $ => prec(1, seq(commaSep1($.identifier), 'in', $.expression)),
  binary_operator: $ =>
    choice(
      '+',
      '-',
      '*',
      '/',
      '//',
      '%',
      '**',
      '==',
      '!=',
      '>',
      '>=',
      '<',
      '<=',
      'and',
      'or',
      'is',
      '|',
      '~',
    ),
  unary_expression: $ =>
    choice($.primary_expression, seq($.unary_operator, $.unary_expression)),
  unary_operator: $ => choice('not', '!'),
  primary_expression: $ =>
    choice(
      $.loop_expression,
      $.function_call,
      $.literal,
      $.inline_trans,
      $.identifier,
      seq('(', $.expression, ')'),
    ),

  function_call: $ => seq($.identifier, '(', commaSep($.arg), ')'),
  arg: $ => seq(optional(seq($.identifier, '=')), $.expression),
  inline_trans: $ => seq('_', '(', $.expression, ')'),

  loop_expression: $ =>
    seq(
      'loop',
      '.',
      choice(
        'index',
        'index0',
        'revindex',
        'revindex0',
        'first',
        'last',
        'length',
        'cycle',
        'depth',
        'depth0',
        'previtem',
        'nextitem',
        seq('changed', '(', $.expression, ')'),
      ),
    ),
}
