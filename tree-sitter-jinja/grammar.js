const gram = require('../grammar.js');

module.exports = grammar({
  name: 'jinja',
  extras: _ => [/\s/],
  externals: $ => [$.raw_start, $._raw_char, $.raw_end, $._inline_words],
  rules: {
    source: $ => optional($._source),
    _source: $ =>
      prec.left(
        repeat1(
          choice(
            $.control,
            $.render_expression,
            $.content,
            $.raw_block,
            $.inline,
            $.comment,
            $.for_block,
            $.with_block,
            $.block_block,
            $.call_block,
            $.filter_block,
            $.trans_block,
            $.macro_block,
            $.if_block,
            $.autoescape_block,
          ),
        ),
      ),
    ...gram.rules,
    statement: $ =>
      seq(
        choice(
          'endset',
          'debug',
          $.do_statement,
          $.include_statement,
          $.import_statement,
          $.set_statement,
          $.extends_statement,
          $.pluralize_statement,
        ),
      ),
    _control_bracket_pre: $ => choice('{%', '{%-', '{%+'),
    _control_bracket_post: $ => choice('-%}', '%}', '+%}'),
    if_block: $ =>
      seq(
        seq($._control_bracket_pre, $.if_expression, $._control_bracket_post),
        repeat(
          choice(
            $._source,
            seq(
              $._control_bracket_pre,
              'elif',
              $.expression,
              $._control_bracket_post,
            ),
            $.break_block,
            $.continue_block,
          ),
        ),
        optional(
          seq(
            $._control_bracket_pre,
            'else',
            $._control_bracket_post,
            repeat($._source),
          ),
        ),
        seq($._control_bracket_pre, 'endif', $._control_bracket_post),
      ),
    for_block: $ =>
      block($, $.for_statement, 'endfor', [$.break_block, $.continue_block]),
    break_block: $ =>
      seq($._control_bracket_pre, 'break', $._control_bracket_post),
    continue_block: $ =>
      seq($._control_bracket_pre, 'continue', $._control_bracket_post),
    with_block: $ => block($, $.with_statement, 'endwith'),
    block_block: $ => block($, $.block_statement, 'endblock'),
    call_block: $ => block($, $.call_statement, 'endcall'),
    filter_block: $ => block($, $.filter_statement, 'endfilter'),
    trans_block: $ => block($, $.trans_statement, 'endtrans'),
    macro_block: $ => block($, $.macro_statement, 'endmacro'),
    autoescape_block: $ => block($, $.autoescape_statement, 'endautoescape'),
    render_expression: $ =>
      seq(
        choice('{{', '{{-', '{{+'),
        optional(seq($.expression, optional($.ternary_expression))),
        choice('}}', '-}}', '+}}'),
      ),
    control: $ =>
      seq($._control_bracket_pre, $.statement, $._control_bracket_post),
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

function block($, rule, endrule, ruleset = []) {
  return seq(
    seq(
      $._control_bracket_pre,
      rule,
      optional($.ternary_expression),
      $._control_bracket_post,
    ),
    repeat(choice($._source, ...ruleset)),
    seq($._control_bracket_pre, endrule, $._control_bracket_post),
  );
}
