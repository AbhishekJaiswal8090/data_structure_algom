#include <iostream>
#include <queue>
using namespace std;

void NonRepeating(string s)
{
    int freq[26] = {0};
    queue<pair<char, int>> q;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        q.push({s[i], i});

        while (!q.empty() && freq[q.front().first - 'a'] > 1)
        {
            q.pop();
        }
    }

    if (!q.empty())
        cout << q.front().first;
    else
        cout << "No repeating character";
}

int main()
{
    string s = "pprrw";
    NonRepeating(s);
}
