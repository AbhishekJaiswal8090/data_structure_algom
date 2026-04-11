#include <iostream>
using namespace std;
// So in this lecture we are going to solve
// Print in range Problem

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

Node *Insert(Node *root, int val)
{
    if (root == NULL)
    {
        Node *curr = new Node(val);
        return curr;
    }
    if (val < root->data)
    {
        root->left = Insert(root->left, val);
    }
    else
    {
        root->right = Insert(root->right, val);
    }
    return root;
}

Node *BuildBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = Insert(root, arr[i]);
    }
    return root;
}

int main()
{
}