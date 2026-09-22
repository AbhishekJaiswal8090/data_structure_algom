#include <bits/stdc++.h>
using namespace std;
string s1;
string s2;

// CSES EDIT DISTANCE

int solve(int i, int j, int n, int m)
{
    // recursive

    if (i < 0)
    {
        return j + 1;
    }
    if (j < 0)
    {
        return i + 1;
    }

    if (s1[i] == s2[j])
    {
        return solve(i - 1, j - 1, n, m);
    }
    else
    {
        return 1 + min(
                       solve(i, j - 1, n, m),
                       min(solve(i - 1, j, n, m), solve(i - 1, j - 1, n, m)));
    }
}

int solve2()
{

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
            }
        }
    }
    return dp[n][m];
}

int main()
{

    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();

    int ans = solve2();
    cout << ans << endl;
}