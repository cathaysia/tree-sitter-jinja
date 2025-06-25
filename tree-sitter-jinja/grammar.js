const gram = require('../grammar.js');

module.exports = grammar({
  name: 'jinja',
  extras: _ => [/\s/],
  externals: $ => [$.raw_start, $._raw_char, $.raw_end, $._inline_words],
  rules: {
    source: $ =>
      repeat(
        choice(
          $.control,
          $.render_expression,
          $.content,
          $.raw_block,
          $.inline,
          $.comment,
        ),
      ),
    ...gram.rules,
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
        $._inline_words,
        /\r?\n/,
      ),
  },
});
