#include <iostream>
#include <vector>
using namespace std;

// In this leture we are going to study about the problem
// finding kth ancestor
// You can search te problem statemnet
// SO our approach here is that we will try to find the our node
// if we find it we'll backtrack counting the nodes level and once this level reach to k we'll print our answer
// if node doesn't exist we will return null;

class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == -1)
    {
        idx++;
        return nullptr;
    }

    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);

    return currNode;
}

int KthAncestor(Node *root, int node, int k)
{
    if (root == nullptr)
    {
        return -1;
    }
    if (root->data == node)
    {
        return 0;
    }

    int left = KthAncestor(root->left, node, k);
    int right = KthAncestor(root->right, node, k);

    if (left == -1 && right == -1)
    {
        return -1;
    }

    int distance = (left == -1 ? right : left) + 1;
    if (distance == k)
    {
        cout << "kth ancestor is :" << root->data << endl;
        return -1;
    }

    return distance;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);

    int node = 5, k = 2;
    KthAncestor(root, node, k);
}