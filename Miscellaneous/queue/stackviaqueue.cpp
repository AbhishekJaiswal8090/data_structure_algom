#include <iostream>
#include <queue>
using namespace std;

// #stack using two queues
// the process is the same as the implementing queue using 2 stack;
class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int ele)
    {
        while (!q1.empty())
        {
            int data = q1.front();
            q1.pop();
            q2.push(data);
        }
        q1.push(ele);
        while (!q2.empty())
        {
            int data = q2.front();
            q1.push(data);
            q2.pop();
        }
    }
    int pop()
    {
        int res = q1.front();
        q1.pop();
        return res;
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main()
{
    Stack s1;
    s1.push(120);
    s1.push(30);
}