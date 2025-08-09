int maxsum(int arr[], int n ){
    int res = arr[0];
    int maxEnding = arr[0];

    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding+arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

// we need to get a sub array that return the maximum sum

// we will initiate two variables and traverse the array

// we will assign the values to those variables as the first element of the array

// we will update maxEnding with max of the sum of maxEnding with current element or by the element itself
// we will update res with max of res and maxEnding
