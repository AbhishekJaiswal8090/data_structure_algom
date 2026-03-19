#include <iostream>
using namespace std;

// queue in depth
// queue is a data structure which follows FIFO pattern
// FIRST IN FIRST OUT

// it has two parts
// front and Rear
// insertion takes place by rear
// deletion takes place by front

// it has thrree main methods
// 1-> push
// 2-> pop
// 3-> front

// all takes coonstant time to perform operation

// lets implement an queue using array
class Queue
{
    int *arr;
    int capacity;
    int size;

public:
    Queue(int c)
    {

        capacity = c;
        arr = new int[capacity];
        size = 0;
    }
    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }
    int enqueue(int ele)
    {
        if (isFull())
        {
            cout << "Queue Overflowed" << "\n";
            return -1;
        }
        arr[size++] = ele;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue underflowed " << "\n";
            return -1;
        }
        for (int i = 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }
        size--;
    }
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
            return -1;
        }
        return arr[0];
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
            return -1;
        }
        return arr[size - 1];
    }
};
int main()
{
    Queue q(3);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    q.enqueue(40);

    return 0;
}