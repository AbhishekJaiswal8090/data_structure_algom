#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> factors(int n)
{
    vector<int> ans;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i != n / i)
            {
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}

void gcd_bruteforce(int a, int b)
{
    vector<int> fact1 = factors(a);
    vector<int> fact2 = factors(b);
    vector<int> commonfact;

    for (int f : fact1)
    {
        if (find(fact2.begin(), fact2.end(), f) != fact2.end())
        {
            commonfact.push_back(f);
        }
    }

    sort(commonfact.begin(), commonfact.end());
    cout << "GCD of " << a << " and " << b << " is: " << commonfact.back() << endl;
}

int main()
{
    gcd_bruteforce(20, 30);
    return 0;
}
