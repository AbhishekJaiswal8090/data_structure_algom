#include <iostream>
using namespace std;

// today we are going to study inheritance
// When properties and member functionbs of base class are passed onto the derived class
// in simple terms when characters of a parent gets into the child called Inheritance

// but in this programming context
// we are talking about classes and objects
// when a class basically parent which shares the attributes and method to the other class (derived class)
// is called inheritance
class Animal
{
public:
    string color;
    void eat()
    {
        cout << "Eats" << endl;
    }
    void breathe()
    {
        cout << "Breathing>> " << endl;
    }
};

class Fish : public Animal
{
public:
    int fins;
    void swims()
    {
        cout << "Swimming .." << endl;
    }
};

// MOde of inheritnace
// => Public
// => Private
//  => Protected

// => private parent methodds cannot be accessed by derived class
// but protected parents method and attributes can be inherit by the derived class

int main()
{
    Fish f1;
    cout << f1.fins << endl;
    f1.breathe();
    f1.eat();

    return 0;
}