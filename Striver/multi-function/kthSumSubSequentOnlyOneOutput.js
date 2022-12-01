//* Print only one subsequence of an array
//* on a condition that sum of array must be
//* equal to given sum
//* Input : [1,2,1]
//* Output : [1,2,1]

const arr = [1, 2, 1];
const subArray = [];
const n = arr.length;
const givenSum = 2;

function kthSumSubSequentOnlyOneOutput(index, subArray, sum) {
  if (index === n) {
    if (sum === givenSum) {
      console.log(subArray);
      return true;
    }
    return false;
  }
  sum += arr[index];
  subArray.push(arr[index]);
  if (kthSumSubSequentOnlyOneOutput(index + 1, subArray, sum) === true) {
    return true;
  }
  sum -= arr[index];
  subArray.pop();
  if (kthSumSubSequentOnlyOneOutput(index + 1, subArray, sum) === true) {
    return true;
  }
  return false;
}

kthSumSubSequentOnlyOneOutput(0, subArray, 0);
