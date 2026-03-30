#include <iostream>
#include <vector>

using namespace std;

// LOwest Common Ancestor
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

int main()
{
    
}