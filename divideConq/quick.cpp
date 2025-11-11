#include <iostream>
#include <algorithm>
using namespace std;

// Quick sort
// Time complexity => o(nlogn) average
// worst => 0(n^2);

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

    cout << endl
         << "Complete Quick Sort Tutorial" << endl;
}

int partition(int arr[], int si, int ei)
{
    int pi = arr[ei];
    int i = si - 1;

    for (int j = si; j < ei; ++j)
    {
        if (arr[j] < pi)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}

void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, ei);
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    quickSort(arr, 0, 5);
    PrintArr(arr, 6);
    return 0;
}