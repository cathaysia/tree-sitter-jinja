const { commaSep, commaSep1 } = require('./common/common.js');
const literal = require('./common/literal.js');
const expression = require('./common/expression.js');

module.exports = {
  externals: $ => [$.raw_start, $._raw_char, $.raw_end],

  rules: {
    ...literal.rules,
    ...expression.rules,
    statement: $ =>
      choice(
        $.do_statement,
        $.include_statement,
        $.import_statement,
        $.set_statement,
        $.extends_statement,
        'continue',
        'break',
        'debug'
      ),
    if_statement: $ => seq('if', $.expression),
    elif_statement: $ => seq('elif', $.expression),
    else_statement: $ => 'else',
    endif_statement: $ => 'endif',

    for_statement: $ =>
      seq(
        'for',
        $.in_expression,
        optional($.ternary_expression),
        optional('recursive'),
      ),
    endfor_statement: $ => 'endfor',

    block_statement: $ => seq('block', $.identifier, optional('required')),
    endblock_statement: $ => 'endblock',

    with_statement: $ => seq('with', repeat($.assignment_expression)),
    endwith_statement: $ => 'endwith',

    filter_statement: $ => seq('filter', $.expression),
    endfilter_statement: $ => 'endfilter',

    macro_statement: $ => seq('macro', $.function_call),
    endmacro_statement: $ => 'endmacro',

    call_statement: $ => seq('call', optional(seq('(', $.identifier, ')')), $.function_call),
    endcall_statement: $ => 'endcall',

    set_statement: $ =>
      seq(
        'set',
        commaSep1($.expression),
        alias('=', $.binary_operator),
        $.expression,
        optional($.ternary_expression),
      ),
    set_block_statement: $ => seq('set', commaSep1($.expression)),
    endset_statement: $ => 'endset',

    trans_statement: $ => seq('trans', optional(commaSep(choice($.identifier, $.assignment_expression)))),
    endtrans_statement: $ => 'endtrans',

    autoescape_statement: $ => seq('autoescape', optional($.boolean_literal)),
    endautoescape_statement: $ => 'endautoescape',

    pluralize_statement: $ => seq('pluralize', optional($.identifier)),

    do_statement: $ => seq('do', $.expression),
    ternary_expression: $ =>
      seq('if', $.expression, optional(seq('else', $.expression))),
    extends_statement: $ =>
      prec.right(
        seq(
          'extends',
          choice($.string_literal, $.identifier),
          optional($.ternary_expression),
        ),
      ),
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
    attribute_ignore: _ => seq('ignore', 'missing'),
    attribute_context: _ => seq(choice('with', 'without'), 'context'),

    content: _ => prec.right(repeat1(choice(/[^{]/, /\{[^#%]/, '#', '# '))),
    identifier: _ => /[a-zA-Z_][\w\d_]*/,
    comment: _ =>
      choice(
        seq('##', /[^\r\n]*/, /\r?\n/),
        seq('{#', repeat(choice(/[^#]+/, '#')), '#}'),
      ),
  },
};
