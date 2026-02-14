#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// SOLVING THE PROBLEM NEXT GREATER ELEMNT
// appraoch is simple starting form the lasst ellemnt push it to the stack
// and ccompare the top element of the stack to the current elelemnt of list
// if it is small pop the element else it would be answer for that particular list elelemnt
// and everuytime push the every el;ement to the stack
vector<int> NextGreaterElement(vector<int> &vec)
{
    int n = vec.size();
    vector<int> ans(n, -1);

    stack<int> s;
    s.push(vec[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= vec[i])
        {
            s.pop();
        }
        if (!s.empty())
        {

            ans[i] = (s.top());
        }
        s.push(vec[i]);
    }

    return ans;
}

int main()
{
    vector<int> vec = {2, 1, 0, 4, 5};
    vector<int> ans = NextGreaterElement(vec);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}