#include <iostream>

using namespace std;
// implenting insertion sort

void PrintSorted(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }

    PrintSorted(arr, n);
}

int main()
{

    int arr[]= {3,6,1,2,9};
    int n=sizeof(arr)/sizeof(int);
    InsertionSort(arr,n);
    
}