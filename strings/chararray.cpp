#include <iostream>
using namespace std;

// character arrays
// creation
int main()
{

    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;
    

    char str1[3]={'c','d','\0'};
    cout<<str1<<endl;

     char work[]="code"; //string literal
    cout<<work<<endl;
   
    // Input/output
    char word[10];
    cin>>word;

    cout<<"you word was "<<word<<endl;

    // input for whole paragraph
    // initially char array ignores the word after space character thats why we need
    // c.getline

    char sentence[50];
    cin.getline(sentence,50);

    cout<<"your sentence was"<<endl;


    
}