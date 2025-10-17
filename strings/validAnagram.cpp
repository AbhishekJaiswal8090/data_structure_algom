#include <iostream>
#include <string>
using namespace std;

bool Validanagram(string s, string t)
{
    if (s.size() != t.size())
        cout << "not valid anagram";
    return false;

    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int idx = s[i] - 'a';
        count[idx]++;
    }
    for (int j = 0; j < t.size(); j++)
    {
        int idx = t[j] - 'a';
        count[idx]--;
    }

    for (int k = 0; k < 26; k++)
    {
        if (count[k] != 0)
        {
            return false;
        }
    }
    cout << "valid anagram" << endl;
    return true;
}

int main()
{
    string s = "hello";
    string t = "llohei";
    Validanagram(s, t);
}