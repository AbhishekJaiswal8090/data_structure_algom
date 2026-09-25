#include <bits/stdc++.h>
using namespace std;

// Count the number of ways to split the array into two subsets such that
// |s1 - s2| = D.
//
// If total sum = S, then s1 + s2 = S and s1 - s2 = D.
// Solving gives:
//   s2 = (S - D) / 2
// So we need the number of subsets whose sum is exactly target = (S - D) / 2.

long long count_subsets(long long target, const vector<int> &a)
{
    int n = a.size();
    if (target < 0)
        return 0;

    vector<vector<long long>> dp(n + 1, vector<long long>(target + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (long long j = 0; j <= target; j++)
        {
            dp[i][j] = dp[i - 1][j]; // don't take a[i - 1]
            if (a[i - 1] <= j)
            {
                dp[i][j] += dp[i - 1][j - a[i - 1]]; // take a[i - 1]
            }
        }
    }

    return dp[n][target];
}

long long solve(int D, vector<int> &nums)
{
    long long total = accumulate(nums.begin(), nums.end(), 0LL);
    long long diff = llabs((long long)D);

    if (total < diff)
        return 0;

    long long needed = total - diff;
    if (needed % 2 != 0)
        return 0;

    long long target = needed / 2;
    return count_subsets(target, nums);
}

int main()
{
    vector<int> a = {5, 2, 6, 4};
    cout << solve(3, a) << '\n';
    return 0;
}