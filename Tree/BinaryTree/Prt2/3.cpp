#include <iosteram>
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

Node *BuildNode(vector<int> &nodes, int &idx)
{
    if (nodes[idx] == NULL)
    {
        idx++;
        return NULL;
    }
    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);
    return currNode;
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
    }
    int isSubTree = isSubtree(root->left, subtroot);
    if (!isSubTree)
    {
        return isSubtree(root->right, subroot);
    }

    return true;
}

int main()
{
}