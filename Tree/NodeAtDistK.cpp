#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

    void DistanceK(Node * root, int k)
    {
        if (root == NULL)
            return;
        if (k == 0)
        {
            cout << (root->key) << " ";
        }
        else
        {
            DistanceK(root->left, k - 1);
            DistanceK(root->right, k - 1);
        }
    }
    int main()
    {

        Node *root = new Node(10);
        root->left = new Node(20);
        root->right = new Node(30);
        root->left->left = new Node(40);
        int k = 2;
        DistanceK(root, k);
        return 0;
    }
