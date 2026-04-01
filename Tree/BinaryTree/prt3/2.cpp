#include <iostream>
#include <vector>
using namespace std;

// IN today lecture we are going to study and solve the problem Lowest Common Ancestor
// We will solve it using two aproaches
// This apprach reuires o(n) Time complexity and o(n) space cmplexity

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

bool calculatePath(Node *root, vector<int> &path, int n)
{
    if (root == NULL)
    {
        return false;
        ;
    }
    path.push_back(root->data);
    if (root->data == n)
    {
        return true;
    }

    bool left = calculatePath(root->left, path, n);
    bool right = calculatePath(root->right, path, n);

    if (left || right)
        return true;

    path.pop_back();
    return false;
}

int LCA(Node *root, int n1, int n2)
{

    vector<int> path1;
    vector<int> path2;

    calculatePath(root, path1, n1);
    calculatePath(root, path2, n2);

    int lca = -1;
    for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++)
    {
        if (path1[i] != path2[j])
        {
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = 0;
    Node *root = BuildNode(nodes, idx);
    cout << "LCA IS " << LCA(root, 4, 5) << endl;
    return 0;
}