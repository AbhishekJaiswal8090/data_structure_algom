#include <iostream>
using namespace std;

// PRACTICE QUESTIONS
void oddOrEven(int n)
{
    if (!(n & 1))
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "odd number" << endl;
    }
}

int getPos(int n, int i)
{
    int bitmask = (1 << i);
    if (!(n & bitmask))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void setPos(int n, int i)
{
    int bitmask = 1 << i;
    cout << endl
         << (n | bitmask);
}

void clearPos(int n, int i)
{
    int bitmask = ~(1 << i);
    cout << (n & bitmask) << endl;
}

bool checkPowertwo(int n)
{
    if (!(n & (n - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void setBitPos(int n, int i, int val)
{
    n = n & ~(1 << i);
    n = n | (val << i);
    cout << n << endl;
}

void clearBit(int n, int i)
{
    int bitmask = ((~0) >> i);

    cout << (n & bitmask) << endl;
}

int main()
{

    // PREDICT THE OUTPUT FOR ~4

    // BIN FOR -> 00000100 NEAGTING IT BECOMES 11111011 AND THEN
    // 1'S COMP BECOMES 0000100 +1  == 0000101 AND THE MSB DETREMINES NUM IS NEGATIVE
    // SO THE ANSWER WILL BE -5
    cout << (~4) << endl;

    // PREDICT THE OUTPUT FOR 8 >> 1
    // 00001000 >> `1 BECOMES => 00000100
    cout << (8 >> 1) << endl;

    // CEHCK IF NUMS IS ODD OR EVEN
    // USING BIT MANIPULATION
    oddOrEven(67); // odd
    oddOrEven(8);

    // GET iTH BIT
    // 1<<i and then take and with bitmask and num
    cout << endl
         << getPos(7, 1);

    //  SET Ith position  => setting ith position to the 1 if it is zero and remains 1 if it is one
    // 1<<i and then take OR eith bitmask and n
    setPos(2, 0);

    cout << endl;

    // clear the ith BIT => setting the ith postion to zero if it is one and remains zero if it is zero
    clearPos(6, 1);

    // check for power of 2
    checkPowertwo(5);

    // setting a particular bit to a partivcular position
    setBitPos(2, 1, 1);

    // clearing the i bits to a prticular number
    clearBit(6, 1);

    return 0;
}