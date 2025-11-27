#include <iostream>
using namespace std;

// Types of Inheritance
// Single inheritance
// which consist of a single base class and derived class

// Parent class
class Animal
{
public:
    void sound(string s)
    {
        cout << "this animal produces sound of" << s << endl;
    }

    void eat(string food)
    {
        cout << "This animal eats this food" << food << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    string n;
    void name(string n)
    {
        cout << "My name is " << n << endl;
    }
};

int main()
{

    Dog d1;
    d1.name("Tony");
    d1.eat("fish");
    d1.sound("bhau-bhau");

    return 0;
}