#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Today we are going to study BFS
// Breadth First Search
// it traverse level by level which is called Level Order Traversal

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
    currNode->left = BuildNode(nodes[idx], idx);
    currNode->right = BuildNode(nodes[idx], idx);
    return currNode;
}

// Level Order Traversal
void LevelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        if (root->left != NULL)
        {
            q.push(root->left);
        }
        if (root->right != NULL)
        {
            q.push(root->right);
        }
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    int idx = 0;
    vector<int> nodes = {1, 2, 4, 5, 3, 6, 7};
    Node *root = BuildNode(nodes, idx);
    LevelOrderTraversal(root);
}