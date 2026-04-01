#include <iostream>
#include <vector>
using namespace std;

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

// IN this lecture we are going to study about the second approach for the problem Lowest Commom Ancestor
// Beacause if you notice the first approach time complexity is o(n) and while space complexity is also o(n)
// So in this lecture we are going to find a solution which works on time compleixity o(n) while reducing space complexity to o(1)

Node *Lca(Node *root, int n1, int n2)
{
    if (root == nullptr)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftval = Lca(root->left, n1, n2);
    Node *rightval = Lca(root->right, n1, n2);

    if (leftval != nullptr && rightval != nullptr)
    {
        return root;
    }
    if (leftval == nullptr && rightval != nullptr)
    {
        return rightval;
    }
    if (leftval != nullptr && rightval == nullptr)
    {
        return leftval;
    }
    if (leftval == nullptr && rightval == nullptr)
    {
        return nullptr;
    }
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    Node *val = Lca(root, 4, 3);
    cout << "LCA IS " << val->data << endl;
    return 0;
}