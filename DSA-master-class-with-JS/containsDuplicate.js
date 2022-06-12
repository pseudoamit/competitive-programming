//Given two array..
// return true if any element of array1 contains in array2
//return false

let array1 = ["k", "g", "f", "h"];
let array2 = ["a", "y", "a"];

//? is the array only contains string
//? is the array sorted
//?

//* Take each element from array 1 and compare with array 2

/*
function containsDuplicate(array1, array2) {
  for (let i = 0; i < array1.length; i++) {
    for (let j = 0; j < array2.length; j++) {
      if (array1[i] === array2[j]) {
        return true;
      }
    }
  }
  return false;
}

console.log(containsDuplicate(array1, array2));
*/

//Time complexity of the above solution is O(n^2);

//* next approach
//* create a object and map all the element to the object and then check with the second array if the element is present or not
/*
function containsDuplicate(array1, array2) {
  let mapArrayToObject = {};
  for (let i = 0; i < array1.length; i++) {
    if (!mapArrayToObject[array1]) {
      mapArrayToObject[array1[i]] = true;
    }
  }

  for (let j = 0; j < array2.length; j++) {
    if (mapArrayToObject[array2[j]]) {
      return true;
    }
  }
  return false;
}

console.log(containsDuplicate(array1, array2));
//* Time complexity will be O(n+m)
*/

/*
//*Javascript in-built function
function containsDuplicate(array1, array2) {
  return array1.some((item) => array2.includes(item));
}

console.log(containsDuplicate(array1, array2));
*/
