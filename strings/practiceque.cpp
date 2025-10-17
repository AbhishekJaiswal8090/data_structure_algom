#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// change to uppercase
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

// change to lowercase
void toLower(char word[], int m)
{
    for (int i = 0; i < m; i++)
    {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}

// Reverse a char array ==>brute force
void reverseAchar(char word[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int t = word[i];
        word[i] = word[n - i - 1];
        word[n - i - 1] = t;
    }
    cout << word << endl;
}
// optimized
void reversingChar(char word[], int n)
{

    if (n == 0)
        return;
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(word[start++], word[end--]);
    }
}

// valid palindrome
bool validPalindrome(char word[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (word[start] != word[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// another practice question

void smallletterVoweloccurence(string s)
{

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        }
    }
    cout << count << endl;
}

int main()
{
    // char word[9] = "Abhishek";
    // toUpper(word, 9);
    // cout << word << endl;
    // toLower(word, 9);
    // cout << word << endl;
    // // reverseAchar(word,8);
    // reversingChar(word, 8);
    // cout << word << endl;

    smallletterVoweloccurence("Abhishek");
}