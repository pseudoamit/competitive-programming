class MyArray {
  constructor() {
    this.length = 0;
    this.data = {};
  }

  getItem(index) {
    return this.data[index];
  }

  push(item) {
    this.data[this.length] = item;
    this.length++;
    return this.length;
  }

  pop() {
    const dataToBeDeleted = this.data[this.length - 1];
    delete this.data[this.length - 1];
    this.length--;
    console.log("Deleted item is : ", dataToBeDeleted);
    return this.length;
  }

  // delete(beginningIndex, noOfItemToBeDeleted) {
  //   for (let index = beginningIndex; index < noOfItemToBeDeleted; index++) {
  //     const element = array[index];
  //   }
  // }
}

const newArray = new MyArray();

newArray.push("hi");
newArray.push("Hello");
newArray.push("alien");

newArray.pop();
// console.log(newArray.getItem(1));

console.log(newArray);
