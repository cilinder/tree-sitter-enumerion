(check) @keyword
(fin) @type.builtin
(nat) @type.builtin
(finite) @type.builtin
(enum) @type.builtin
(prop) @type.builtin
(numeral) @number
(comment) @comment
(fun) @keyword
(plus) @operator
(true_const) @constant
(darrow) @delimiter
(comma) @delimiter
(lparen) @bracket
(rparen) @bracket
(colon) @delimiter
(structure) @keyword
(variant) @keyword
(end) @keyword

(lambda_abstraction name: (identifier) @variable.parameter)

((identifier) @function.method
 (#is-not? local))
