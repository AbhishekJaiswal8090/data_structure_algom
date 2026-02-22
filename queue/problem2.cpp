#include <iostream>
#include <queue>
using namespace std;

// queue interleave problem

// THe question states that we have even size queue and task is to make the such queue that the fisrt half elelemnts
// and second half elelments shows up alernatively

// Brute force
void INterLeave(queue<int> &q)
{
    int n = q.size();
    int half = n / 2;

    queue<int> fh, sh;

    for (int i = 0; i < half; i++)
    {
        fh.push(q.front());
        q.pop();
    }

    while (!q.empty())
    {
        sh.push(q.front());
        q.pop();
    }

    queue<int> myq;
    while (!fh.empty() && !sh.empty())
    {
        myq.push(fh.front());
        fh.pop();
        myq.push(sh.front());
        sh.pop();
    }

    while (!myq.empty())
    {
        cout << myq.front();
        myq.pop();
    }
}

void optimized(queue<int> &q)
{
    int n = q.size();
    int half = n / 2;

    queue<int> fh, sh;

    for (int i = 0; i < half; i++)
    {
        fh.push(q.front());
        q.pop();
    }

    while (!fh.empty())
    {
        q.push(fh.front());
        fh.pop();
        q.push(q.front());
        q.pop();
    }

    while (!q.empty())
    {
        cout << myq.front();
        myq.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);

    INterLeave(q);
    // It uses two extra queues
    optimized(q);
    // iT ONLY USES SINGLE EXTRA QUEUES
    return 0;
}
