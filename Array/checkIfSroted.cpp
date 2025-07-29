bool isSorted(int arr[], int n)
{
    // Approach: Loop through the array and compare each element with the next one.
    // If any element is greater than the next, the array is not sorted.

    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}
//-----------------------------------------------------------------------------------------------------------------------------
bool isSorted(int arr[], int n)
{
    // Approach: Start from index 1 and compare each element with the previous one.
    // If any element is smaller than the one before it, the array is not sorted.

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    return true;
}