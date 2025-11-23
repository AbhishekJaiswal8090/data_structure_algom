#include <iostream>
#include <string>
using namespace std;

// in today class we are going to learn all the concepts of ooops and thier implementaation
// so lets start Object Oriented Programming
// oops is not a pattern but a style of programming
// it reopresent real world object entities

// often objects have some properties and function
// objects are well known as blueprint of classes
// object are like entities of real world

class Student
{
    // properties
    string name;
    int rollno;
    float sgpa;

    void getPercentage()
    {
        cout << (sgpa * 10) << endl;
    }

};

class User
{
    string username;
    string password;
    string bio;
    string newBio;

    void Deactivate()
    {
        cout << "Deleting account" << endl;
    }

    void EditBio()
    {
        bio = newBio;
    }
};

int main(){
    User user1;
    Student std1;
    // these are nothing but the objects 
    // in other words these are blueprint of class 
    // which store some val and perform some task just like real world entities

}