#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// stack implementation using vector
class Stackk
{
public:
    vector<int> vec;
    void push(int element)
    {
        vec.push_back(element);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        vec.pop_back();
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty " << endl;
            return 0;
        }
        int lstIdx = vec.size() - 1;
        return vec[lstIdx];
    }
    bool isEmpty()
    {
        return vec.size() == 0;
    }
}

// insertion in stack at the bottom

// Insert element at bottom of stack using recursuion
void pushFunc(int element, stack<int> &mystack)
{
    if (mystack.empty())
    {
        mystack.push(element);
        return;
    }
    int el = mystack.top();
    mystack.pop();
    pushFunc(element, mystack);
    mystack.push(el);
}
// reversing an string using stack
void reverseString()
{
    stack<char> mystack;
    string s = "ABHISHEK";
    for (char c : s)
    {
        mystack.push(c);
    }
    string ans = "";
    while (!mystack.empty())
    {
        char temp = mystack.top();
        ans += temp;
        mystack.pop();
    }
    cout << ans << endl;
}