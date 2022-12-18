/*!
 * is-number <https://github.com/jonschlinkert/is-number>
 *
 * Copyright (c) 2014-2018, Jon Schlinkert.
 * Released under the MIT License.
 */

'use strict';

module.exports = function isNumber(num) {
  var number = +num;

  if ((number - number) !== 0) {
    // Discard Infinity and NaN
    return false;
  }

  if (number === num) {
    return true;
  }

  if (typeof num === 'string') {
    // String parsed, both a non-empty whitespace string and an empty string
    // will have been coerced to 0. If 0 trim the string and see if its empty.
    if (number === 0 && num.trim() === '') {
      return false;
    }
    return true;
  }
  return false;
};
