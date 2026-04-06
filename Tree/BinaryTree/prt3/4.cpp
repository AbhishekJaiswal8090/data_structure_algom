#include <iostream>
#include <vector>
using namespace std;

// IN this lecture we are going to study
// to find out the minimum distance bw two nodes
// From the above lecture we can say that the
// the min distance bw two nodes goes from the lca of those two nodes
// So our aprroach is simple we are going to calculate the distance from lca to first node and then distance from lca to second node and
// by adding it we'lll get our answer

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

int Dist(Node *root, int p)
{
    if (root == nullptr)
    {
        return -1;
    }
    if (root->data == p)
    {
        return 0;
    }

    int leftDist = Dist(root->left, p);
    if (leftDist != -1)
    {
        return leftDist + 1;
    }

    int rightDist = Dist(root->right, p);
    if (rightDist)
    {
        return rightDist + 1;
    }

    return -1;
}

int minDist(Node *root, int p, int q)
{
    Node *lca = Lca(root, p, q);
    int dist1 = Dist(lca, p);
    int dist2 = Dist(lca, q);
    cout << dist1 + dist2
         << endl;
    return dist1 + dist2;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);

    int n1 = 4;
    int n2 = 6;
    minDist(root, n1, n2);
}