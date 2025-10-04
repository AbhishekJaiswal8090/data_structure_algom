#include <iostream>
#include <climits>
using namespace std;

void PrintingSubArray()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
        cout << endl;
    }
}

// Brute Force
void MaxSubArraySum()
{
    int sum = 0;
    int max = INT_MIN;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
                sum += arr[k];
            }
            cout << "sum: " << sum << endl;
            if (sum > max)
            {
                max = sum;
            }
            sum = 0;
            cout << endl;
        }
        cout << endl;
    }
    cout << "Max val is: " << max << endl;
}

// Optimized
void MaxSubArraySum2()
{
    int maxSum = INT_MIN;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        int curSum = 0;
        for (int j = i; j < n; j++)
        {
            curSum += arr[j];
            maxSum = max(curSum, maxSum);
        }
        cout << endl;
    }
    cout << "Max val is: " << maxSum << endl;
}

int main()
{
    // PrintingSubArray();
    MaxSubArraySum2();
}