#include <iostream>
#include <vector>
using namespace std;

// In today lecture we are going to study counting nodes of thew tree

class Node
{
public: // constructor needs to be accessible
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

int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans1 = count(root->left);
    int ans2 = count(root->right);
    return ans1 + ans2 + 1;
}

int main()
{
    vector<int> nodes = {1, 2, 4, 5, -1, -1, 6, -1, 7, -1, -1, -1, 3, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    int nodeCount = count(root);

    cout << nodeCount << endl;
}