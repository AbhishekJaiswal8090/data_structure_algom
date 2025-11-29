#include <iostream>
using namespace std;

// runtime polymorphism = >
// Function overriding

// Parent and child both contain the same function with different implementation
// THe parent class function is said to be overriden

class Parent
{
public:
    void show()
    {
        cout << "parent clas show..";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "child class show..";
    }
};

int main()
{
    Child child1;
    child1.show();
}