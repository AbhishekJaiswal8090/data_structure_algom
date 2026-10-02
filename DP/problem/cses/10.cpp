#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int m)
{
    int n = a.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            int not_cut = dp[i - 1][j];

            int cut = -1;
            if (j >= a[i - 1] && dp[i][j - a[i - 1]] != -1)
            {
                cut = 1 + dp[i][j - a[i - 1]];
            }

            dp[i][j] = max(not_cut, cut);
        }
    }
    return dp[n][m];
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int ans = solve(a, n);
    cout << ans << endl;
    return 0;
}
