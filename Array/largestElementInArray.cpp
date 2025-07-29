// Function to find the largest element in an array
int largestElement(int arr[], int n)
{
    // Approach:
    // We assume the first element (at index 0) is the largest.
    // We store its index in 'res'.
    // Then we iterate through the rest of the array.
    // If we find an element greater than arr[res], we update res to that index.
    // Finally, we return arr[res], which holds the largest value.

    int res = 0; // Initialize res to index 0 (assume first element is largest)

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[res])
        {
            res = i; // Update res if current element is larger
        }
    }

    return arr[res]; // Return the largest element
}