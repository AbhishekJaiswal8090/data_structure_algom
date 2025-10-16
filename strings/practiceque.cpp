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

void toLower(char word[],int m){
    for(int i=0; i<m; i++){
        char ch=word[i];
        if(ch >='a' && ch <='z'){
            continue;
        }else{
            word[i]=ch-'A' +'a';
        }
    }
}

int main()
{
    char word[9] = "Abhishek";
    toUpper(word,9 );
    cout<<word<<endl;
    toLower(word,9);
    cout<<word<<endl;
}