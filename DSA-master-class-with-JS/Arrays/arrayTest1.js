const arr = ["a", "b", "g", "t"];

arr.push("y");
console.log(arr); //["a", "b", "g", "t","y"];  // O(1)

arr.pop();
console.log(arr); //["a", "b", "g", "t"];    // O(1)

//* add a element at begining
arr.unshift("k");
console.log(arr); //["k","a", "b", "g", "t"];    // O(N)

//* add a element at middle
arr.splice(2, 0, "alien");
console.log(arr); //["k","a","alien","b","g", "t"]; // O(N)
