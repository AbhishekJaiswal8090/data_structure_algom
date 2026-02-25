#include <iostream>
#include <vector>
using namespace std;

// In today lecture we are going to study tree
// The most complicated data strcuture
// Which is Hierarchial Data Structure

// Binary tree is a non linear data structure which
// generally have at max two nodes
// THey can be called as Child node

// Lets start coding

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *BuildNode(vector<int> nodes)
{
    
}

int main()
{
}