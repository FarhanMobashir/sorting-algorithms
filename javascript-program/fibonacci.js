function getfibonacci(num) {
    let arr= [1,1];
    let i = 1;
    let sum = 0;
    for(i = 1; i < num-1; i++) {
        arr.push(arr[i] + arr[i-1]);    
    //   if(arr[i] <= num - arr[i-1]) {
    //    arr.push(arr[i] + arr[i-1]);
    //   }
    // }
    // for(i =0; i < arr.length; i++) {
    //   if (arr[i] % 2 !== 0) {
    //     sum += arr[i];
    //   }
    }
    return arr;
  }
  
  console.log(getfibonacci(20));
  