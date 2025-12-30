int maxConsecutiveOne(bool arr[], int n){
    res = 0;
    curr = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            curr=0;
        }else{
            curr++;
            res = max(res,curr);
        }

    }
    return res;
}

// we have a array filled with 0 and 1
// we have to find the maximum count of consecutive 1

// we will declare two variables curr and res

// if we come to an element that is not 1 while traversing
// we will reset the curr with 0

// else we will keep incrementing the curr
// and set the value equal to the max of res and curr