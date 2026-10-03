#include <iostream>
using namespace std;

// multiple Recursion calls at the same time

// multiple recursion calls are needed when the problem naturally
// branches into multiple subproblems like
// tree problems in which for each node there are two sub nodes
// problems like fibonacci in which problem branches into two subproblems there wee need multiple rec calls

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int first = fib(n - 1);
    int second = fib(n - 2);

    return first + second;
}

int main()
{
    int n;
    cin >> n;
    int ans = fib(10);
    cout << ans << endl;
    return 0;
}



