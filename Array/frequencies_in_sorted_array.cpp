void frequency(int arr[], int n){
    int freq = 0;
    int i = 1;

    while (i<n){
        while( i<n a && arr[i-1]==arr[i]){
            freq++;
            i++
        }
        cout<<arr[i-1]<<" "<<freq;
        i++;
        freq=1;

    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<< arr[n-1]<<" "<<1;
    }
}

// we will traverse the array
// we will declare two variables
// inside the loop when the same elements are encountered freq and i are incremeneted
// when the condition for inner loop fails freq is set to 1 and i is again incremented
