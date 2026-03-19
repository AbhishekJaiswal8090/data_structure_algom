#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// In this lecture we are going to study the second approach to calculate the diameter of the tree
// Since the first approach which take o(n^2) Time Complexity
// This one is going to be slightly optimized which will take around o(n) Time complexity

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
        return NULL;
    }
    Node *currNode = new Node(nodes[idx++]);
    currNode->left = BuildNode(nodes, idx);
    currNode->right = BuildNode(nodes, idx);
    return currNode;
}

pair<int, int> Diameter(Node *root)
{
    if (root == NULL)
    {
        return {0, 0};
    }

    pair<int, int> LeftInfo = Diameter(root->left);   //(LH,LD)
    pair<int, int> RightInfo = Diameter(root->right); //(RH,RD)
    int curDia = LeftInfo.first + RightInfo.first + 1;
    int finalDia = max(curDia, max(LeftInfo.second, RightInfo.second));
    int finalHeight = max(LeftInfo.first, RightInfo.first) + 1;

    return make_pair(finalHeight, finalDia);
}

int main()
{
    int idx = 0;

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildNode(nodes, idx);
    cout << "Diameter= " << Diameter(root).second << endl;
    return 0;
}