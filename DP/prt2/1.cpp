#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Longest common subsequence

// Recursive soln
int lcs(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();

    if (n == 0 || m == 0)
    {
        return 0;
    }

    if (str1[n - 1] == str2[m - 1])
    {
        return 1 + lcs(str1.substr(0, n - 1), str2.substr(0, m - 1));
    }
    else
    {
        return max(lcs(str1.substr(0, n - 1), str2), lcs(str1, str2.substr(0, m - 1)));
    }
}

// Memoized
int lcsMemo(string str1, string str2, vector<vector<int>> &memo)
{
    int n = str1.size();
    int m = str2.size();

    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (memo[n][m] != -1)
    {
        return memo[n][m];
    }

    if (str1[n - 1] == str2[m - 1])
    {
        memo[n][m] = 1 + lcs(str1.substr(0, n - 1), str2.substr(0, m - 1));
    }
    else
    {
        memo[n][m] = max(lcs(str1.substr(0, n - 1), str2), lcs(str1, str2.substr(0, m - 1)));
    }
    return memo[n][m];
}

// DP solution

int lcsDp(string str1, string str2, vector<vector<int>> &dp)
{
    int n = str1.size();
    int m = str2.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (str1[i - 1] == str2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string str1 = "abce";
    string str2 = "abec";
    cout << lcs(str1, str2) << endl;
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));
    lcsMemo(str1, str2, memo);
    cout << memo[n][m] << endl;

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    cout << lcsDp(str1, str2, dp);
}