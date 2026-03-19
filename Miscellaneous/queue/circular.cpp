#include <iostream>
using namespace std;

// Circular queue is a que in which the insertion and deletion takes place in a circular manner

// Circular queue implementation using arrays

class CircularQueue
{
    int *arr;
    int capacity;
    int size;
    int front;

public:
    CircularQueue(int c)
    {
        capacity = c;
        arr = new int[capacity];
        size = 0;
        front = 0;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    bool isFull()
    {
        return size == capacity;
    }
    void push(int ele)
    {
        if (isFull())
        {
            cout << "Overflowed";
        }
        int rear = (front + size) % capacity;
        size++;
        arr[rear] = ele;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Underflowed";
            return -1;
        }
        int res = arr[front];
        front = (front + 1) % capacity;
        size--;
        return res;
    }
};

int main()
{
}