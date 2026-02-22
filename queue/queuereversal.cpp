#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Queue REversal

// we will use s stack in ordrer to reverse an queue

void QueueReversal(queue<int> &q)
{
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(97);
    q.push(60);

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
}