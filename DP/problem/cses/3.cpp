#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007LL
// CSES COIN COMBINATION I
// here we are  trying all possible ways , order doesn't matter

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    vector<ll> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    vector<ll> dp(x + 1);
    dp[0] = 1;

    for (ll i = 1; i <= x; i++)
    {
        for (ll cn : c)
        {
            if (cn <= i)
                dp[i] = (dp[i] + dp[i - cn]) % mod;
        }
    }

    cout << dp[x] << endl;
}