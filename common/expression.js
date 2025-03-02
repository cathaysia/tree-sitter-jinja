const { commaSep, commaSep1, anySep1 } = require('./common');

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
        alias('is', $.binary_operator),
        choice($.unary_expression, $.builtin_test),
      ),
    ),
  builtin_test: $ =>
    prec.left(
      choice(
        'boolean',
        'callable',
        'defined',
        seq('divisibleby', $.expression),
        seq('eq', $.expression),
        'escaped',
        'even',
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
        'number',
        'odd',
        seq('sameas', $.expression),
        'sequence',
        'string',
        'test',
        'undefined',
        'upper',
      ),
    ),
  assignment_expression: $ =>
    seq(
      anySep1($.identifier, '.'),
      alias('=', $.binary_operator),
      $.expression,
    ),
  in_expression: $ =>
    prec(
      1,
      seq(
        commaSep1($.identifier),
        alias('in', $.binary_operator),
        $.expression,
      ),
    ),
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
  arg: $ =>
    seq(
      optional(seq($.identifier, alias('=', $.binary_operator))),
      $.expression,
    ),
  inline_trans: $ => seq('_', '(', $.expression, ')'),
};
