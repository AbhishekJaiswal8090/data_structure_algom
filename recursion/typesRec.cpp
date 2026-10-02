#include <iostream>
using namespace std;

// Types of rec
// 1. Parameterised rec => it involves passing additional parameters to the recursion
// to keep track the specifc condition / statement

// example
// imagine we wants to find out the sum of N numbers let do it using rec

int returnSum(int n, int sum)
{
    // we are keeping track n here that when our n becomes less than 1 return sum;
    if (n < 1)
    {
        return sum;
    }

    return returnSum(n - 1, sum + n);
} // this is called parameterised rec

int main()
{
}