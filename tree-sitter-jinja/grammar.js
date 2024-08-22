const gram = require('../grammar.js')

module.exports = grammar({
  name: 'jinja',
  extras: $ => [/\s/, $.comment],
  externals: $ => [$.raw_start, $._raw_char, $.raw_end],
  rules: {
    source: $ => repeat($.definition),
    ...gram.rules,
    definition: $ =>
      choice($.control, $.render_expression, $._words, $.raw_block, $.inline),
    render_expression: $ =>
      seq(
        choice('{{', '{{-', '{{+'),
        optional(seq($.expression, optional($.ternary_expression))),
        choice('}}', '-}}', '+}}'),
      ),
    control: $ =>
      seq(choice('{%', '{%-', '{%+'), $.statement, choice('-%}', '%}', '+%}')),
    raw_block: $ =>
      seq($.raw_start, alias(repeat($._raw_char), $.raw_body), $.raw_end),
    inline: $ =>
      seq(
        '# ',
        choice(
          'if',
          'endfor',
          'elif',
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
          'do',
          'include',
          'import',
          'set',
          'for',
          'with',
          'call',
          'extends',
          'macro',
          'filter',
          'block',
          'pluralize',
          'trans',
          'autoescape',
        ),
        /[ \t]*[^\r\n]*/,
        /\r?\n/,
      ),
  },
})
