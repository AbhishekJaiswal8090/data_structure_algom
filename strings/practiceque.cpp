#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            word[i] = ch - 'a' + 'A';
        }
       
    }
}

int main()
{
    char word[9] = "Abhishek";
    toUpper(word,9 );
    cout<<word<<endl;
}