#include <iostream>
#include <vector>
using namespace std;

// Today we are going to study BFS
// Breadth First Search
// it traverse level by level which is called Level Order Traversal

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

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == -1)
    {
        return NULL;
    }

    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes[idx], idx);
    currNode->right = BuildNode(nodes[idx], idx);
    return currNode;
}

// Level Order Traversal

int main()
{
}