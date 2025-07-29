int secondLargest(int arr[], int n)
{
    // Approach:
    // We keep track of the index of the largest and second largest elements.
    // Start by assuming the first element is the largest (index 0), and second largest is -1.
    // In one loop, if we find a new largest, we update both largest and second largest.
    // If the current element is not equal to the largest and is greater than current second largest,
    // we update second largest.

    int largest = 0;
    int res = -1;

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }

    return (res == -1) ? -1 : arr[res];
}