#include <iostream>
using namespace std;

// insertion sort

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

    printArr(arr, n);
}

int main()
{

    int arr[] = {5, 7, 3, 9, 0};
    int n = sizeof(arr) / sizeof(int);
    SelectionSort(arr, n);
}