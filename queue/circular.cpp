#include <iostream>
using namespace std;

// Circular queue is a que in which the insertion and deletion takes place in a circular manner

// Circular queue implementation using arrays

class CircularQueue
{
    int *arr;
    int capacity;
    int size;
    int ptr1;
    int ptr2;

public:
    CircularQueue(int c)
    {
        capacity = c;
        arr = new int[capacity];
        size = 0;
        ptr1 = arr[size];
        ptr2 = arr[size];
    }
    bool isEmpty()
    {
        return size == 0;
    }
    bool isFull()
    {
        return size == capacity;
    }
    int Enqueue(int ele)
    {
        if (isFull())
        {
            cout << "Overflowed";
            return -1;
        }
        arr[ptr2] = ele;
        ptr2 = (ptr2 + 1) % capacity;
    }
    int Dequeue()
    {
        if (isEmpty())
        {
            cout << "Underflowed";
            return -1;
        }
        arr[ptr1] = 0;
        ptr1 = (ptr1 + 1) % capacity;
    }

}

int
main()
{
}