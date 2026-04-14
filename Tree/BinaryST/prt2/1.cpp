#include <iostream>
using namespace std;

// In today lecture we are going to study about
// creating Balanced  BST using sorted array
// SINCE WE know the fact that inorder sequence is always sorted if we follow BST property
// plus in a Balanced BST the height should be as minimum as possible
// and we know that inorder follow left Root right structure
// so assuming this we will find out the middle elements of array becomes our root element
// and left half becomes left subtree and right half become right subtree
// and folowing Divide and conquer techniques we can build BST

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

Node *BuildBST(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = start + (end - start) / 2;
    Node *root = new Node(arr[mid]);

    root->left = BuildBST(arr, start, mid - 1);
    root->right = BuildBST(arr, mid + 1, end);
    return root;
}

void Preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    Node *root = BuildBST(arr, 0, 6);
    Preorder(root);
}