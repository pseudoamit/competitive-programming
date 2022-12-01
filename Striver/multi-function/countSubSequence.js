//* Print count of subsequence of an array
//* on a condition that sum of array must be
//* equal to given sum
//* Input : [1,2,1]
//* Output : 2
//* [1,1] & [2]  =>> total count 2..

const arr = [1, 2, 1];
const subArray = [];
const n = arr.length;
const givenSum = 2;

function countSubSequence(index, subArray, sum) {
  if (index === n) {
    if (sum === givenSum) {
      return 1;
    }
    return 0;
  }
  sum += arr[index];
  subArray.push(arr[index]);
  let left = countSubSequence(index + 1, subArray, sum);
  sum -= arr[index];
  subArray.pop();
  let right = countSubSequence(index + 1, subArray, sum);

  return left + right;
}

const result = countSubSequence(0, subArray, 0);

console.log(result);
