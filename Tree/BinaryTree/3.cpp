#include <iostream>
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

Node *BuildNode(int nodes[], int size, int idx)
{
    if (idx >= size || nodes[idx] == -1)
    {
        return NULL;
    }

    Node *currNode = new Node(nodes[idx]);
    currNode->left = BuildNode(nodes, size, 2 * idx + 1);
    currNode->right = BuildNode(nodes, size, 2 * idx + 2);
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
        Node *current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left != NULL)
        {
            q.push(current->left);
        }
        if (current->right != NULL)
        {
            q.push(current->right);
        }
    }
}
int main()
{
    int nodes[] = {1, 2, 4, 5, 3, 6, 7};
    int size = 7;
    Node *root = BuildNode(nodes, size, 0);
    LevelOrderTraversal(root);
    cout << endl;
    return 0;
}