#include <iostream>
using namespace std;

// converting binary num into decimal

int BinaryToDec(int bin)
{
    int n = bin;
    int pow = 1;
    int decimalnum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        decimalnum = decimalnum + (last_digit * pow);
        pow = pow * 2;
        n = n / 10;
    }
    return decimalnum;
}

// converting decimal into binary

int DecimalToBin(int dec)
{
    int n = dec;
    int bin = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        bin += (pow * rem);
        pow = pow * 10;
        n = n / 2;
    }
    return bin;
}

int main()
{

    cout << BinaryToDec(101) << endl;
    cout << DecimalToBin(10) << endl;
}