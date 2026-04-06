#include <iostream>
using namespace std;

// In this leture we are going to study about the problem
// finding kth ancestor
// You can search te problem statemnet
// SO our approach here is that we will try to find the our node
// if we find it we'll backtrack counting the nodes level and once this level reach to k we'll print our answer
// if node doesn't exist we will return null;

class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == -1)
    {
        idx++;
        return nullptr;
    }

    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);

    return currNode;
}

void KthAncestor(Node *root, int node, int k)
{
}

int main()
{
}