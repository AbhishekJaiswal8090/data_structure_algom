#include <iostream>
using namespace std;

// Validate BSTs
// SO THIS problems deals with the finding if a given Tree is valid BST or Not
// and this can be done by checking each every node value whther they satisfy the BST property or not

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *Insert(Node *root, int val)
{
    if (root == NULL)
    {
        Node *el = new Node(val);
        return el;
    }
    if (root->data < val)
    {
        root->right = Insert(root->right, val);
    }
    if (root->data > val)
    {
        root->left = Insert(root->left, val);
    }
    return root;
}

Node *BuildBST(vector<int> a, int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = Insert(root, a[i]);
    }
    return root;
}

bool ValidateBST(Node *root, Node *min, Node *max)
{
    if (min->data != nullptr && root->data < min->data)
    {
        return false;
    }

    if (max->data != nullptr && root->data > max->data)
    {
        return false;
    }

    return ValidateBST(root->left, min, root) && ValidateBST(root->right, root, max);
}

int main()
{
    vector<int> a;
    a = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = BuildBST(a, 6);
}