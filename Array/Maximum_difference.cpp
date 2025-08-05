int maxDef(int arr[], int n ){
    int res = arr[1]-arr[0];
    int minval = arr[0]

    for(int i=1; i<n; i++){
        res = max(res, arr[i]-minval);
        minval = min(arr[i], minval);
    }
    return res;
}

// we will take two variables res and minval
// we will assign res equal to diffrence between first and zeroth elment of the array
// we will assign minval the zeroth element of the arrya

// now we will iterate over the array and update the res and minvalue by:-
// res: we will take the max of either res or arr[i]-minval
// minval: we will take the min of arr[i] or minval