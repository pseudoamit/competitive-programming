let arr1 = [0, 3, 4, 31, 56, 79];
let arr2 = [4, 6, 30];

// function mergeSortedArray(arr1, arr2) {
//   let resultArr = [];
//   if (arr1.length < 1) return arr2;
//   if (arr2.length < 1) return arr1;

//   //* O(n^2)
//   /*
//   for (let i = 0; i < arr1.length; i++) {
//     resultArr.push(arr1[i]);
//   }
//   for (let i = 0; i < arr2.length; i++) {
//     resultArr.push(arr2[i]);
//   }
//   for (let i = 0; i < resultArr.length; i++) {
//     for (let j = 0; j <= i; j++) {
//       if (resultArr[j] > resultArr[i]) {
//         // let temp;
//         // temp = resultArr[j];
//         // resultArr[j] = resultArr[j + 1];
//         // resultArr[j + 1] = temp;
//         //* es6 swap
//         [resultArr[j], resultArr[j + 1]] = [resultArr[j + 1], resultArr[j]];
//       }
//     }
//   }
//   */

//   for (let i = 0; i < arr1.length; i++) {
//     resultArr.push(arr1[i]);
//   }
//   for (let j = 0; j < arr2.length; j++) {
//     resultArr.push(arr2[j]);
//   }

//   return resultArr.sort((a, b) => a - b);
// }

// console.log(mergeSortedArray(arr1, arr2));

// //* javascript sort function
// // let numbers = [0, 1, 2, 3, 10, 20, 30];

// // numbers.sort(function (a, b) {
// //   if (a < b) return -10;
// //   if (a > b) return 10;
// //   return 0;
// // });

// // numbers.sort((a, b) => a - b);

// // console.log(numbers);

function mergeSortedArray(arr1, arr2) {
  if (arr1.length < 1) return arr2;

  if (arr2.length < 1) return arr1;

  let resultArr = [];

  let i = 0;
  let j = 0;

  while (arr1[i] || arr2[j]) {
    if (!arr2[j] || arr1[i] < arr2[j]) {
      resultArr.push(arr1[i]);
      i++;
    } else {
      resultArr.push(arr2[j]);
      j++;
    }
  }

  return resultArr;
}

console.log(mergeSortedArray(arr1, arr2));
