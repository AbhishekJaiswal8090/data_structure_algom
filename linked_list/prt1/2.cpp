#include <iostream>
using namespace std;

// Linked list implementation

// so here Node class represents the the entire node which contains the data and the pointer pointting to the next elements
class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class List
{
    Node *Head;
    Node *Tail;

public:
    List()
    {
        Head = NULL;
        Tail = NULL;
    }
};

int main()
{
    List ll;
    return 0;
}