int maxEvenOddSubarrayLength(int arr[], int n)
{
    if (n == 0)
        return 0;

    int maxLen = 1; // At least one element
    int currLen = 1;

    for (int i = 1; i < n; ++i)
    {
        // Check if current and previous elements have different parity
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            currLen++;
            maxLen = max(maxLen, currLen);
        }
        else
        {
            currLen = 1; // Reset if sequence breaks
        }
    }

    return maxLen;
}