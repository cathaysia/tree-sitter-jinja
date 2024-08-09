exports.rules = {
  expression: $ => $.binary_expr,
  binary_expr: $ =>
    choice($.unary_expr, seq($.binary_expr, $.binary_operator, $.unary_expr)),
  assignment_expression: $ => seq($.identifier, '=', $.expression),
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
      'in',
    ),
  unary_expr: $ => choice($.primary_expr, seq($.unary_operator, $.unary_expr)),
  unary_operator: $ => choice('not', '!'),
  primary_expr: $ =>
    choice(
      $.field_expression,
      $.loop_expression,
      $.function_call,
      $.literal,
      $.inline_trans,
      seq('(', $.expression, ')'),
    ),

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
        seq('changed', '(', $.field_expression, ')'),
      ),
    ),

  field_expression: $ =>
    prec.left(
      choice(
        $.identifier,
        $.dict_literal,
        $.list_literal,
        seq($.field_expression, '.', $.field_expression),
        seq($.field_expression, '[', $.field_expression, ']'),
      ),
    ),
}
