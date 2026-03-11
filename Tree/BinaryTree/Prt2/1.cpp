#include <iostream>
#include <vector>
using namespace std;

// Calculating the diameter of the tree
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
    int currHeight = max(lh, rh);
    return currHeight + 1;
}

int Diameter(Node *root)
{
    if (root == NULL)
    {

        return 0;
    }
    int rh = Height(root->left) + Height(root->right) + 1;
    int lsh = Diameter(root->left);
    int rsh = Diameter(root->right);

    int ans = max(rh, max(lsh, rsh));
    return ans;
}

int main()
{
    vector<int> nodes = {1, 2, 4, 5, -1, -1, 6, -1, 7, -1, -1, -1, 3, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    int ans = Diameter(root);
    cout << ans << endl;
}