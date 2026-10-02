#include <iostream>
using namespace std;

// Types of rec
// Recursion is divided into two types
// 1.Direct
// 2.Indirect

// Direct - >
// a. Head Recursion => function call at the begining
// b. Tail Recursion => function calls at the end
// c. Tree Recursion => multiple function call in single func
// d. Nested Recursion => func(func(b));

// Indirect - >
// in this recurson types the rec is connected with multiple other function
// ex = > rec(a) calls rec(b) && rec(b) calls rec(a);

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

// Functional rec => the functiona;l rec approach involves defining a recursion function
// without any additional parameters , the function calls itself with a modified argument untill it reches base case

int calculateSum(int n)
{
    if (n < 1)
        return 0;
    return n + calculateSum(n - 1);
}

int main()
{
}