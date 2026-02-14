#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpanProblem(vector<int> &vec)
{
    int n = vec.size();
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        int count = 0;
        int j = i;
        while (j >= 0 && vec[j] <= vec[i])
        {
            count++;
            j--;
        }
        ans.push_back(count);
    }
    return ans;
}

int main()
{
    vector<int> vec = {100, 80, 60, 70, 60, 85, 100};
    vector<int> ans = stockSpanProblem(vec);
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}