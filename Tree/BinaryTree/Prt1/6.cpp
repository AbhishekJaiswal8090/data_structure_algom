#include <iostream>
#include <vector>
using namespace std;

// In today lecture we are going to study calcluating sum of all nodes weight data/weight

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
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

int Sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSum = Sum(root->left);
    int RightSum = Sum(root->right);
    cout << "Sum :" << leftSum + RightSum + root->data << endl;
    return leftSum + RightSum + root->data;
}

int main()
{
    vector<int> nodes = {1, 2, 4, 5, -1, -1, 6, -1, 7, -1, -1, -1, 3, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    int nodeSum = Sum(root);
    cout << nodeSum << endl;
}