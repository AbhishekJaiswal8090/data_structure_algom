#include <iostream>
#include <vector>
using namespace std;

// Today we are going to study about height of the tree
// Height is basically the distance bw the root node and the leaf node
// So the height of the tree an vary on two component edge and node and if we obsereve a tree
// height of edge = height of node - 1;
// so all we need is to calculate the height

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

int Height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = Height(root->left);
    int rh = Height(root->right);
    int curH = max(lh, rh);
    return curH + 1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, 5, -1, -1, 6, -1, 7, -1, -1, -1, 3, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    int nodeHeight = Height(root);
    int edgeHeight = nodeHeight - 1;
    cout << nodeHeight << "  " << edgeHeight << endl;
}