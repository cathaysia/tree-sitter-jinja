const gram = require('../grammar.js');
const { defineBlocks } = require('../common/blocks.js');

function directive($, rule) {
  return seq('#', seq(rule, optional(':')), $._END);
}

module.exports = grammar({
  name: 'jinja_inline',
  extras: $ => [/\s/, /\r?\n/, $.comment],
  externals: $ => [$._raw_char, $.raw_end, $._eof],
  conflicts: $ => [
    [$.if_block],
    [$.elif_block],
    [$.else_block],
    [$.for_block],
    [$.block_block],
    [$.with_block],
    [$.filter_block],
    [$.macro_block],
    [$.call_block],
    [$.set_block],
    [$.trans_block],
    [$.pluralize_block],
    [$.autoescape_block]
  ],
  rules: {
    source: $ =>
      repeat(
        choice(
          $._node,
        ),
      ),
    _node: $ => choice(
      $.line_statement,
      alias($.line_expression, $.line_statement),
      $.raw_block,
      $._NEWLINE,
      $.if_block,
      $.for_block,
      $.macro_block,
      $.filter_block,
      $.call_block,
      $.set_block,
      $.block_block,
      $.with_block,
      $.trans_block,
      $.autoescape_block,
    ),
    ...gram.rules,
    ...defineBlocks(directive, $ => $._node),

    line_statement: $ => directive($, gram.rules.statement($)),
    line_expression: $ => seq('#', $.expression, $._END),
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
