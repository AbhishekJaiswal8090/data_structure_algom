#include <iostream>
using namespace std;

// Virtual function in c++
// A virtual function is a member function that you expect to be redefined in derived class

class Parent
{
public:
    void show()
    {
        cout << "Parent class..";
    }

    virtual void Hello()
    {
        cout << "Hello i am being redefined in derived class";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class ..";
    }
    void Hello()
    {
        cout << "helloe from child class";
    }
};

int main()
{
    Child child1;
    Parent *ptr; // a pointr point to the parent class

    ptr = &child1; // runtime binding , now the pointer is bind to the child class and will execute the child class function

    ptr->Hello(); // virtual function
    return 0;
}