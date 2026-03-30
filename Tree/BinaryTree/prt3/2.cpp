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

int main()
{
}