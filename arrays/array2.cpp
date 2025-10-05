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

// Kadane's algom (Highly Optimized)

void KadanesAlgom()
{
    int maxSum = INT_MIN;
    int curSum = 0;
    int arr[] = {-1, -2, -3, -4, -5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        maxSum = max(curSum, maxSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    cout << "Max sum is: " << maxSum;
}

// Buy and sell stocks
// brute force
int BuyAndSellStock(int *prices, int buy_day, int n)
{
    int high_price = 0;
    int profit = 0;
    for (int i = buy_day; i < n; i++)
    {
        high_price = max(high_price, prices[i]);
    }
    if (high_price > prices[buy_day])
    {
        profit = high_price - prices[buy_day];
        return profit;
    }
    return 0;
}

int main()
{
    // PrintingSubArray();
    // MaxSubArraySum2();
    // KadanesAlgom();
    int prices[6] ={7,1,5,3,6,4};
    int ans =  BuyAndSellStock(prices,2,6);
    cout<<ans<<endl;
    int ans2 = BuyAndSellStock(prices,0,6);
    cout<<ans2<<endl;
}