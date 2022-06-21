let str = "My name is Amit Roy";

//* reverse a string using split and join
// function reverse1(str) {
//   if (!str || str.length < 2 || typeof str !== "string") {
//     return "pass some valid string";
//   }
//   let backward = [];
//   for (let i = str.length - 1; i >= 0; i--) {
//     backward.push(str[i]);
//   }

//   return backward.join("");
// }

//* reverse a string using JavaScript in-build split and join
// function reverse1(str) {
//   return str.split("").reverse().join("");
// }

//* reverse a string using JavaScript in-build arrow function
const reverse1 = (str) => [...str].reverse().join("");

console.log(reverse1(str));
