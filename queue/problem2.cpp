#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);

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

    return 0;
}
