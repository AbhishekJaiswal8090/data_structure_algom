#include <iostream>
#include <string> // ADD THIS
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

    void Set(string n, string l) // Rename parameters to avoid shadowing
    {
        name = n;
        lastname = l;
    }

    void PrintName()
    {
        cout << name << endl;
        cout << lastname << endl;
    }
};

// by default every variable in class is Protected means you can not acces it outside of class

// getters and setters
class Employees
{
    string name;
    string lastname;

public:
    // setters
    void setName(string n)
    {
        name = n;
    }

    void setLastname(string l)
    {
        lastname = l;
    }

    // getters
    void Displayname()
    {
        cout << name << " " << lastname << endl;
    }
};

int main()
{
    Student std1;
    std1.Set("Abhishek", "Jaiswal");
    std1.PrintName();

    Employees emp1;
    emp1.setName("akash");
    emp1.setLastname("jaiswal");
    emp1.Displayname();
    return 0;
}