//* Print the subsequences of an array
//* on a condition that sum of array must be
//* equal to given sum
//* Input : [1,2,1]
//* Output :
//* [1,2,1]
//* [2]

const arr = [1, 2, 1];
const subArray = [];
const n = arr.length;
const givenSum = 2;

function kthSumSubSequent(index, subArray, sum) {
  if (index === n) {
    if (sum === givenSum) {
      console.log(subArray);
    }
    return;
  }
  sum += arr[index];
  subArray.push(arr[index]);
  kthSumSubSequent(index + 1, subArray, sum);
  sum -= arr[index];
  subArray.pop();
  kthSumSubSequent(index + 1, subArray, sum);
}

kthSumSubSequent(0, subArray, 0);
