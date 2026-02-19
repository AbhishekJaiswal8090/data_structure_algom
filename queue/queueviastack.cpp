#include <iosteram>
#include <stack>
using namespace std;

// in this lecture wew are going to study implementing queue using two stack;

// here we are implementing queue property using stack;
// what we are doing here is simple
// we have two stack s1 and s2;
// and each time during pushing element we shift all the data of stack 1 to stack 2
// and then push the elelement into the stack 1 and then after shift all the data of stack2 into stack 1

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