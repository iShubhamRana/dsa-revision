
function swap(arr, i, j) {
  const currValue = arr[j];
  arr[j] = arr[i];
  arr[i] = currValue;
}

function partition(arr, beg, end) {

  const pivot = arr[end];

  let i = beg - 1;

  for (let j = beg; j < end; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr, i, j);
    }
  }


  swap(arr, i + 1, end);
  return i + 1;

}

function quickSort(arr, beg, end) {
  if (beg < end) {
    const pi = partition(arr, beg, end);
    quickSort(arr, beg, pi - 1);
    quickSort(arr, pi + 1, end);
  }
}


function countingSort(arr) {

  const count = [];

  arr.forEach(element => {
    count[element] = (count[element] || 0) + 1;
  });

  const sortedArray = [];
  console.log(count);

  for (let i = 0; i < count.length; i++) {
    let currentCount = count[i] || 0;

    while (currentCount) {
      sortedArray.push(i);
      currentCount--;
    }

  }

  console.log(count)
  console.log(count[0])
  return sortedArray;
}

const arr = [4, 4, 5, 1, 2, 3]
console.log(countingSort(arr))
console.log(arr)

