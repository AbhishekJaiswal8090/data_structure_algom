#include <iostream>
using namespace std;

// printing subarrays of sixe 1 ,2 ,3, 4, 5
void subArray1(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; j++)
            {
                cout << arr[k] << ",";
            }
        }
    }
}

int main()
{
    int arr[4] = {4, 3, 7, 2};
    subArray1(arr, 4);
}