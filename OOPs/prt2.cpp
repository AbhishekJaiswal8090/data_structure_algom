#include <iostream>
using namespace std;

// Access Modifierss
// it lets you set the scope of an variable
// it helps in encapsulation means we could hide something from something
// also we can let then see what we want this is simplemented by acces modifier
// theser are basically keywords

class Student
{
public:
    string name;
    string lastname;
    void Set(string name, string lastname)
    {
        name = name;
        lastname = lastname;
    }
    void PrintName()
    {
        cout << name << endl;
        cout << lastname << endl;
    }
};

// by default every variable in class is Protected means you can not acces it outside of class

int main()
{
    Student std1;
    std1.Set("Abhishek", "Jaiwwal");
    std1.PrintName();
}