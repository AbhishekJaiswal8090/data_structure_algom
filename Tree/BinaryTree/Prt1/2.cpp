#include <iostream>
#include <vector>
using namespace std;

// Today we are going to study Traversal using Depth First Search

// Traversal divindes into two types
// dfs BFS
// DFS simplifies the traversal by visiting to the depth level
// BFS Traverse elements level by level

// While DFS includes diff kinds of traversal methods
// Preorder Inorder Postorder

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

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == -1)
    {
        idx++;
        return NULL;
    }
    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);
    return currNode;
}

// PreOrder Traversal
void PreorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

// Inorder Traversal
void InorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}

// Postorder traversal
void PostOrder(Node *root)
{
    if (root = NULL)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 3, -1, 6, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    // cout << "root node is " << root->data << endl;
    PreorderTraversal(root);
    cout << endl;
    InorderTraversal(root);
}