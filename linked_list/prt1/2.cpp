#include <iostream>
using namespace std;

// Linked list implementation

// so here Node class represents the the entire node which contains the data and the pointer pointting to the next elements
// and the other class List represents the linked list itself which contains the info of head and tail

//  and now we are going to implement methods and functions of linked list
// push_fornt
// push-back
// pop front
// push back

class Node
{
public:
    int data;
    Node *next;

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
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (Head == NULL)
        {
            Head = newNode;
        }
        else
        {
            newNode->next = Head;
            Head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (Head == NULL)
        {
            Head = Tail = NULL;
        }
        else
        {
            Tail->next = newNode;
            Tail = newNode;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    return 0;
}
