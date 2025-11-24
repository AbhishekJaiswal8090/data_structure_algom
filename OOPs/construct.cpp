#include <iostream>
#include <string>
using namespace std;

// Constructor in cpp

class Car
{
private:
    string name;
    string color;

public:
    Car(string n, string c)
    {
        name = n;
        color = c;
    }
    void Start()
    {
        cout << "Car has started " << endl;
    }

    void IncreaseSpeed(int speed)
    {
        cout << "Your car running at " << speed << " km/h" << endl;
    }
    void Stop()
    {
        cout << "Car has stopped" << endl;
    }
};

// constructors are basically three types
// => parametrized
// those constructurs which accepts paramter bassed during creating objects
class Student
{
public:
    int age;
    Student(int a)
    { // Parameterized constructor
        age = a;
        cout << "Parameterized constructor called, age = " << age << endl;
    }
};

// => non parameterized
// those constructors which executes even without parametr are basically known as
// non paramterised
class Student
{
public:
    int age;
    Student()
    { // Default constructor
        age = 18;
        cout << "Default constructor called, age = " << age << endl;
    }
};

// => Copy constructor
int main()
{
    Car car1("tata safari", "black");
    // when we create the object the constructure is being called explicitily
    // it doesn't have any return type
    // mostly used for assigning value
    car1.Start();
    car1.IncreaseSpeed(100);
}