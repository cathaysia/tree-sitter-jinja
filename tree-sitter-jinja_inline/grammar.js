const gram = require('../grammar.js');

module.exports = grammar({
  name: 'jinja_inline',
  extras: $ => [/\s/, /\r?\n/, $.comment],
  externals: $ => [$._raw_char, $.raw_end, $._eof],
  rules: {
    source: $ =>
      repeat(choice($.line_statement, $.raw_block, $.words, $._NEWLINE)),
    ...gram.rules,
    line_statement: $ => seq('#', $.statement, optional(':'), $._END),
    raw_block: $ =>
      seq(
        '#',
        'seq',
        /\r?\n/,
        alias(repeat($._raw_char), $.raw_body),
        $.raw_end,
      ),

    _END: $ => choice($._NEWLINE, $._eof),
    _NEWLINE: $ => /\r?\n/,
  },
});
