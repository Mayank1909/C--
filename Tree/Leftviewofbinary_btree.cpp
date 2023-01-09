#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int key;
    Node *right;
    Node *left;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};
void PrintLeft(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
                cout << (curr->key) << " ";
            if (curr->left != NULL)
                q.push(curr->left);

            // Add right node to queue
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    PrintLeft(root);
    return 0;
}