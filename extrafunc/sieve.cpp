#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Sieve of eratosthanes
// this algom is widely used for printitng prime number upto n;
// instead of visiting every single element and checking if it is prime and printing it
// we use sieve algom in ordere to reduce time complexity from n^2 to nloglogn
// we use an list size of n
// heres the complete process

vector<bool> sieve(int n)
{
    if (n < 2)
        return {};
    vector<bool> arr(n + 1, true);
    for (int i = 2; i <= n; ++i)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (arr[j])
                {
                    arr[j] = false;
                }
            }
        }
    }

    return arr;
}

int main()
{
    int n = 100;
    vector<bool> primes = sieve(n);
    for (int i = 2; i <= n; ++i)
    {
        if (primes[i])
            cout << i << ",";
    }

    cout << '\n';
    return 0;
}