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

    // Access any element at any position
    cout << v.at(0) << endl;
    cout << v[3] << endl;

    // updtae any particular value
    v[3] = 56;
    cout << v[3] << endl;

    // find vector length
    int n = v.size();
    cout << n << endl;

    // vector can store amy typoe of avlue
    vector<char> str;
    str = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }

    // deletinf the last elemnt
    str.pop_back();

    // deleting any partiuclar elemrnt
    str.erase(find(str.begin(), str.end(), 'a'));

    // cehecking if an vector is epmpty
    cout << v.empty() << endl;
}

int main()
{
    int ans = sum(6, 7);
    cout << ans;

    Vector();
    return 0;
}