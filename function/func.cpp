#include <iostream>
using namespace std;

// a function is a block of code which runs when it's called

void PrintName()
{
   cout << "Hello Bro \n";
}
void Assistant()
{
   PrintName();
   cout << "work finsihed :)\n";
}

int main()
{
   Assistant();
   return 0;
}
