#include <iostream>
#include <string>
using namespace std;

// checking if an array is sorted using recursion
bool isSorted(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return isSorted(arr, n, i + 1); // fixed here
}

// wap to find the first occurenec of an element in  a vector
int findOccurence(int arr[], int n, int i, int target)
{

    if (i == n - 1)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }

    return findOccurence(arr, n, i + 1, target);
}

// wap to find the last occurenec of an element in  a vector

int lastoccurenec(int arr[], int n, int i, int target)
{
    if (i == 0)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }
    return lastoccurenec(arr, n, i - 1, target);
}

// print x to the power n
int PrintX(int x, int n, int i)
{

    if (i == n)
    {
        cout << x;
        return 0;
    }
    return x * PrintX(x, n, i + 1);
}

// Binary striings problem
void binString(int n, int lastplace, string ans)
{

    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (lastplace != 1)
    {
        binString(n - 1, 0, ans + '0');
        binString(n - 1, 1, ans + '1');
    }
    else
    {
        binString(n - 1, 0, ans + '0');
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    cout << isSorted(arr, 5, 0) << endl; // Output: 1 (true)

    int arr1[5] = {0, 6, 2, 5, 7};
    cout << isSorted(arr1, 5, 0) << endl; // Output: 0 (false)

    int idx = findOccurence(arr, 5, 0, 8);
    cout << idx;
    cout << endl;

    int lastidx = lastoccurenec(arr, 5, 4, 4);
    cout << lastidx;
    cout << endl;
    std::string ans;
    binString(3, 0, ans);

    return 0;
}