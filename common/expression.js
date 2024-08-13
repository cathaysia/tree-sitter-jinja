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
      seq(
        $.binary_expression,
        'is',
        choice($.unary_expression, $.builtin_test),
      ),
    ),
  builtin_test: $ =>
    prec(
      1,
      choice(
        'boolean',
        'callable',
        'defined',
        seq('divisibleby', $.expression),
        seq('eq', $.expression),
        'escaped',
        'even',
        'false',
        'filter',
        'float',
        seq('ge', $.expression),
        seq('gt', $.expression),
        seq('in', $.list_literal),
        'integer',
        'iterable',
        seq('le', $.expression),
        'lower',
        seq('lt', $.expression),
        'mapping',
        seq('ne', $.expression),
        'none',
        'number',
        'odd',
        seq('sameas', $.expression),
        'sequence',
        'string',
        'test',
        'true',
        'undefined',
        'upper',
      ),
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
      '|',
      '~',
    ),
  unary_expression: $ =>
    choice($.primary_expression, seq($.unary_operator, $.unary_expression)),
  unary_operator: $ => choice('not', '!'),
  primary_expression: $ =>
    choice(
      $.function_call,
      $.literal,
      $.inline_trans,
      $.identifier,
      seq('(', $.expression, ')'),
    ),

  function_call: $ => seq($.identifier, '(', commaSep($.arg), ')'),
  arg: $ => seq(optional(seq($.identifier, '=')), $.expression),
  inline_trans: $ => seq('_', '(', $.expression, ')'),
}
