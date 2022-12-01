const str = "madam";
const strArr = str.split("");
const n = strArr.length - 1;

function checkPalindrome(i) {
  if (i > n / 2) {
    return true;
  }
  if (strArr[i] !== strArr[n - i]) {
    return false;
  }
  return checkPalindrome(i + 1);
}

const result = checkPalindrome(0);

console.log(result);
