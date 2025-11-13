#include <iostream>
using namespace std;

// inversion problem
// brute force
int inversion(int arr[], int n)
{
    int inversion_count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i < j && arr[i] > arr[j])
            {
                cout << '(' << arr[i] << ',' << arr[j] << ')';
                inversion_count += 1;
            }
        }
    }
    cout << endl;
    return inversion_count;
}

// optimized using merge sort


int main()
{

    int arr[5] = {2, 4, 1, 3, 5};
    cout << inversion(arr, 5) << endl;
}