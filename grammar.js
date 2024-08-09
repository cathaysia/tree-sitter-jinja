const { anySep1, commaSep } = require('./common/common')

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
  precedences: $ => [[$.field_expression, $.literal]],

  rules: {
    source: $ => repeat($.definition),
    definition: $ =>
      choice($.control, $.render_expression, $.statement, $._word),
    control: $ => seq(choice('{%', '{%-'), $.statement, choice('-%}', '%}')),
    render_expression: $ =>
      seq(choice('{{', '{{-'), $.expression, choice('}}', '-}}')),
    statement: $ =>
      choice(
        'endfor',
        'endif',
        seq('elif', $.expression),
        seq('filter', $.expression),
        'endfilter',
        'else',
        $.set_expression,
        $.for_expression,
        $.if_expression,
      ),
    set_expression: $ => seq('set', $.identifier, '=', $.expression),
    for_expression: $ => seq('for', $.identifier, 'in', $.expression),
    if_expression: $ => seq('if', $.expression),

    expression: $ => $.binary_expr,
    binary_expr: $ =>
      choice($.unary_expr, seq($.binary_expr, $.binary_operator, $.unary_expr)),
    binary_operator: $ =>
      choice(
        'is',
        'and',
        '>',
        '<',
        '=',
        '!=',
        '|',
        '~',
        '+',
        '-',
        '*',
        '/',
        '//',
        '%',
      ),
    unary_expr: $ =>
      choice($.primary_expr, seq($.unary_operator, $.unary_expr)),
    unary_operator: $ => choice('not', '!'),
    primary_expr: $ =>
      choice(
        $.field_expression,
        $.loop_expression,
        $.function_call,
        $.literal,
        seq('(', $.expression, ')'),
      ),
    literal: $ =>
      choice(
        $.boolean_literal,
        $.null_literal,
        $.number_literal,
        $.float_literal,
        $.list_literal,
        $.string_literal,
        $.dict_literal,
      ),
    boolean_literal: $ => choice('true', 'false'),
    null_literal: $ => 'null',
    number_literal: $ =>
      seq(
        optional(choice('-', '+')),
        choice(
          $.dec_literal,
          $.oct_literal,
          $.bin_literal,
          $.hex_literal,
          $.big_dec_literal,
        ),
      ),
    dec_literal: $ => choice('0', /[1-9][\d_]*/),
    big_dec_literal: $ =>
      seq($.dec_literal, choice('e', 'e+', 'e-'), optional('_'), $.dec_literal),
    oct_literal: $ => seq('0', 'o', $.dec_literal),
    bin_literal: $ => seq('0', 'b', $.dec_literal),
    hex_literal: $ => seq('0', 'x', /[\da-fA-F][\da-fA-F_]*/),
    float_literal: $ => seq($.dec_literal, '.', $.dec_literal),
    list_literal: $ => seq('[', commaSep($.literal), ']'),
    dict_literal: $ =>
      seq('{', commaSep(seq($.string_literal, ':', $.literal)), '}'),
    string_literal: $ => seq('"', repeat(choice('\\"', /[^\"]/)), '"'),

    function_call: $ =>
      seq($.field_expression, '(', commaSep($.field_expression), ')'),

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
    _word: _ => /./,
    identifier: $ => /\w[\w\d]*/,
    comment: $ =>
      choice(
        seq('##', /[^\r\n]*/, /\r?\n/),
        seq('{#', repeat(choice(/[^#]+/, '#')), '#}'),
      ),
  },
})
