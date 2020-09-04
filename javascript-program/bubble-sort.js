function bubbleSort(arr){
    for(let i = 0; i< arr.length; i++) {
        for(let j = 0; j < arr.length; j++) {
            if(arr[j] > arr[j+1]) {
                [arr[j], arr[j+1]] = [arr[j+1],arr[j]]
            }
        }
    }
    return arr;
}

console.log(bubbleSort([9,8,5,6,7,2,3,1,5,45,42,40,56,54,41,50]));