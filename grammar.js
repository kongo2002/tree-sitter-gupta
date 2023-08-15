const PREC = {
  paren_expression: 1,
  or: 10,
  and: 11,
  not: 12,
  compare: 13,
  bitwise_or: 14,
  bitwise_and: 15,
  xor: 16,
  shift: 17,
  plus: 18,
  times: 19,
  unary: 20,
  call: 22,
};

module.exports = grammar({
  name: 'gupta',

  word: $ => $.identifier,

  extras: $ => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
    $.string_start,
    $._string_content,
    $.string_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,

    // Allow the external scanner to check for the validity of closing parens
    // so that it can avoid returning dedent tokens between brackets.
    ')',
  ],

  rules: {
    module: $ => repeat(choice($._simple_statement, $.multiline_comment, $.comment)),

    paren_expression: $ => prec(PREC.paren_expression, seq(
      '(',
      $.expression,
      ')',
    )),

    expression: $ => choice(
      $.not_operator,
      $.boolean_operator,
      $.comparison_operator,
      $._primary_expressions,
    ),

    _primary_expression: $ => choice(
      $.type_name,
      $.identifier,
      $.integer,
      $.float,
      $.true,
      $.false,
      $.unary_operator,
      $.binary_operator,
      $.string,
      $.call,
      $.paren_expression,
      $.array_expression,
    ),

    _block: $ => seq(
      $._indent,
      repeat1(choice($._simple_statement, $.multiline_comment)),
      $._dedent,
    ),

    _primary_expressions: $ => sep1(
      $._primary_expression,
      '||',
    ),

    array_expression: $ => seq(
      field('variable', $.identifier),
      '[',
      field('index', $._primary_expression),
      ']',
    ),

    call: $ => prec(PREC.call,
      choice($.member_function, $.function),
    ),

    member_function: $ => seq(
      field('class', $.identifier),
      '.',
      field('function', $.identifier),
      field('arguments', $.argument_list),
    ),

    function: $ => seq(
      field('function', $.identifier),
      field('arguments', $.argument_list),
    ),

    argument_list: $ => seq(
      '(',
      optional(
        commaSep1(
          $.expression
        )
      ),
      ')',
    ),

    comparison_operator: $ => prec.left(PREC.compare, seq(
      $._primary_expression,
      field('operators',
        choice(
          '<',
          '<=',
          '=',
          '!=',
          '>=',
          '>',
        )
      ),
      $._primary_expression,
    )),

    binary_operator: $ => {
      const table = [
        [prec.left, '+', PREC.plus],
        [prec.left, '-', PREC.plus],
        [prec.left, '*', PREC.times],
        [prec.left, '/', PREC.times],
        [prec.left, '%', PREC.times],
        [prec.left, '|', PREC.bitwise_or],
        [prec.left, '&', PREC.bitwise_and],
        [prec.left, '^', PREC.xor],
        [prec.left, '<<', PREC.shift],
        [prec.left, '>>', PREC.shift],
      ];

      return choice(...table.map(([fn, operator, prec]) => fn(prec, seq(
        field('left', $._primary_expression),
        field('operator', operator),
        field('right', $._primary_expression),
      ))));
    },

    not_operator: $ => prec(PREC.not, seq(
      'NOT',
      field('argument', $.expression),
    )),

    boolean_operator: $ => choice(
      prec.left(PREC.and,
        seq(
          field('left', $.expression),
          field('operator', 'AND'),
          field('right', $.expression),
        )
      ),
      prec.left(PREC.or,
        seq(
          field('left', $.expression),
          field('operator', 'OR'),
          field('right', $.expression),
        )
      ),
    ),

    _simple_statement: $ => seq(
      choice(
        $.if_statement,
        $.loop,
        $.while,
        $.explicit_call,
        $.assignment,
        $.select_case_statement,
        $.return_statement,
        $.break
      ),
    ),

    select_case_statement: $ => seq(
      'Select',
      'Case',
      field('selector', $.expression),
      $._indent,
      repeat1(
        choice(
          $.select_case,
          $.default_case,
        ),
      ),
      $._dedent,
    ),

    select_case: $ => seq(
      'Case',
      field('case', $.expression),
      $._indent,
      repeat($._simple_statement),
      $._dedent,
    ),

    default_case: $ => seq(
      'Default',
      $._indent,
      repeat($._simple_statement),
      $._dedent,
    ),

    if_statement: $ => seq(
      'If',
      field('condition', $.expression),
      field('expression', $._block),
      optional($.else_statement),
    ),

    loop: $ => seq(
      'Loop',
      field('expression', $._block),
    ),

    while: $ => seq(
      'While',
      field('condition', $.expression),
      field('expression', $._block),
    ),

    else_statement: $ => seq(
      'Else',
      field('expression', $._block),
    ),

    explicit_call: $ => seq(
      'Call',
      $.call,
    ),

    return_statement: $ => seq(
      'Return',
      optional($.expression),
    ),

    assignment: $ => seq(
      'Set',
      field('left', choice($.identifier, $.array_expression)),
      '=',
      field('right', $.expression),
    ),

    identifier: _ => /[a-zA-Z][_a-zA-Z0-9]+/,
    type_name: _ => /[A-Z][_a-zA-Z0-9]+/,

    true: _ => 'TRUE',
    false: _ => 'FALSE',

    break: _ => 'Break',

    string: $ => seq(
      $.string_start,
      repeat($._string_content),
      $.string_end,
    ),

    unary_operator: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '~')),
      field('argument', $._primary_expression),
    )),

    integer: _ => token(choice(
      seq(
        choice('0x', '0X'),
        repeat1(/_?[A-Fa-f0-9]+/),
        optional(/[Ll]/),
      ),
      seq(
        choice('0o', '0O'),
        repeat1(/_?[0-7]+/),
        optional(/[Ll]/),
      ),
      seq(
        choice('0b', '0B'),
        repeat1(/_?[0-1]+/),
        optional(/[Ll]/),
      ),
      seq(
        repeat1(/[0-9]+_?/),
        choice(
          optional(/[Ll]/), // long numbers
          optional(/[jJ]/), // complex numbers
        ),
      ),
    )),

    float: _ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(seq(
        choice(
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent),
        ),
        optional(choice(/[Ll]/, /[jJ]/)),
      ));
    },

    comment: _ => token(seq('!', /.*/)),

    multiline_comment: $ => seq(
      $.comment,
      $._indent,
      field('commentblock', repeat1(/.+/)),
      $._dedent,
    ),
  }
});

function commaSep1(rule) {
  return sep1(rule, ',');
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

// vim: set et sw=2 sts=2:
