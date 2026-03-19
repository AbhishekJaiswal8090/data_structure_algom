#include <iostream>
#include<string>
using namespace std;

char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string s;
        cin >> s;

        if (s.size() == 0)
        {
            break;
        }
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            ans += upper(s[i]);
        }

        cout << ans << endl;
    }
}