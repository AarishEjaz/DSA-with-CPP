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

// Approach to Find Maximum Length of Even - Odd Subarray
//                                               Initialize variables

//                                                   Set maxLen to 1,
//     since the smallest possible valid subarray has length 1.

//         Set currLen to 1 to track the length of the current alternating even -
//         odd sequence.

//         Traverse the array

//             Start from the second element and compare each element with the previous one.

//         Check if they have different parity : one is even and the other is odd.

//                                               Update sequence length

//                                                   If the current and previous elements have opposite parity,
//     increment currLen by 1 and update maxLen if currLen is greater.

//                                If they have the same parity,
//     reset currLen to 1 because the alternating sequence is broken.

//     Final result

//         After iterating through the array,
//     maxLen will contain the maximum length of a contiguous subarray where elements alternate between even and odd.

//     Time and space complexity

//         Time complexity : O(n),
//     because the array is traversed once.

//     Space complexity : O(1),
//     since no extra space is used apart from variables.
