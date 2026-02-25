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

// IMplementing Tree from Preorder
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
    if (idx >= nodes.size() || nodes[idx] == -1)
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
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 3, -1, 6, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    cout << "root node is " << root->data << endl;
}