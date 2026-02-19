#include <iosteram>
#include <stack>
using namespace std;

// in this lecture wew are going to study implementing queue using two stack;

class Queue
{

    stack<int> s1;
    stack<int> s2;

public:
    void push(int ele)
    {
        while (!s1.empty())
        {
            int data = s1.top();
            s1.pop();
            s2.push(data);
        }
        s1.push(ele);
        while (!s2.empty())
        {
            int data = s2.top();
            s1.push(data);
            s2.pop();
        }
    }
    int pop()
    {
        int res = s1.top();
        s1.pop();
        return res;
    }

    int front()
    {
        return s1.top();
    }

    bool empty()
    {
        return s1.empty();
    }
};

int main()
{
    Queue q;
    q.push(10, 20, 30);
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
}