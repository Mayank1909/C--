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
bool isSum(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
    {
        sum += root->left->key;
    }
    if (root->right != NULL)
    {
        sum += root->right->key;
    }
    return (root->key == sum && isSum(root->left) && isSum(root->right));
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->right->left = new Node(3);
    root->right->right = new Node(1);
    if (isSum(root))
        cout << "Yes";
    else
        cout << "NO";
    return 0;
}