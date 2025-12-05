#include <iostream>
#include <string>

using namespace std;

// Generating all possible subsets of a string
// uisng backtracking

void subset(string str, string ans)
{
    // base case

    if (str.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];

    subset(str.substr(1, str.size() - 1), ans + ch); // yS
    subset(str.substr(1, str.size() - 1), ans);      // no
}

int main()
{
    subset("abc", "");
}