const gram = require('../grammar.js')

module.exports = grammar({
  name: 'jinja2',
  extras: $ => [/\s/, $.comment],
  externals: $ => [$.raw_start, $._raw_char, $.raw_end],
  rules: {
    source: $ => repeat($.definition),
    ...gram.rules,
    definition: $ =>
      choice($.control, $.render_expression, $._words, $.raw_block),
    render_expression: $ =>
      seq(
        choice('{{', '{{-'),
        $.expression,
        optional($.ternary_expression),
        choice('}}', '-}}'),
      ),
    control: $ => seq(choice('{%', '{%-'), $.statement, choice('-%}', '%}')),
    raw_block: $ =>
      seq($.raw_start, alias(repeat($._raw_char), $.raw_body), $.raw_end),
  },
})
