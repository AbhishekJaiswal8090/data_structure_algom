#include <iostream>
using namespace std;
// So in this lecture we are going to solve
// Print in range Problem
// In which we have been given an start and ennd value , all the node that lies bw bw these range we have to prine thier value

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

void PrintInRange(Node *root, int start, int end)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data >= start && root->data <= end)
    {
        cout << root->data << " ";
        PrintInRange(root->left, start, end);
        PrintInRange(root->right, start, end);
    }
    if (root->data < start)
    {
        PrintInRange(root->right, start, end);
    }
    if (root->data > end)
    {
        PrintInRange(root->left, start, end);
    }
}

int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root = BuildBST(arr, 6);
    PrintInRange(root, 4, 10);
}