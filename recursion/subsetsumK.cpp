#include <bits/stdc++.h>
using namespace std;

void Helper(int i, int n, vector<int> &a, int sum, int currsum, vector<int> &b)
{
    // this function print all possible subsequences that results in equal to sum if added
    // what we are doing here is simple
    // picking and not picking
    // and if picked add it to sum and add this ele to our ansewer list
    // if not picked reduce the sum by this element and popback our last element that we pushed
    // and call for the next element
    // this is simple backtracking
    if (i == n)
    {
        if (currsum == sum)
        {
            for (int x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            return;
        }
        return;
    }

    currsum += a[i];
    b.push_back(a[i]);
    Helper(i + 1, n, a, sum, currsum, b);
    currsum -= a[i];
    b.pop_back();
    Helper(i + 1, n, a, sum, currsum, b);
}

// lets write a function that print just a single subsequence not every possible but just one
// as soon as we find it we do not want to proceed furtherr

bool solve2(int i, int n, vector<int> &a, int sum, int currsum, vector<int> &b)
{
    if (i == n)
    {
        // here as soon as we found our elemtnts print it and return true
        if (currsum == sum)
        {
            for (int x : b)
            {
                cout << b << " ";
            }
            return true;
        }
        return false;
    }
    currsum += a[i];
    b.push_back(a[i]);
    if (solve2(i, n, a, sum, currsum, b))
    {
        // this function call return true if and only if we fouond our subsequece
        // and once we found it there no need to proceeding further we will return from here
        return true;
    }

    currsum -= a[i];
    b.pop_back();
    if (solve2(i, n, a, sum, currsum, b))
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum;
    cin >> sum;
    vector<int> b;
    Helper(0, a.size(), a, sum, 0, b);
}