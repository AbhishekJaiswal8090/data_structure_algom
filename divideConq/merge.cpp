#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Divide and Conquer
// merge sort

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

void mergeArray(int arr[], int si, int mid, int ei)
{
    std::vector<int> temp;
    temp.reserve(ei - si + 1);
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    for (int idx = si, x = 0; idx <= ei; idx++)
    {
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei)
{

    if (si >= ei)
    {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    mergeArray(arr, si, mid, ei);
}

int main()
{
    // merge sort
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    mergeSort(arr, 0, n - 1);
    PrintArr(arr, 6);
}