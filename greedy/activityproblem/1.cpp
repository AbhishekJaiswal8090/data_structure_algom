#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Activity selection
// Select the max no of activities that can be perforemed
// by a single person (a person can work on one activity at a time)

int main()
{
    int na; // number of activites
    cin >> na;

    vector<pair<int, int>> activity(na);
    for (int i = 0; i < na; i++)
    {
        cin >> activity[i].first >> activity[i].second;
    }

    // after than we will sort the given activity based on finish time
    // because finishing early leaves you more space for more activity

    vector<pair<int, int>> a(an);
    for (int i = 0; i < an; i++)
    {
        a[i].first = activity[i].second;
        a[i].second = activity[i].first;
    }

    sort(a.begin(), a.end());

    int lastfinish = 0;
    vector<pair<int>> ans;
    for (int i = 0; i < an; i++)
    {
        if (a[i].first > lastfinish)
        {
            ans.push_back({a[i].second, a[i].first});
            lastfinish = a[i].first;
        }
    }

    cout << "Total maximum activity: " << ans.size() << endl;
}