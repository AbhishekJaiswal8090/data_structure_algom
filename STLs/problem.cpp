#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// The stock span problems asks for the num of consecutive days
// in which the stock price was below or less than that of the stock

// So our appproach is way more simple this is just brute force solving in o(n^2)
// we are simply making an pointer points to the last one and other pointer we used for tarversing all the rest
// and all those consecurtive elelments which are less are counted by counter thats it

vector<int> stockSpanProblem(vector<int> &vec)
{
    int n = vec.size();
    vector<int> ans;
    // Two pointer trechniques
    for (int i = n - 1; i >= 0; i--)
    {
        int count = 0; // count num of consecutive elements less or equal to that elelemnts
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
    // original array
    vector<int> vec = {100, 80, 60, 70, 60, 85, 100};
    // ans array
    vector<int> ans = stockSpanProblem(vec);
    // reversing it for the ans correctness because we are pushing counter elements form the front but starting from the last
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