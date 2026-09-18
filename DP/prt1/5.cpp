#include <iostream>
#include <vector>
using namespace std;

// so in this lecture we are going to solve the problem ubounded knapsack
// the only diff bw unbounded and 0 1 Knapsack is that
// 0/1 WE have only have two choice whther to inlcude it or exlcude it
// but in unbounded theres no limitation over choosing the element we can chose the same items multiple time if we want
// but the goal is same maximizing the profit

// here same n , w (object and capacity) are key variables which are changing

// so in 0/1 kanpsack after choosing ith item we had (i-1) choices meaning
// if we chose ith item than profit till ith item was profit till (i-1) + val(i);

// but in unbounded Knpsack after choosing ith item we still have i choice becuase the item/element is unlimited

int unboundedKnapsack(vector<int> &item, vector<int> &weight, int W)
{
    int n = item.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1));

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            if (weight[i - 1] <= j)
            {
                int ans1 = dp[i][j - weight[i - 1]] + item[i - 1];
                int ans2 = dp[i - 1][j];
                dp[i][j] = max(ans1, ans2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][W];
}

int main()
{
    // unbounded knapsack
    vector<int> item = {10, 29, 30};
    vector<int> weight = {2, 4, 6};
    int W = 20;
    cout << unboundedKnapsack(item, weight, W);
}