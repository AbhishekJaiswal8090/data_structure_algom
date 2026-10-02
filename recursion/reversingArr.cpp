#include <iostream>
#include <vector>

using namespace std;

// reversing an array uaing recursion
void reverseArr(int l, int r, vector<int> &arr)
{
    if (l >= r)
    {
        return;
    }

    swap(arr[l], arr[r]);
    reverseArr(l + 1, r - 1, arr);
}

// using single pointer

void revreseArrOnePointer(int i, vector<int> &arr)
{
    int n = arr.size();
    if (i >= (int)n / 2)
        return;
    int curr = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = curr;
    revreseArrOnePointer(i + 1, arr);
}

// checking for the palindrome recursively

bool isPalindrome(string s, int i)
{

    int n = s.size();

    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] == s[n - i - 1])
    {
        return isPalindrome(s, i + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
}