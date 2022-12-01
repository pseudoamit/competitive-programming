//* PRINT NAME 5 TIMES
// function printNames(n) {
//   if (n === 0) return;
//   console.log("Amit");
//   printNames(n - 1);
// }
// printNames(5);

//* print linearly from 1 to N using backtracking
// function print1ToN(n) {
//   if (n === 0) return;
//   print1ToN(n - 1);
//   console.log(n);
// }
// print1ToN(10);

//* print linearly from N to 1 using backtracking
// function printNto1(n) {
//   if (n === 0) return;
//   console.log(n);
//   printNto1(n - 1);
// }
// printNto1(10);

//* print linearly from 1 to N using parameter
// function print(i, n) {
//   if (i > n) return;
//   console.log(i);
//   print(i + 1, n);
// }
// print(1, 5);

//* sum of 1 to N integer functional approach
// function sum(n) {
//   if (n === 0) return 0;
//   return n + sum(n - 1);
// }
// console.log(sum(5));

//* sum of 1 to N integer parameterize approach
// function sum(i, s) {
//   if (i < 1) {
//     console.log(s);
//     return;
//   } else {
//     s += i;
//     sum(i - 1, s);
//   }
// }
// sum(5, 0);

//* factorial of a integer functional approach
// function fact(n) {
//   if (n === 1) return 1;
//   return n * fact(n - 1);
// }
// console.log(fact(5));
