#include <iostream>
using namespace std;

// Multi level INheritance
// Base class = > Derived class  => Derived class
class Animal
{
public:
    void eat()
    {
        cout << "This animal eats food" << endl;
    }
};

class Mammal : public Animal
{
public:
    void BloodType()
    {
        cout << "I am warm blooded" << endl;
    }
};

class Dog : public Mammal
{
public:
    string name;
    Dog(string n)
    {
        name = n;
    }
    void Name()
    {
        cout << "  My name is " << name << endl;
    }
};
int main()
{
    Dog D1("tONY");
    D1.BloodType();
    D1.eat();
    D1.Name();
}