int removeDuplicates(int arr[], int n)
{
    // If array has 0 or 1 elements, no duplicates possible
    if (n == 0 || n == 1)
        return n;

    // index keeps track of position to insert the next unique element
    int index = 1;

    // Traverse the array starting from the second element
    for (int i = 1; i < n; i++)
    {
        // Compare current element with the previous one
        if (arr[i] != arr[i - 1])
        {
            // If it's different, it's a unique element
            // Place it at the current 'index' and increment index
            arr[index] = arr[i];
            index++;
        }
        // If it's the same, do nothing (skip duplicates)
    }

    // Return the new length of the array with unique elements
    return index;
}