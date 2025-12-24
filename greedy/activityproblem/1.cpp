#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int na;
    cin >> na;

    vector<pair<int, int>> activity(na);
    for (int i = 0; i < na; i++)
    {
        cin >> activity[i].first >> activity[i].second; // start, finish
    }

    // Sort by finish time
    sort(activity.begin(), activity.end(),
         [](auto &a, auto &b)
         { return a.second < b.second; });

    int lastfinish = -1;
    vector<pair<int, int>> ans;

    for (int i = 0; i < na; i++)
    {
        if (activity[i].first > lastfinish)
        {
            ans.push_back(activity[i]);
            lastfinish = activity[i].second;
        }
    }

    cout << "Total maximum activity: " << ans.size() << endl;
    for (auto &act : ans)
    {
        cout << act.first << " " << act.second << endl;
    }
}
