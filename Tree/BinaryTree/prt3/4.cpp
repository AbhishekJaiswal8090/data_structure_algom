#include <iostream>
#include <vector>
using namespace std;

// IN this lecture we are going to study
// to find out the minimum distance bw two nodes
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

Node *Lca(Node *root, int n1, int n2)
{
    if (root == nullptr)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftval = Lca(root->left, n1, n2);
    Node *rightval = Lca(root->right, n1, n2);

    if (leftval != nullptr && rightval != nullptr)
    {
        return root;
    }
    if (leftval == nullptr && rightval != nullptr)
    {
        return rightval;
    }
    if (leftval != nullptr && rightval == nullptr)
    {
        return leftval;
    }
    if (leftval == nullptr && rightval == nullptr)
    {
        return nullptr;
    }
}

int minDist(Node *root, Node *p, Node *q)
{
}

int main()
{
}