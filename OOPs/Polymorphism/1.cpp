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

// so this is how function ovcerloading works

// 2.Opeartor overloading
class Complex
{
public:
    int real, img;
    Complex(int n, int m)
    {
        real = n;
        img = m;
    }

    void showNum()
    {
        cout << real << " + " << img << "i" << endl;
    }

    // opeartor overloading
    void operator+(Complex &c2)
    {
        int realRes = this->real + c2.real;
        int imgRes = this->img + c2.img;
        Complex c3(realRes, imgRes);
        cout << "res= ";
        c3.showNum();
    }
};

int main()
{
    Print p1;
    p1.show(56);
    p1.show("abhi");

    Complex num1(1, 2);
    Complex num2(2, 4);
    num1.showNum();
    num2.showNum();

    // operator overloading
    num1 + num2;

    return 0;
}