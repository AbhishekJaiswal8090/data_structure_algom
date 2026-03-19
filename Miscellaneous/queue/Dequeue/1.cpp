#include <iostream>
#include < deque>
using namespace std;

// IN today class we are going to learn dequeue
// Deque means double ended queue
// This is as same as queue but in queue we can only push elelement in last
// but in dequeue we can push elelemnt from both front and back same with pop operation

int main()
{
    deque<int> dq;
    dq.push_back(20);
    dq.push_back(40);
    dq.push_front(40);
    dq.push_front(70);

    dq.pop_back();
    dq.pop_front();

    return 0;
}