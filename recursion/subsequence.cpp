#include <bits/stdc++.h>
using namespace std;

void print_subsequence(int i, vector<int> &a, vector<int> &ans)
{
    int n = a.size();
    if (i >= n)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }

    ans.push_back(a[i]);
    print_subsequence(i + 1, a, ans);
    ans.pop_back();
    print_subsequence(i + 1, a, ans);
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
    vector<int> ans = {};

    print_subsequence(0, a, ans);
}