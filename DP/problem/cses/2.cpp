#include <bits/stdc++.h>
using namespace std;

// CSES MINIMIZING COINS
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    const long long INF = 1e9;
    vector<long long> dp(x + 1, INF);
    dp[0] = 0;

    for (long long i = 1; i <= x; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (a[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }

    if (dp[x] < INF)
        cout << dp[x] << "\n";
    else
        cout << -1 << "\n";
}
