#include <iostream>
using namespace std;

// euclid algom for calcualting gcd of two numbers
// best and fully optimized
// with time complexity of log(b)

int EuclideAlgo(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    EuclideAlgo(b, a % b);
}

// Pseudo Code of the Algorithm-
// Step 1: Let a, b be the two numbers
// Step 2: a mod b = R
// Step 3: Let a = b and b = R
// Step 4: Repeat Steps 2 and 3 until a mod b is greater than 0
// Step 5: GCD = b
// Step 6: Finish

int main()
{

    int and = EuclideAlgo(40, 45);
    cout << and << endl;
}

// in case of calculating more than two numbers what we would fo is
// simple firts calculate gcd of firts two number and then find gcd of this ans with the other third number and so on
// end;