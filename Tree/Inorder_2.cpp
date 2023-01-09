#include <iostream>
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
void Inorder(Node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << (root->key) << " ";
        Inorder(root->right);
    }
}
void PreOrder(Node *root)
{
    if (root != NULL)
    {
        cout << (root->key) << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void PostOrder(Node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << (root->key) << " ";
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    Inorder(root);
    cout << "\n";
    PreOrder(root);
    cout << "\n";
    PostOrder(root);
    return 0;
}
