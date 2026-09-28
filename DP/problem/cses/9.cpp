#include <bits/stdc++.h>
using namespace std;

// money sum CSES
// recursive soln
void solve_2(int sum, int n, vector<int> &a, set<int> &st, int idx)
{
    if (idx < 0)
    {
        st.insert(sum);
        return;
    }

    solve_2(sum, n, a, st, idx - 1);

    solve_2(sum + a[idx], n, a, st, idx - 1);
}

void solve(int n, vector<int> &a)
{

    set<int> st;
    solve_2(0, n, a, st, n - 1);
    cout << st.size() - 1 << endl;
    for (auto x : st)
    {
        if (x == 0)
            continue;
        cout << x << " ";
    }
    cout << endl;
}

// tabular soln

void solve3(int n, vector<int> &a)
{
    long max_sum = accumulate(a.begin(), a.end(), 0LL);
    sort(a.begin(), a.end());

    vector<vector<bool>> dp(n + 1, vector<bool>(max_sum + 1, false));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= max_sum; j++)
        {
            bool can_t = dp[i - 1][j];
            bool can = false;
            if (j >= a[i - 1])
            {
                can = dp[i - 1][j - a[i - 1]];
            }
            dp[i][j] = can_t || can;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= max_sum; i++)
    {
        if (dp[n][i])
        {
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    solve3(n, a);
}