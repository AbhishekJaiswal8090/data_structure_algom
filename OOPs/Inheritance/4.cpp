#include <iostream>
using namespace std;

// Multiple inheritance
class Teacher
{
public:
    int salary;
    int sub;
};

class Student
{
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student
{
public:
    string name;
};

int main()
{
    TA ta1;
    ta1.name = "Abhishek";
    ta1.cgpa = 7.5;
    ta1.rollno = 230268;
    ta1.salary = 56098;
    cout << ta1.name << endl;
}