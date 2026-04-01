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

int main()
{
}