#include <iostream>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
    }
};

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == -1)
    {
        idx++;
        return NULL;
    }
    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);
    return currNode;
}

int main()
{
}