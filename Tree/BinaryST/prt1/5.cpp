#include <iostream>
using namespace std;

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

Node *insert(Node *root, int ele) // o(log(n))
{
    if (root == NULL)
    {
        root = new Node(ele);
        return root;
    }

    if (ele < root->data) // left subtree
    {
        root->left = insert(root->left, ele);
    }
    else
    { // right subtree
        root->right = insert(root->right, ele);
    }

    return root;
}

// Build BST
Node *BuildBST(int arr[], int n) // n nodes and insertion take logn hence total tc nlog(n)
{
    Node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}

int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root = BuildBST(arr, 6);
}