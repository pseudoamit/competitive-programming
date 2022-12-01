// Given array
let arr = [2, 5, 1, 2, 3, 5, 1, 2, 4];
/*
Definitely array will not be sorted , 
if it is then we can check next occurrence of every character
*/

/*
Naive approach , take every character and check the character
is present or not in the inner loop
Complexity O(n^2)
*/

// let map = new Map();

// for (let i = 0; i < arr.length; i++) {
//   map.set(arr[i], arr[i]++);
// }

// console.log(map);

function firstOccurrence(arr) {
  let map = {};

  for (let i = 0; i < arr.length; i++) {
    if (map[arr[i]] !== undefined) {
      return arr[i];
    }
    map[arr[i]] = i;
  }
  return undefined;
}

console.log(firstOccurrence([2, 5, 5, 1, 2, 3, 5, 1, 2, 4]));
