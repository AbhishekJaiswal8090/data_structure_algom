#include <iostream>
using namespace std;

void PrefixSum(int *arr, int n)
{
    int ans[10] = {0};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        ans[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ",";
    }
}

void SuffixSum(int *arr, int n)
{
    int ans2[10] = {0};
    int sum = 0;
    for (int j = n - 1; j >= 0; j++)
    {
        sum = sum + arr[j];
        ans2[j] = sum;
    }

    for (int j = 0; j < n; j++)
    {
        cout << ans2[j] << ",";
    }
}
int main()
{

    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    PrefixSum(arr, 10);
    cout << "Hello mfs" << endl;
    SuffixSum(arr, 10);
}