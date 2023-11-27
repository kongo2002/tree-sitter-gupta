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

  conflicts: $ => [
    [$._primary_expressions],
    [$._primary_expression, $.ref],
  ],

  inline: $ => [
    $.section_header,
  ],

  rules: {
    sections: $ => repeat(
      choice(
        $.section,
        $.comment,
        $.multiline_comment,
        $.data_block,
      ),
    ),

    section: $ => choice(
      $.action_section,
      $.description_section,
      seq(
        $.section_header,
        repeat(
          seq(
            $._indent,
            repeat1($._section_content),
            $._dedent,
          ),
        ),
      ),
    ),

    _section_content: $ => choice(
      $.section,
      $.comment,
      $.multiline_comment,
    ),

    declaration_name: $ => alias(
      seq(
        $.type_name,
        repeat(seq(choice(' ', '/'), alias(choice($.type_name, $.identifier), 'ident'))),
      ),
      'declaration'
    ),

    section_header: $ => seq(
      choice(
        $.section_declaration,
        $.declaration_name,
        $.section_toggle,
      ),
      $._newline,
    ),

    section_declaration: $ => seq(
      field('type', $.declaration_name),
      ':',
      repeat(' '),
      optional(field('name', $.section_value)),
    ),

    section_toggle: $ => seq(
      field('type', $.declaration_name),
      '?',
      field('value', $.toggle_value),
    ),

    toggle_value: $ => alias(
      seq(
        $.type_name,
        repeat(seq(' ', alias($.type_name, 'value'))),
      ),
      'value',
    ),

    section_value: _ => token(/[^\r\n]+/),

    description_section: $ => seq(
      'Description',
      ':',
      field('text', optional($.description_text)),
    ),

    description_text: $ => seq(
      /[^\r\n]+/,
      optional(
        seq(
          $._indent,
          $._description_block,
          $._dedent,
        ),
      ),
    ),

    _description_block: $ => repeat1(
      choice(
        /.+/,
        seq(
          $._indent,
          $._description_block,
          $._dedent,
        ),
      ),
    ),

    action_section: $ => seq(
      field('type',
        choice(
          'Actions',
          'Menu Actions',
          'Application Actions',
          'Message Actions',
        ),
      ),
      optional($._block),
    ),

    paren_expression: $ => prec(PREC.paren_expression, seq(
      '(',
      $._expression,
      ')',
    )),

    _expression: $ => choice(
      $.not_operator,
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
      $.refs,
    ),

    _block: $ => seq(
      $._indent,
      repeat1(choice($._simple_statement, $.multiline_comment, $.comment)),
      $._dedent,
    ),

    _primary_expressions: $ => prec.left(sep1(
      $._primary_expression,
      '||',
    )),

    array_expression: $ => prec(PREC.call, seq(
      field('variable', $.identifier),
      '[',
      field('index', $._primary_expression),
      ']',
    )),

    call: $ => prec(PREC.call,
      $.function,
    ),

    function: $ => seq(
      field('function', $.refs),
      field('arguments', $.argument_list),
    ),

    argument_list: $ => seq(
      '(',
      optional(
        commaSep1(
          $._expression
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
        [prec.left, 'AND', PREC.and],
        [prec.left, 'OR', PREC.or],
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
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    not_operator: $ => prec(PREC.not, seq(
      'NOT',
      field('argument', $._expression),
    )),

    _simple_statement: $ => seq(
      choice(
        $.if_statement,
        $.else_if_statement,
        $.else_statement,
        $.when_statement,
        $.on_statement,
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
      field('selector', $._expression),
      $._indent,
      repeat1(
        choice(
          $.comment,
          $.multiline_comment,
          $.select_case,
          $.default_case,
        ),
      ),
      $._dedent,
    ),

    select_case: $ => seq(
      'Case',
      field('case', $._expression),
      $._block,
    ),

    default_case: $ => seq(
      'Default',
      $._block,
    ),

    if_statement: $ => seq(
      'If',
      field('condition', $._expression),
      field('expression', $._block),
    ),

    when_statement: $ => seq(
      'When',
      field('trigger', $.type_name),
      field('expression', $._block),
    ),

    else_if_statement: $ => seq(
      'Else', 'If',
      field('condition', $._expression),
      field('expression', $._block),
    ),

    on_statement: $ => seq(
      'On',
      field('condition', $._expression),
      field('expression', $._block),
    ),

    loop: $ => seq(
      'Loop',
      field('expression', $._block),
    ),

    while: $ => seq(
      'While',
      field('condition', $._expression),
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
      optional($._expression),
    ),

    ref: $ => alias(
      choice(
        $.identifier,
        $.array_expression,
      ),
      'ref'
    ),

    refs: $ => alias(seq($.ref, repeat(seq('.', $.ref))), 'ref'),

    assignment: $ => seq(
      'Set',
      field('left', $.refs),
      '=',
      field('right', $._expression),
    ),

    identifier: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,
    type_name: _ => /[A-Z][_a-zA-Z0-9]*/,

    true: _ => 'TRUE',
    false: _ => 'FALSE',

    break: _ => 'Break',

    string: $ => seq(
      $.string_start,
      repeat($.string_content),
      $.string_end,
    ),

    string_content: $ => prec.right(repeat1(
      choice(
        $.escape_sequence,
        $._not_escape_sequence,
        $._string_content,
      ))),

    escape_sequence: _ => token.immediate(prec(1, seq(
      '\\',
      choice(
        /\r?\n/,
        /['"abfrntv\\]/,
      ),
    ))),

    _not_escape_sequence: _ => token.immediate('\\'),

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
          optional(/['"]/), // unit
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
        optional(choice(/[Ll]/, /[jJ]/, /['"]/)),
      ));
    },

    // not very sophisticated but kind of works...
    // we don't want to match a literal '!=' as a comment
    comment: _ => token(
      seq(
        '!',
        optional(/[^=\r\n].*/),
      )
    ),

    multiline_comment: $ => seq(
      $.comment,
      $._indent,
      field('commentblock', repeat1(/.+/)),
      $._dedent,
    ),

    data_block: $ => seq(
      '.data',
      alias($.identifier, 'ident'),
      field('data', repeat1(/.+/)),
      '.enddata',
    ),
  }
});

function maybe_block(rule, indent, dedent) {
  return choice(
    rule,
    seq(
      indent,
      rule,
      dedent,
    ),
  );
}

function commaSep1(rule) {
  return sep1(rule, ',');
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

// vim: set et sw=2 sts=2:
