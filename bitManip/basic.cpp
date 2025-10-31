#include <iostream>
using namespace std;

int main()
{
  // bit manipulation in cpp
  // bitwise AND & => 0 & 1 => False (0)
  // 1 & 0 => False (0)
  cout << (3 & 5) << endl; // results in (1)
  cout << (5 & 5) << endl;

  // bitwise OR  || => anyone is true evrything is true
  // false if both values are false
  // same goes with numbers if the one is 1 otthers answer is one (1)
  // and if both are zeroes then the value becomes zero (0) \

  cout << (3 || 5) << endl;
  cout << (5 & 5) << endl;

  // one's complement
  // => binary not operator (~) TILD opeartor
  cout << (~6) << endl;
  cout << (~0) << endl;

  // Binary Shift Operators

  cout << (7 << 2) << endl; // (<<)left shift ,(>>)right shift
  cout << (7 >> 2) << endl;

  return 0;
}