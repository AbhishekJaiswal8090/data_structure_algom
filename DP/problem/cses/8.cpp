#include <iostream>
#include <vector>
using namespace std;

// Rod cutting problem
// rod cutting problem is an classic problem on to the unbounded knapsack (dp)
// in this problem we are given an n size rod and the profit for cutting at particualr lenght
// we have to cut the rod such that our profit is maximized

// Recursion
int rodCut(int i, vector<int> &price, int n)
{

    if (i == 0)
    {
        return price[0] * n;
    }

    int not_take = 0 + rodCut(i - 1, price, n);

    int rod_len = i + 1;
    int take = 0;
    if (rod_len <= n)
    {
        take = price[i] + rodCut(i, price, n - rod_len);
    }

    return max(not_take, take);
}

// memoized solution

int rodCutMemo(int i, int n, vector<int> &price, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        return price[0] * n;
    }
    if (dp[i][n] != -1)
    {
        return dp[i][n];
    }

    int not_take = rodCutMemo(i - 1, n, price, dp);

    int rod_len = i + 1;
    int take = 0;
    if (rod_len <= n)
    {
        take = price[i] + rodCutMemo(i, n - rod_len, price, dp);
    }

    return dp[i][n] = max(not_take, take);
}

int tab(vector<int> &price, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int not_take = dp[i - 1][j];
            int take = 0;

            if (j >= i)
            {
                take = price[i - 1] + dp[i][j - i];
            }

            dp[i][j] = max(not_take, take);
        }
    }

    return dp[n][n];
}

// Tabulation

int main()
{
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int rod_len = price.size();
    // cout << rodCut(rod_len - 1, price, rod_len);
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    // cout << rodCutMemo(rod_len - 1, n, price, dp);
    cout << tab(price, n);
}