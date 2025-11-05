#include <iostream>
using namespace std;

// recursion
// when a function repeatedly call itself

// a function with no base case
// void func()
// {
//     cout << "function call works";
//     func();
// }

// void printArr(int arr[], int n, int i)
// {

//     cout << arr[i] << ",";
//     return printArr(arr, 5, i++);
// }

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// it is a method of solving computational problems where the solution
// depends on solution to smaller instances of the same problems

// => Base Case is the most important in order to know wehen to stop the loop

// printing elements in decreasing oredre

void PrintNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << ",";
    PrintNum(n - 1);
}

// sum of all natural numbers
int sumNaturalnumber(int n)
{
    int sum = sum + n;
    if (n == 1)
    {
        return 1;
    }
    return n + sumNaturalnumber(n - 1);
}

int fibnoacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibnoacci(n - 1) + fibnoacci(n - 2);
}

int main()
{

    // // func();
    // int i = 0;
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;
    // printArr(arr, 5, i);
    int ans = factorial(5);
    cout << ans << endl;
    PrintNum(10);

    cout << endl;

    // stack overflow
    // => stack overflow is a state in which the stack  continues to allocate memoery
    // for a task that doesn't end
    // and in the end we get segmentation fault and our stack in memory get fully filled

    int ans1 = sumNaturalnumber(5);
    cout << ans1;

    cout << endl;
    int ans2 = fibnoacci(3);
    cout << ans2;
    return 0;
}