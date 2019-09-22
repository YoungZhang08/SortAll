

function BubbleSort(arr) {
  let temp = 0, flag = 1;
  let n = arr.length;
	for(let i = 0; i < n - 1 && flag; i++){
		flag = 0;
		for(let j = n - 1; j >= i; j--){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}
  }
  console.log(arr);
  return arr;
}

const arr = [3, 5, 6, 1, 9, 2, 4, 8, 0];
BubbleSort(arr);