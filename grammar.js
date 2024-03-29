module.exports = grammar({
    name: 'enumerion',

    rules: {
	source_file: $ => repeat(choice($.comment, $.toplevel)),

	comment: $ => /(\(\*.*\*\))/,

	toplevel: $ => choice(
	    seq($.load, $.quoted_string),
	    seq($.definition, $.identifier, $.coloneq, $._expr),
	    seq($.check, $._expr),
	    seq($.enumerate, $._expr),
	    seq($.eval, $._expr),
	    seq($.axiom, $.identifier, $.colon, $._expr),
	    seq($.clear),
	),

	_expr: $ => choice(
            $._infix_expr,
	    $.lambda_expr,
	    $.lookup_table_expr,
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
	    $.theory_expr,
	    $.structure_expr,
	    $.variant_expr,
	    $._record_expr,
	    $.numeral,
	    $.identifier,
	    $.tag,
	    $.theory_type,
	    $.enum,
	    $.finite,
	    $.prop,
	    $.nat,
	    $.true_const,
	    $.false_const,
	),

	app: $ => seq($._app_expr, $._prefix_expr),

	lambda_expr: $ => seq(
	    $.fun,
	    field('parameters', $.lambda_abstraction),
	    $.darrow,
	    $._expr,
	),

	lookup_table_expr: $ => seq(
	    $.fun,
	    $._lookup_fields
	),

	_lookup_fields: $ => choice(
	    seq($.lookup_field, $.end),
	    seq($.lookup_field, $._lookup_fields),
	),

	lookup_field: $ => seq(
	    $.vbar,
	    $._simple_expr,
	    $.darrow,
	    $._expr
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

	lambda_abstraction: $ => choice(
	    repeat1(field('name', $.identifier)),
	    repeat1($._typed_binder)
	),

	_quantifier_abstraction: $ => choice(
	    seq(repeat1($.identifier), $.colon, $._expr),
	    repeat1($._typed_binder),
	),

	_typed_binder: $ => seq(
	    $.lparen,
	    repeat1(field('name', $.identifier)),
	    $.colon,
	    $._expr,
	    $.rparen
	),

	_match_cases: $ => repeat1($.match_case),

	match_case: $ => seq(
	    $.vbar,
	    $._pattern,
	    $.darrow,
	    $._expr,
	),

	_pattern: $ => choice(
	    $.tag,
	    seq($.tag, $.lparen, $.identifier, $.colon, $._expr, $.rparen),
	),

	theory_expr: $ => choice(
	    seq($.theory, $.lbrace, $.rbrace),
	    seq($.theory, $.lbrace, $._theory_fields, $.rbrace),
	),

	_theory_fields: $ => choice(
	    $.theory_field,
	    seq($.theory_field, $.semicolon),
	    seq($.theory_field, $.semicolon, $._theory_fields),
	),

	theory_field: $ => choice(
	    seq($.identifier, $.colon, $._expr),
	    seq($.axiom, $.identifier, $.colon, $._expr),
	),
	
	structure_expr: $ => choice(
	    seq($.structure, $.lbrace, $.rbrace),
	    seq($.structure, $.lbrace, $._structure_fields, $.rbrace),
	),

	_structure_fields: $ => choice(
	    $.structure_field,
	    seq($.structure_field, $.semicolon),
	    seq($.structure_field, $.semicolon, $._structure_fields),
	),

	structure_field: $ => choice(
	    seq($.identifier, $.colon, $._expr),
	    seq($.axiom, $.identifier, $.colon, $._expr),
	),
	
	_record_expr: $ => choice(
	    seq($.lbrace, $.rbrace),
	    seq($.lbrace, $._record_fields, $.rbrace),
	),

	_record_fields: $ => choice(
	    $.record_field,
	    seq($.record_field, $.semicolon),
	    seq($.record_field, $.semicolon, $._record_fields),
	),

	variant_expr: $ => choice(
	    seq($.variant, $.lbrace, $.rbrace),
	    seq($.variant, $.lbrace, $._variant_fields, $.rbrace),
	),

	_variant_fields: $ => choice(
	    $.variant_field,
	    seq($.variant_field, $.vbar, $._variant_fields),
	),

	variant_field: $ => choice(
	    seq($.tag, $.colon, $._expr),
	    $.tag,
	),

	record_field: $ => seq($.identifier, $.coloneq, $._expr),

	load: $ => prec(2, 'load'),

	definition: $ => prec(2, 'def'),

	check: $ => prec(2, 'check'),

	compile: $ => prec(2, 'compile'),

	eval: $ => prec(2, 'eval'),

	clear: $ => prec(2, 'clear'),
	
	prop: $ => prec(2, /(Prop)|\u1D539/),

	finite: $ => prec(2, 'Finite'),

	theory_type: $ => prec(2, 'Theory'),

	enum: $ => prec(2, 'Enum'),

	nat: $ => prec(2, /(Nat)|(\u2115)/),

	fin: $ => prec(2, 'Fin'),

	size: $ => prec(2, 'size'),

	enumerate: $ => prec(2, 'enumerate'),

	with_keyword: $ => prec(2, 'with'),

	match: $ => prec(2, 'match'),

	begin: $ => prec(2, 'begin'),

	end: $ => prec(2, 'end'),

	theory: $ => prec(2, 'theory'),

	structure: $ => prec(2, 'structure'),

	variant: $ => prec(2, 'variant'),

	axiom: $ => prec(2, 'axiom'),

	true_const: $ => prec(10, /(True)|(\u22A4)/),

	false_const: $ => prec(10, /(False)|(\u22A5)/),

	fun: $ => prec(10, /(fun)|(\u03BB)/),

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

	backtick: $ => '`',

	identifier: $ => /(_[a-zA-Z0-9][a-zA-Z0-9_]*)|([a-zA-Z][a-zA-Z0-9_]*)/,

	numeral: $ => /(\d+)/,

	tag: $ => seq($.backtick, token.immediate(/([a-zA-Z][a-zA-Z0-9_]*)/)),

	quoted_string: $ => /"[^"]*"/,
	
    }
});

