module.exports = grammar({
  name: 'HAXE_ENUM',
  extras: ($) => [/\s/, $._comment],
  rules: {
    source_file: ($) => $.enum,
    enum: ($) => seq('enum', $.identifier, '{', repeat($.enum_entry), '}'),
    enum_entry: ($) => seq($.identifier, optional($.parameters), ';'),
    parameters: ($) =>
      seq('(', $.parameter, repeat(seq(',', $.parameter)), ')'),
    parameter: ($) => seq($.identifier, ':', $.identifier),
    identifier: ($) => /[A-Za-z<>]+/,
    _comment: ($) => seq('//', /.*/),
  },
});
