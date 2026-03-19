#include <iostream>
#include <vector>
using namespace std;

// in this leacture we are going to solve the problem
// Subtree of anoTHEr Tree
// =>REturn true if there is a subtree of root with the same structure and node values of subRoot
// and false otherwise

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

Node *BuildNode(const vector<int> &nodes, int &idx)
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

bool isIdentical(Node *root1, Node *root2)
{

    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if ((root1 == NULL && root2 != NULL) || root1 != NULL && root2 == NULL)
    {
        return false;
    }

    if (root1->data != root2->data)
    {
        return false;
    }

    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}
bool isSubtree(Node *root, Node *subroot)
{
    if (root == NULL && subroot == NULL)
    {
        return true;
    }
    if ((root == NULL && subroot != NULL) || root != NULL && subroot == NULL)
    {
        return false;
    }
    if (root->data == subroot->data)
    {
        if (isIdentical(root, subroot))
            return true;
    }
    bool isinSubtree = isSubtree(root->left, subroot);
    if (!isinSubtree)
    {
        return isSubtree(root->right, subroot);
    }

    return true;
}

int main()
{
    int idx = 0;

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildNode(nodes, idx);

    Node *subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);

    cout << isSubtree(root, subroot) << endl;
    return 0;
}