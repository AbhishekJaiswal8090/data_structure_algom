#include <iostream>
using namespace std;

// recursion
// when a function repeatedly call itself

// a function with no base case
void func()
{
    cout << "function call works";
    func();
}

void printArr(int arr[], int n, int i)
{

    cout << arr[i] << ",";
    return printArr(arr, 5, i++);
}


int main()
{

    // func();
    int i = 0;
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;
    printArr(arr, 5, i);

    return 0;
}