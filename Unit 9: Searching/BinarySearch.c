#include <stdio.h>

// Returns the index of the target value in the given sorted array, or -1 if not found.
int binary_search(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // Avoid overflow when doing (left + right) / 2.

        if (arr[mid] == target)
        {
            return mid; // Found the target.
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Search the right half.
        }
        else
        {
            right = mid - 1; // Search the left half.
        }
    }

    return -1; // Target not found.
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int target = 5;

    int index = binary_search(arr, sizeof(arr) / sizeof(int), target);
    if (index >= 0)
    {
        printf("Target found at index %d\n", index);
    }
    else
    {
        printf("Target not found\n");
    }

    return 0;
}
