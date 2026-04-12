#include <iostream>
#include <vector>
using namespace std;

// In today lecture we are going to solve problem
// Root to leaf path

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

void PrintPath(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void RootToLeaf(Node *root, vector<int> &a)
{
    if (root == NULL)
    {
        return;
    }
    a.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
    {
        PrintPath(a);
        a.pop_back();
        return;
    }

    RootToLeaf(root->left, a);
    RootToLeaf(root->right, a);
    a.pop_back();
}

int main()
{
    vector<int> a;
    a = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = BuildBST(a, 6);
    vector<int> path;
    RootToLeaf(root, path);
}