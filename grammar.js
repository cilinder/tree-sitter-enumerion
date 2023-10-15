module.exports = grammar({
    name: 'enumerion',

    rules: {
	source_file: $ => repeat(choice($.comment, $.toplevel)),

	comment: $ => /(\(\*.*\*\))/,

	toplevel: $ => choice(
	    seq($.load, $.quoted_string),
	    seq($.definition, $.identifier, $.coloneq, $._expr),
	    seq($.check, $._expr),
	    seq($.compile, $._expr),
	    seq($.eval, $._expr),
	    seq($.axiom, $.identifier, $.colon, $._expr),
	    seq($.clear),
	),

	_expr: $ => choice(
            $._infix_expr,
	    $.lambda_expr,
	    $.dependent_function,
            $.simple_function,
	    $.exists_expr,
	    $.forall_expr,
	    $.match_expr,
	    seq($._infix_expr, $.colon, $._expr),
	),

	_infix_expr: $ => choice(
            $._app_expr,
            $._darrow_expr,
	    $._or_expr,
	    $._and_expr,
	    $._lt_expr,
	    $._leq_expr,
	    $._equal_expr,
	    $._plus_expr,
	    $._minus_expr,
	    $._times_expr,
	    $._divide_expr,
	    $._pow_expr,
	    // TODO General infix operation
	),

	_app_expr: $ => choice(
	    $._prefix_expr,
	    seq($.neg, $._prefix_expr),
	    seq($.size, $._prefix_expr),
	    seq($.fin, $._prefix_expr),
	    seq($.stream, $._prefix_expr),
	    seq($.enumerate, $._prefix_expr),
	    $.app,
	),

	_prefix_expr: $ => choice(
	    $._proj_expr,
	    // TODO Prefix expression
	),

	_proj_expr: $ => choice(
	    $._simple_expr,
	    seq($._proj_expr, $.period, $.identifier),
	),

	_simple_expr: $ => choice(
	    seq($.lparen, $._expr, $.rparen),
	    seq($.begin, $._expr, $.end),
	    $._structure_expr,
	    $._variant_expr,
	    $._record_expr,
	    $.numeral,
	    $.identifier,
	    $.tag,
	    $.enum,
	    $.finite,
	    $.prop,
	    $.nat,
	    $.true_const,
	    $.false_const,
	),

	app: $ => seq($._app_expr, $._prefix_expr),

	lambda_expr: $ => seq(
	    $.lambda,
	    $._lambda_abstraction,
	    $.darrow,
	    $._expr,
	),

	dependent_function: $ => seq(
	    $.prod,
	    $._quantifier_abstraction,
	    $.comma,
	    $._expr,
	),

	simple_function: $ => seq(
            $._infix_expr,
            $.arrow,
            $._expr,
	),

	exists_expr: $ => seq(
	    $.exists,
	    $._quantifier_abstraction,
	    $.comma,
	    $._expr,
	),

	forall_expr: $ => seq (
	    $.forall,
	    $._quantifier_abstraction,
	    $.comma,
	    $._expr,
	),

	match_expr: $ => seq (
	    $.match,
	    $._expr,
	    $.with_keyword,
	    $._match_cases,
	    $.end,
	),

	_darrow_expr: $ => prec.right(seq(
            $._infix_expr,
            $.darrow,
            $._infix_expr,
	)),

	_or_expr: $ => prec.left(seq($._infix_expr, $.lor, $._infix_expr)),

	_and_expr: $ => prec.left(seq($._infix_expr, $.land, $._infix_expr)),

	_lt_expr: $ => prec.left(seq($._infix_expr, $.lt, $._infix_expr)),

	_leq_expr: $ => prec.left(seq($._infix_expr, $.leq, $._infix_expr)),

	_equal_expr: $ => prec.left(seq($._infix_expr, $.equal, $._infix_expr)),

	_plus_expr: $ => prec.left(seq($._infix_expr, $.plus, $._infix_expr)),

	_minus_expr: $ => prec.left(seq($._infix_expr, $.minus, $._infix_expr)),

	_times_expr: $ => prec.left(seq($._infix_expr, $.times, $._infix_expr)),

	_divide_expr: $ => prec.left(seq($._infix_expr, $.divide, $._infix_expr)),

	_pow_expr: $ => prec.right(seq($._infix_expr, $.pow, $._infix_expr)),

	_lambda_abstraction: $ => choice(
	    repeat1($.identifier),
	    repeat1($._typed_binder)
	),

	_quantifier_abstraction: $ => choice(
	    seq(repeat1($.identifier), $.colon, $._expr),
	    repeat1($._typed_binder),
	),

	_typed_binder: $ => seq(
	    $.lparen,
	    repeat1($.identifier),
	    $.colon,
	    $._expr,
	    $.rparen
	),

	_match_cases: $ => repeat1(seq(
	    $.vbar,
	    $._match_case,
	)),

	_match_case: $ => seq(
	    $._pattern,
	    $.darrow,
	    $._expr,
	),

	_pattern: $ => choice(
	    $.tag,
	    seq($.tag, $.lparen, $.identifier, $.colon, $._expr, $.rparen),
	),

	_structure_expr: $ => choice(
	    seq($.structure, $.lbrace, $.rbrace),
	    seq($.structure, $.lbrace, $._structure_fields, $.rbrace),
	),

	_structure_fields: $ => choice(
	    $._structure_field,
	    seq($._structure_field, $.semicolon),
	    seq($._structure_field, $.semicolon, $._structure_fields),
	),

	_structure_field: $ => choice(
	    seq($.identifier, $.colon, $._expr),
	    seq($.axiom, $.identifier, $.colon, $._expr),
	),
	
	_record_expr: $ => choice(
	    seq($.lbrace, $.rbrace),
	    seq($.lbrace, $._record_fields, $.rbrace),
	),

	_record_fields: $ => choice(
	    $._record_field,
	    seq($._record_field, $.semicolon),
	    seq($._record_field, $.semicolon, $._record_fields),
	),

	_variant_expr: $ => choice(
	    seq($.variant, $.lbrace, $.rbrace),
	    seq($.variant, $.lbrace, $._variant_fields, $.rbrace),
	),

	_variant_fields: $ => choice(
	    $._variant_field,
	    seq($._variant_field, $.vbar, $._variant_fields),
	),

	_variant_field: $ => choice(
	    seq($.tag, $.colon, $._expr),
	    $.tag,
	),

	_record_field: $ => seq($.identifier, $.coloneq, $._expr),

	load: $ => prec(2, 'load'),

	definition: $ => prec(2, 'def'),

	check: $ => prec(2, 'check'),

	compile: $ => prec(2, 'compile'),

	eval: $ => prec(2, 'eval'),

	clear: $ => prec(2, 'clear'),
	
	prop: $ => prec(2, 'Prop'),

	finite: $ => prec(2, 'Finite'),

	enum: $ => prec(2, 'Enum'),

	nat: $ => prec(2, 'Nat'),

	fin: $ => prec(2, 'Fin'),

	size: $ => prec(2, 'size'),

	stream: $ => prec(2, 'stream'),

	enumerate: $ => prec(2, 'enumerate'),

	with_keyword: $ => prec(2, 'with'),

	match: $ => prec(2, 'match'),

	begin: $ => prec(2, 'begin'),

	end: $ => prec(2, 'end'),

	structure: $ => prec(2, 'structure'),

	variant: $ => prec(2, 'variant'),

	axiom: $ => prec(2, 'axiom'),

	true_const: $ => prec(10, /(True)|(\u22A4)/),

	false_const: $ => prec(10, /(False)|(\u22A5)/),

	lambda: $ => prec(10, /(fun)|(\u03BB)/),

	prod: $ => prec(10, /(product)|(\u03A0)|(\u220F)/),

	arrow: $ => /(->)|(\u2192)/,

	darrow: $ => /(=>)|(\u21D2)/,

	plus: $ => '+',

	minus: $ => '-',

	times: $ => '*',

	divide: $ => '/',

	pow: $ => '**',

	lt: $ => '<',

	leq: $ => /(<=)|(\u2264)/,

	equal: $ => '=',

	exists: $ => prec(10, /(exists)|(\u2203)/),

	forall: $ => prec(10, /(forall)|(\u2200)/),

	land: $ => /(&&)|(\u2227)/,

	lor: $ => /(\|\|)|(\u2228)/,

	neg: $ => prec(1, /(not)|(\u00AC¬)/),

	colon: $ => ':',

	lparen: $ => '(',

	rparen: $ => ')',

	lbrace: $ => '{',

	rbrace: $ => '}',

	comma: $ => ',',

	semicolon: $ => ';',

	period: $ => '.',

	vbar: $ => '|',

	coloneq: $ => ':=',

	identifier: $ => /(_[a-zA-Z0-9][a-zA-Z0-9_]*)|([a-zA-Z][a-zA-Z0-9]*)/,

	numeral: $ => /(\d+)/,

	quoted_string: $ => /"[^"]"/,
	
	tag: $ => /(`[a-zA-Z][a-zA-Z0-9_]*)/,
	
    }
});

