void leftRotate(int arr[], int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

// we are storing the first element in a temp variable
// we will traverse the array and shift each element one step to the left
// once every element is done we will not set the last element to temp