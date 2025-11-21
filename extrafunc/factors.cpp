#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// calculating factors of a number
// brute forces
void factors(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            cout << i << ",";
        }
    }
    cout << endl;
}

// lets optimize it

void factorsOFanumber(int n)
{
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
        }
        if (i != n / i)
        {
            cout << n / i << ",";
        }
    }
}
int main()
{

    factors(36);

    factorsOFanumber(36);

    return 0;
}