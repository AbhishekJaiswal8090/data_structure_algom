#include <iostream>
#include <algorithm>

using namespace std;

void PrintSorted(char *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

void sortchar(char arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }

    PrintSorted(arr, n);
}

int main()
{
    char ch[7]={'z','s','a','f','r','e','u'};
    sortchar(ch,7);
}
