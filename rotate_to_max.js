/* Given a number, return the maximum value by rearranging its digits.

Examples:

(123) => 321 (786) => 876 ("001") => 100 (999) => 999 (10543) => 54310

^Note the number may be given as a string */

const rotateToMax = n => {
    output = [];
    sNumber = n.toString();

for (var i = 0, len = sNumber.length; i < len; i += 1) {
    output.push(+sNumber.charAt(i));
}
  output.sort();
  output.reverse();
  return Number(output.join(""));
}