const gram = require("../grammar.js");

module.exports = grammar({
	name: "jinja_inline",
	extras: ($) => [/\s/, /\r?\n/, $.comment],
	externals: ($) => [$._raw_char, $.raw_end, $._eof],
	rules: {
		source: ($) =>
			repeat(
				choice(
					$.line_statement,
					alias($.line_expression, $.line_statement),
					$.raw_block,
					$._NEWLINE,
				),
			),
		...gram.rules,
		line_statement: ($) => seq("#", seq($.statement, optional(":")), $._END),
		line_expression: ($) => seq("#", $.expression, $._END),
		raw_block: ($) =>
			seq(
				"#",
				"raw",
				/\r?\n/,
				alias(repeat($._raw_char), $.raw_body),
				$.raw_end,
			),

		_END: ($) => choice($._NEWLINE, $._eof),
		_NEWLINE: (_) => /\r?\n/,
	},
});
