const gram = require('../grammar.js');

module.exports = grammar({
  name: 'jinja_inline',
  extras: $ => [/\s/, /\r?\n/, $.comment],
  externals: $ => [$._raw_char, $.raw_end, $._eof],
  rules: {
    source: $ => repeat(choice($.line_statement, $.raw_block, $._NEWLINE)),
    ...gram.rules,
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
    line_statement: $ =>
      seq('#', choice(seq($.statement, optional(':')), $.expression), $._END),
    raw_block: $ =>
      seq(
        '#',
        'raw',
        /\r?\n/,
        alias(repeat($._raw_char), $.raw_body),
        $.raw_end,
      ),

    _END: $ => choice($._NEWLINE, $._eof),
    _NEWLINE: _ => /\r?\n/,
  },
});
