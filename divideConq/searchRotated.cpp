#include <iostream>
using namespace std;

// searching in rotated array
int SearchTarget(int target, int si, int ei, int arr[])
{
    if (si > ei)
        return -1;

    int mid = si + (ei - si) / 2;
    if (arr[mid] == target)
        return mid;

    // left half is sorted
    if (arr[si] <= arr[mid])
    {
        if (target >= arr[si] && target < arr[mid])
            return SearchTarget(target, si, mid - 1, arr);
        else
            return SearchTarget(target, mid + 1, ei, arr);
    }
    else // right half is sorted
    {
        if (target > arr[mid] && target <= arr[ei])
            return SearchTarget(target, mid + 1, ei, arr);
        else
            return SearchTarget(target, si, mid - 1, arr);
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << SearchTarget(0, 0, n - 1, arr) << endl; // prints index (0-based)
    return 0;
}