const arr = [1, 2, 3, 4, 5, 6];
const n = arr.length - 1;

//? SWAP IS THE KEY, take pointer on both the end and swap
//? take one pointer and swap , another approach (single parameter)

// function reverseArray( i, n) {
//   if (i >= n) return;
//   [arr[i], arr[n]] = [arr[n], arr[i]];
//   reverseArray(i + 1, n - 1);
// }
// reverseArray( 0, n);

function reverseArray(i) {
  if (i >= n / 2) return;
  [arr[i], arr[n - i]] = [arr[n - i], arr[i]];
  reverseArray(i + 1);
}
reverseArray(0);

console.log(arr);
