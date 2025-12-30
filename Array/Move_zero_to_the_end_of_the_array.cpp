void moveZero(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count] );
            count++;
        }

    }

}

// in this we will traverse the array and lookout for non-zero elements
// when we encounter a non-zero element we swap it by itself and increment count
// when we encounter zero the count is set to the index of that zero
// now when we will get a non-zero elemnt it will swap both of them