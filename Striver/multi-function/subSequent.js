//* Print the subsequences of an array
//* Order must be same
//* Input : [3,1,2]
//* Output :
//* [3,1,2]
//* [3,1]
//* [3,2]
//* [3]
//* [1]
//* [2]
//* [1,2]
//* []

//* [2,1 ] will not be an option as they are not
//* in order

const arr = [3, 1, 2];
let subArray = [];
const n = arr.length;

function subSequence(index, subArray) {
  if (index === n) {
    console.log(subArray);
    return;
  }
  subArray.push(arr[index]);
  subSequence(index + 1, subArray);
  subArray.pop();
  subSequence(index + 1, subArray);
}

subSequence(0, subArray);
