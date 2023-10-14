module.exports = grammar({
  name: 'Enumerion',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(choice($.comment, $._toplevel)),

    comment: $ => /\(\*.*\*\)/,

    _toplevel: $ => choice(
        $.check
        // TODO toplevel commands
    ),

    check: $ => seq(
        'check',
        $._expression,
        optional(seq($.colon, $._expression))
    ),

    _expression: $ => choice(
        $._type,
        $._term,
        $.identifier
    ),

    _type: $ => choice(
        $._universe,
        $.nat,
        $.fin,
        // TODO
    ),

    _universe: $ => choice(
        $.finite,
        $.enum
    ),

    nat: $ => 'Nat',

    fin: $ => seq(
        'Fin',
        $._expression
    ),

    finite: $ => 'Finite',

    enum: $ => 'Enum',

    _term: $ => choice(
        $.numeral,
    ),

    identifier: $ => /(_[a-z0-9][a-z0-9_]*)|([a-z][a-z0-9]*)/,

    numeral: $ => /\d+/,

    colon: $ => ':',

  }
});
