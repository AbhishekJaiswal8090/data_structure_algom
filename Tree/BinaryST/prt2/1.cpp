#include <iostream>
using namespace std;

// In today lecture we are going to study about
// creating Balanced  BST using sorted array
// SINCE WE know the fact that inorder sequence is always sorted if we follow BST property
// plus in a Balanced BST the height should be as minimum as possible
// and we know that inorder follow left Root right structure
// so assuming this we will find out the middle elements of array becomes our root element
// and left half becomes left subtree and right half become right subtree

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

int main()
{
}