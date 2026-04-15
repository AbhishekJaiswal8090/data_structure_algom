#include <iostream>
using namespace std;

// Converting BST to Balnced BST
// So since we already know that Inoredr of BST always sorted sequence
// so using we will build our balanced BST
// using divide and conquer method
// in last lecture we studied that

// supposing we are given root of any unbalanced bst we will solve it

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

void Inorder(Node *root, vector<int> &a)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root, a);
    a.push_back(root->data);
    Inorder(root->right, a);
}

Node *BuildBalancedBST(Node *root, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = start + (end - start) / 2;
    Node *curr = new Node(a[mid]);
    root->left = BuildBalancedBST(root->left, start, mid - 1);
    root->right = BuildBalancedBST(root->right, mid + 1, end);

    return root;
}

// Supposing we are given root of unbalanced BST
Node *BalancedBST(Node *root)
{
    vector<int> a;
    Inorder(root, a); // here we get the INoredr sequnce and now we wiil build our balanced BST

    int start = 0;
    int end = a.size();
    return BuildBalancedBST(root, start, end);
}

int main()
{
}