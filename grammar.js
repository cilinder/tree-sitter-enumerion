module.exports = grammar({
    name: 'enumerion',

    rules: {
	// TODO: add the actual grammar rules
	source_file: $ => repeat(choice($.comment, $._toplevel)),

	comment: $ => /(\(\*.*\*\))/,

	_toplevel: $ => choice(
	    seq($.check, $._expr, optional(seq($.colon, $._expr))),
	    // TODO toplevel commands
	),

	_expr: $ => choice(
            $._infix_expr,
            // $._simple_function_space,
	),

	_infix_expr: $ => choice(
            $._app_expr,
            $._darrow_expr,
	),

	_app_expr: $ => choice(
	    $._prefix_expr,
	    // seq($.not, $._prefix_expr),
	    // seq($.size, $._prefix_expr),
	    seq($.fin, $._prefix_expr),
	    // seq($.stream, $._prefix_expr),
	    // seq($.enumerate, $._prefix_expr),
	    // seq($._app_expr, $._prefix_expr),
	),

	_prefix_expr: $ => choice(
	    $._proj_expr,
	    // TODO Prefix expression
	),

	_proj_expr: $ => choice(
	    $._simple_expr,
	    // seq($._proj_expr, $.period, $.identifier)
	),

	_simple_expr: $ => choice(
	    // seq($.lparen, $._expr, $.rparen),
	    // seq($.begin, $._expr, $.end),
	    // seq($.structure, $.lbrace, $._structure_fields, $.rbrace),
	    $.numeral,
	    $.identifier,
	    $.enum,
	    $.finite,
	    $.prop,
	    $.nat,
	    // $.true,
	    // $.false,
	    // TODO Other simple exprs
	),

	_darrow_expr: $ => prec.right(seq(
            $._infix_expr,
            $.darrow,
            $._infix_expr,
	)),

	check: $ => 'check',

	prop: $ => 'Prop',

	finite: $ => 'Finite',

	enum: $ => 'Enum',

	nat: $ => 'Nat',

	fin: $ => 'Fin',

	not: $ => /(not)|(¬)/,

	size: $ => 'size',

	stream: $ => 'stream',

	enumerate: $ => 'enumerate',

	true: $ => /(True)|(⊤)/,

	false: $ => /(False)|(⊥)/,
	
	_simple_function_space: $ => seq(
            $._infix_expr,
            $.arrow,
            $._expr,
	),

	_term: $ => choice(
            $.numeral,
	),

	identifier: $ => /(_[a-z0-9][a-z0-9_]*)|([a-z][a-z0-9]*)/,

	numeral: $ => /(\d+)/,

	colon: $ => ':',

	arrow: $ => /(->)|(\u2192)/,

	darrow: $ => /(=>)/

    }
});
