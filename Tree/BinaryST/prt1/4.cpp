#include <iostream>
using namespace std;

// In this lecture we are going to study about searching a particular element in a BST

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

// Search function
// IT almost works like binary search if key is less than root search in left else search in right
// avg tc => o(height) worst tc o(n);
bool Search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }

    if (key < root->data)
    {
        return Search(root->left, key);
    }
    else
    {
        return Search(root->right, key);
    }
}

int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root = BuildBST(arr, 6);
    cout << Search(root, 7);
}