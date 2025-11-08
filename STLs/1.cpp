#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << "abhishek";
}

int sum(int a, int b)
{
    return a + b;
}

// Vectors
// vectors represents a dynamic sized array in standard template library
// that automatically grows when elements grows when elements are added beyond current capacity

void Vector()
{
    // declaration of an vector
    vector<int> v;

    // inititalising an vector
    v = {2, 4, 6, 8};

    // inserting into vector at the end
    v.push_back(10);

    // inserting at a specific position
    v.insert(v.begin() + 1, 0);

    // iterating over an vector
    for (auto num : v)
    {
        cout << num << ",";
    }
}

int main()
{
    int ans = sum(6, 7);
    cout << ans;

    Vector();
    return 0;
}