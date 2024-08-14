const gram = require('../grammar.js')

module.exports = grammar({
  name: 'jinja2_inline',
  extras: $ => [' ', '\t', $.comment],
  externals: $ => [$._raw_char, $.raw_end, $._eof],
  rules: {
    source: $ =>
      repeat(choice($.line_statement, $.raw_block, $._words, $._NEWLINE)),
    ...gram.rules,
    line_statement: $ => seq('#', $.statement, $._END),
    raw_block: $ => seq('#', 'seq', /\r?\n/, repeat($._raw_char), $.raw_end),

    _END: $ => choice($._NEWLINE, $._eof),
    _NEWLINE: $ => /\r?\n/,
  },
})
