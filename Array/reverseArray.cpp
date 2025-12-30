void reverseArray(int arr[], int n)
{
    // Approach: Use two pointers, low and high.
    // Swap elements at low and high, then move them towards each other.

    int low = 0, high = n - 1;

    while (low < high)
    {
        swap(arr[low], arr[high]);
        ++low;
        --high;
    }
}

// ----------------------------------------------------------------------------------------
void reverseArray(int arr[], int n)
{
    // Approach: Use two pointers (low and high).
    // Swap elements using a temp variable, and move the pointers inward.

    int low = 0, high = n - 1;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        ++low;
        --high;
    }
}