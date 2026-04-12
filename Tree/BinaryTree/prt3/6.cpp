#include <iostream>
#include <vector>
using namespace std;

// Here we are going to solve the problem from root to leaf path

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

// Helper function to print a path
void printPath(const vector<int> &path)
{
    for (int val : path)
    {
        cout << val << " ";
    }
    cout << endl;
}

// Recursive function to find root-to-leaf paths
void rootToLeafPaths(Node *root, vector<int> &path)
{
    if (root == nullptr)
        return;

    // Add current node to path
    path.push_back(root->data);

    // If leaf node, print the path
    if (root->left == nullptr && root->right == nullptr)
    {
        printPath(path);
    }
    else
    {
        // Recur for left and right subtrees
        rootToLeafPaths(root->left, path);
        rootToLeafPaths(root->right, path);
    }

    // Backtrack: remove current node
    path.pop_back();
}

int main()
{
    // Example tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> path;
    cout << "Root-to-leaf paths:\n";
    rootToLeafPaths(root, path);

    return 0;
}