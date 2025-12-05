#include <iostream>
#include <vector>
using namespace std;

// Backtracking

// usually backtracking cosist of three types of problems
// Decision
// Opimization
// Enumeration

void PrintArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

void changeArr(vector<int> &arr, int i, int n)
{
    if (i == n)
    {
        PrintArr(arr, n);
        return;
    }

    arr[i] = i + 1;
    changeArr(arr, i + 1, n); // recurse to next index
    arr[i] -= 2;              // restore previous value (backtrack)
}

int main()
{

    // backtracking on arrays
    vector<int> arr = {1, 2, 3, 4, 5};
    changeArr(arr, 0, 5);
    PrintArr(arr, 5);
    return 0;
}