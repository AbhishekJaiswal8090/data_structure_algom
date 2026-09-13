#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
// Dice Combination CSES

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> dp(1000001);
    dp[0] = 1;
    for (long long i = 1; i <= 1000000; i++)
    {
        for (long long j = 1; j <= 6; j++)
        {
            if (i >= j)
                dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    long long n;
    cin >> n;
    cout << dp[n] << endl;
}