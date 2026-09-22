#include <bits/stdc++.h>
using namespace std;

// count subsets with sum equal to K
// recursion
int solve(int i, int target, vector<int> &a, int n)
{
    if (i < 0 && target != 0)
    {
        return 0;
    }
    if (target == 0)
    {
        return 1;
    }
    if (i == 0)
    {
        if (a[i] == target)
            return 1;
        else
            return 0;
    }

    int not_pick = solve(i + 1, target, a, n);

    int pick = 0;
    if (a[i] <= target)
    {
        pick = solve(i - 1, target - a[i], a, n);
    }

    return pick + not_pick;
}

// memoized

int solve2(int i, int target, vector<vector<int>> &dp, vector<int> &a, int n)
{

    if (target == 0)
    {
        return 1;
    }

    if (i == 0)
    {
        if (a[i] == target)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if (dp[i][target] != -1)
    {
        return dp[i][target];
    }

    int not_pick = solve2(i - 1, target, dp, a, n);
    int pick = 0;
    if (a[i] <= target)
    {
        pick = solve2(i - 1, target - a[i], dp, a, n);
    }

    return dp[i][target] = pick + not_pick;
}

int main()
{
    vector<int> a = {1, 2, 2, 3};
    int count = 0;
    // solve(0, count, 0, 3, a, 3);
    // cout << count << endl;
    int n = a.size();
    int target = 3;
    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    cout << solve2(n - 1, target, dp, a, n);
    return 0;
}