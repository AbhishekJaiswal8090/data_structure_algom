#include <iostream>
using namespace std;

// Polymorphism
// Polymorphism is the ability of objects to take on different forms or behave in different
// ways depending on context in which they are used

// polymorphism are of two types
// Compile Time Polymorphism
// run time polymorphiism

// Compile time polymorphism
// 1. Function overloading => we have multiple methods of same name but with different parameter type
// 2.Opeartor overloading =>

class Print
{
public:
    void show(int str)
    {
        cout << "int :" << str << endl;
    }
    void show(string str)
    {
        cout << "string :" << str << endl;
    }
};

int main()
{
    Print p1;
    p1.show(56);
    p1.show("abhi");

    return 0;
}