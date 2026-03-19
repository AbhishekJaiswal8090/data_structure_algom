#include <iostream>
using namespace std;

// basics of chars and strings
int main()
{
    char ch1 = 'a';
    char ch2 = 'b';
    char ch3 = 'X';
    char ch4 = '3';
    char ch5 = '\n';

    // ascii val
    cout << (int)ch2 << endl;

    //    to find out the position of any particulaar alphbet
    int pos = ch3 - 'A';
    cout << pos << endl;

    
    return 0;
}
