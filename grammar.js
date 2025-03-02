const { anySep1, commaSep, commaSep1, anySep } = require('./common/common');
const literal = require('./common/literal');
const expression = require('./common/expression');

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
};

module.exports = {
  externals: $ => [$.raw_start, $._raw_char, $.raw_end],

  rules: {
    ...literal.rules,
    ...expression.rules,
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
          $.do_statement,
          $.include_statement,
          $.import_statement,
          $.set_statement,
          $.for_statement,
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
      ),
    do_statement: $ => seq('do', $.expression),
    autoescape_statement: $ => seq('autoescape', optional($.boolean_literal)),
    trans_statement: $ =>
      seq('trans', commaSep(choice($.identifier, $.assignment_expression))),
    pluralize_statement: $ => seq('pluralize', optional($.identifier)),
    ternary_expression: $ =>
      seq('if', $.expression, optional(seq('else', $.expression))),
    block_statement: $ => seq('block', $.identifier),
    filter_statement: $ => seq('filter', $.expression),
    macro_statement: $ => seq('macro', $.function_call),
    extends_statement: $ =>
      prec.right(
        seq(
          'extends',
          choice($.string_literal, $.identifier),
          optional($.ternary_expression),
        ),
      ),
    call_statement: $ =>
      seq('call', optional(seq('(', $.identifier, ')')), $.function_call),
    with_statement: $ => seq('with', repeat($.assignment_expression)),
    import_statement: $ =>
      seq(
        optional($.import_from),
        'import',
        seq(choice(commaSep1($.identifier), $.string_literal)),
        optional($.import_as),
        optional($.import_attribute),
      ),
    import_from: $ => seq('from', $.string_literal),
    import_as: $ => seq('as', commaSep1($.identifier)),
    import_attribute: $ => $.attribute_context,
    include_statement: $ =>
      seq(
        'include',
        choice($.string_literal, $.identifier, $.list_literal, $.tuple_literal),
        repeat($.include_attribute),
      ),
    include_attribute: $ => choice($.attribute_ignore, $.attribute_context),
    attribute_ignore: $ => seq('ignore', 'missing'),
    attribute_context: $ => seq(choice('with', 'without'), 'context'),
    set_statement: $ =>
      seq(
        'set',
        commaSep1($.expression),
        alias('=', $.binary_operator),
        $.expression,
        optional($.ternary_expression),
      ),
    for_statement: $ =>
      seq(
        'for',
        $.in_expression,
        optional($.ternary_expression),
        optional('recursive'),
      ),
    if_expression: $ => seq('if', $.expression),

    words: _ => prec.right(repeat1(choice(/[^\{]/, /\{[^\#\%]/))),
    identifier: $ => /[a-zA-Z_][\w\d_]*/,
    comment: $ =>
      choice(
        seq('##', /[^\r\n]*/, /\r?\n/),
        seq('{#', repeat(choice(/[^#]+/, '#')), '#}'),
      ),
  },
};
