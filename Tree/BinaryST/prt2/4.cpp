#include <iostream>
#include <vector>

using namespace std;

//  In this lecture we are going to study the problem and solve it
// which is merging two BSTs
// so here  we are going to use the fact that Inorder always gives sorted sequence
// ans merging these two BST sequence gives an sorted overall elements and we can build our Balanced BSTs using divide and conquer

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

// we are going two consider here that two roots of the both BSTs are given just like Leetcode style

void Inorder(Node *root, vector<int> &a)
{
    if (root == NULL)
    {
        return nullptr;
    }
    Inorder(root->left, a);
    a.push_back(root->data);
    Inorder(root->right, a);
}

Node *BuildBalancedBST(vector<int> a, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = start + (end - start) / 2;
    Node *root = new Node(a[mid]);
    root->left = BuildBalancedBST(root->left, start, mid - 1);
    root->right = BuildBalancedBST(root->right, mid + 1, end);

    return root;
}

Node *MergeBST(Node *root1, Node *root2)
{
    vector<int> a1;
    vector<int> a2;
    vector<int> over_all;
    Inorder(root1, a1);
    Inorder(root2, a2);

    for (int i = 0; i < a1.size(); i++)
    {
        over_all.push_back(a1[i]);
    }
    for (int i = 0; i < a2.size(); i++)
    {
        over_all.push_back(a2[i]);
    }

    sort(over_all.begin(), over_all.end());

    int start = 0;
    int end = over_all.size() - 1;
    return BuildBalancedBST(over_all, start, end);
}

int main()
{
}