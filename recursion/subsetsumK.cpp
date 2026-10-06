#include <bits/stdc++.h>
using namespace std;

void Helper(int i, int n, vector<int> &a, int sum, int currsum, vector<int> &b)
{
    if (i == n)
    {
        if (currsum == sum)
        {
            for (int x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            return;
        }
        return;
    }

    currsum += a[i];
    b.push_back(a[i]);
    Helper(i + 1, n, a, sum, currsum, b);
    currsum -= a[i];
    b.pop_back();
    Helper(i + 1, n, a, sum, currsum, b);
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

    int sum;
    cin >> sum;
    vector<int> b;
    Helper(0, a.size(), a, sum, 0, b);
}