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
    cout<<endl<<getPos(7,1);

    return 0;
}