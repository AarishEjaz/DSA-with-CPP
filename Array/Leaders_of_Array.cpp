void leaders(int arr[], int n ){
    int curr_leader = arr[n-1];

    for(int i=n-2; i>=0; i--){
        if(curr_leader < arr[i]){
            curr_leader = arr [i];
            cout<< curr_leader;
        }
    }
}

// we will set the (n-1)th element as curr_leader
// we will now start traversing
// if we encounter a element greater than curr_leader then we will assign curr_leader = that element
// we will print along the curr_leaders
