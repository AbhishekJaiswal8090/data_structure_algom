#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long product = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        product *= x;
    }

    long long last_digit = product % 10;

    if (last_digit == 2 || last_digit == 3 || last_digit == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NOPe" << endl;
    }
    return 0;
}