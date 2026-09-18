#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

// longest common substring (recursive)
int lcs(string str1, string str2, int i, int j, int count)
{
    if (i == 0 || j == 0)
    {
        return count;
    }

    if (str1[i - 1] == str2[j - 1])
    {
        return lcs(str1, str2, i - 1, j - 1, count + 1);
    }

    return max(count,
               max(lcs(str1, str2, i - 1, j, 0),
                   lcs(str1, str2, i, j - 1, 0)));
}

// DP SOlution

int lcsDP(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}

int main()
{
    string s1 = "abcde";
    string s2 = "abced";
    cout << lcs(s1, s2, s1.size(), s2.size(), 0) << endl;

    cout << lcsDP(s1, s2) << endl;
    return 0;
}