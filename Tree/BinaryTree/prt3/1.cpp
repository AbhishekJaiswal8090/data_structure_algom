#include <iostream>
#include <vector>
using namespace std;

// IN this lecture we are going to study about finding ellemnts kth level of a tree
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
void KthHelper(Node *root, int k, int x)
{
    if (root == nullptr)
    {
        return;
    }
    if (k == x)
    {
        cout << root->data << " ";
        return;
    }

    KthHelper(root->left, k, x + 1);
    KthHelper(root->right, k, x + 1);
}

void KthLevel(Node *root, int k)
{
    int currLevel = 1;
    KthHelper(root, k, currLevel);
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 4, 5, -1, -1, 6, -1, 7, -1, -1, -1, 3, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    KthLevel(root, 2);
    return 0;
}