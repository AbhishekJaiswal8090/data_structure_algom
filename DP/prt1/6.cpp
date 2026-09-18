#include <iostream>
#include <vector>

using namespace std;
// COIN CHANGE PROBLEM II

// number of combination to make the amount

int coinChangeII(vector<int> &coins, int target)
{
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(target + 1));

    for (int i = 0; i <= n; i++)
    {
        // base case => to make amount of 0 , whther there is coins or not number of combination will be 1
        dp[i][0] = 1;
    }
    for (int i = 1; i <= target; i++)
    {
        // base case => if we don't have any number of coins ,to make any amount of i except 0 the number of combination will always be 0;

        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= target; j++)
        {
            if (j >= coins[i - 1])
                dp[i][j] = dp[i][j - coins[i]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][target];
}

int main()
{
}