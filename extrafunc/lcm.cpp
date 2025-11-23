#include <iostream>
using namespace std;
// here we are going to find out the lcm of any two numbers
// we are going to use euclide algom for this calculation

// since we know that product of any two number is equal to the product of lcm and gcd of that two  number
// so we are going to us this
// lcm = product of numbers / gcd of two numbers

int EuclidAlgom(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    EuclidAlgom(b, a % b);
}

int lcm(int a, int b)
{
    int mul = a * b;
    int gcd = EuclidAlgom(a, b);
    int lcmnum = (mul / gcd);

    return lcmnum;
}
int main()
{
    int lcmans = lcm(30, 20);
    cout << lcmans << endl;
}