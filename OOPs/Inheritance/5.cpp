#include <iostream>
using namespace std;

// Now we study Hierarchial inheritance
// a inheritance in which w have single base class while we have multiple derived class

class Animal
{
public:
    void eat()
    {
        cout << "i can eat" << endl;
    }
    void Breathe()
    {
        cout << "I can brethe" << endl;
    }
};

class Bird : public Animal
{
public:
    void Fly()
    {
        cout << "I can fly" << endl;
    }
};

class Mammal : public Animal
{
public:
    void walk()
    {
        cout << "I can walk" << endl;
    }
};

int main()
{
    Mammal m1;
    m1.Breathe();
    m1.eat();
    m1.walk();
}