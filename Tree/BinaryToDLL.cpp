#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node *right;
    Node *left;
    Node *prev;

    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

Node *BTTODLL(Node *root)
{
    if (root == NULL)
        return root;
    Node *head = BTTODLL(root->left);
    if (prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BTTODLL(root->right);
    return head;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->key << " ";
        node = node->right;
    }
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->right->left = new Node(3);
    root->right->right = new Node(1);
    Node *head = BTTODLL(root);

    return 0;
}