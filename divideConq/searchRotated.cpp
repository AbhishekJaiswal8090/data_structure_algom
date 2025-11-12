#include <iostream>
using namespace std;

// searching in roated array
int SearchTarget(int target, int si, int ei, int arr[])
{
    int mid = si + (ei - si) / 2;
    if (arr[mid] == target)
        return mid + 1;
    else if (arr[mid] >= target)
    {
        if (arr[mid] >= target && arr[si] < arr[mid])
        {
            SearchTarget(target, si, mid - 1, arr);
        }
        else
        {
            SearchTarget(target, mid + 1, ei, arr);
        }
    }
    else
    {
        if (arr[mid] <= target && arr[ei] >= target)
        {
            SearchTarget(target, mid + 1, ei, arr);
        }
        else
        {
            SearchTarget(target, si, mid - 1, arr);
        }
    }
}

int main()
{
    
}