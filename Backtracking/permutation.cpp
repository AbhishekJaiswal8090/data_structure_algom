#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// NOw we are going to see the generating permutation using baktracking
// find and print all permuation / arrangements of a given string
// num of permuation is always equals to n! where n is number of elements

// suppose we have a string abc and we want to generate all possible substring
// so by looking at string we can see that for each of the index we have num of elements choice = 3;(size may differ as we move to the solution)
// so lets write a code

void Permutation(string str, string ans)
{
    int n = str.size(); // num of choices we have
    if (n == 0)
    {
        cout << ans << endl;
        return; // base case
    }

    for (int i = 0; i < n; i++)
    { // for each choice we generate our ans string ans decrease the original string
        char ch = str[i];
        string Nextstr = str.substr(0, i) + str.substr(i + 1, n - i - 1); // deleting the choice char that we made for current ans from original string
        Permutation(Nextstr, ans + ch);
    }
}

int main()
{
    string str = "abcde";
    string ans = "";

    Permutation(str, ans);
}