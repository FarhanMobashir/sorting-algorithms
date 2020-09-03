function selectionSort(arr) {

    for (let i = 0; i < arr.length - 1; i++) {
        let minidx = i;
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }

        }
        // swapping the values

        
        [arr[i], arr[minidx]] = [arr[minidx], arr[i]];
    }
    return arr;

}

let swap = selectionSort([3, 2, 6, 19, 13, 12, 17, 2, 5]);

console.log(swap);