#include <iostream>
#include <queue>
#include <map>
using namespace std;

// TOP VIEW OF A Tree
// IN this lecture we are going to solve the problems
// in which we need to return the top view of the tree , you can look problem statement on the
// Leetcode

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

void TopView(Node *root)
{
    if (root == nullptr)
        return; // Added null check for safety

    queue<pair<Node *, int>> Q;
    map<int, int> mp;

    Q.push(make_pair(root, 0));

    while (!Q.empty())
    {
        pair<Node *, int> curr = Q.front(); // Fixed: Use Q.front() instead of make_pair(root, 0)
        Q.pop();                            // Fixed: Dequeue the processed node

        Node *currNode = curr.first;
        int currHD = curr.second;

        if (mp.count(currHD) == 0)
        {
            mp[currHD] = currNode->data;
        }
        if (currNode->left != nullptr)
        {
            Q.push(make_pair(currNode->left, currHD - 1));
        }
        if (currNode->right != nullptr)
        {
            Q.push(make_pair(currNode->right, currHD + 1));
        }
    }

    for (auto it : mp)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    int idx = 0;

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildNode(nodes, idx);

    TopView(root);

    return 0;
}