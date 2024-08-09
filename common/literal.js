const { commaSep } = require('./common')

exports.rules = {
  literal: $ =>
    choice(
      $.boolean_literal,
      $.null_literal,
      $.number_literal,
      $.float_literal,
      $.list_literal,
      $.string_literal,
      $.dict_literal,
    ),
  boolean_literal: $ => choice('true', 'false'),
  null_literal: $ => choice('null', 'none'),
  number_literal: $ =>
    seq(
      optional(choice('-', '+')),
      choice(
        $.dec_literal,
        $.oct_literal,
        $.bin_literal,
        $.hex_literal,
        $.big_dec_literal,
      ),
    ),
  dec_literal: $ => choice('0', /[1-9][\d_]*/),
  big_dec_literal: $ =>
    seq($.dec_literal, choice('e', 'e+', 'e-'), optional('_'), $.dec_literal),
  oct_literal: $ => seq('0', 'o', $.dec_literal),
  bin_literal: $ => seq('0', 'b', $.dec_literal),
  hex_literal: $ => seq('0', 'x', /[\da-fA-F][\da-fA-F_]*/),
  float_literal: $ => seq($.dec_literal, '.', $.dec_literal),
  list_literal: $ => seq('[', commaSep($.literal), ']'),
  dict_literal: $ =>
    seq('{', commaSep(seq($.string_literal, ':', $.literal)), '}'),
  string_literal: $ =>
    choice(
      seq('"', repeat(choice('\\"', /[^\"]/)), '"'),
      seq("'", repeat(choice(/[^']/, "\\'")), "'"),
    ),
}
