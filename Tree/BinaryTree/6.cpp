#include <iostream>
#include <vector>
using namespace std;

// In today lecture we are going to study calcluating sum of all nodes weight data/weight

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
    }
};

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);
    return currNode;
}

int Sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSum = Sum(root->left);
    int RightSum = Sum(root->right);
    return leftSum + RightSum + root->data;
}

int main()
{
}