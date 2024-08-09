const { anySep1, commaSep, commaSep1, anySep } = require('./common/common')

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
    definition: $ => choice($.control, $.render_expression, $._word),
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
    set_statement: $ =>
      seq('set', commaSep1($.field_expression), '=', $.expression),
    for_expression: $ =>
      seq('for', $.identifier, 'in', $.expression, optional('recursive')),
    if_expression: $ => seq('if', $.expression),

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
    unary_expr: $ =>
      choice($.primary_expr, seq($.unary_operator, $.unary_expr)),
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
    null_literal: $ => choice('null', 'none'),
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
    string_literal: $ =>
      choice(
        seq('"', repeat(choice('\\"', /[^\"]/)), '"'),
        seq("'", repeat(choice(/[^']/, "\\'")), "'"),
      ),

    inline_trans: $ => seq('_', '(', $.expression, ')'),

    function_call: $ => seq($.field_expression, '(', commaSep($.arg), ')'),
    arg: $ => seq(optional(seq($.identifier, '=')), $.expression),

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
