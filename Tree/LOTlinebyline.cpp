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
// void printlevelorderlinebyline(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (q.size() > 1)
//     {
//         Node *curr = q.front();
//         q.pop();
//         if (curr == NULL)
//         {
//             cout << "\n";
//             q.push(NULL);
//         }
//         continue;
//         cout<<(curr->key);
//         if (curr->left != NULL)
//             q.push(curr->left);
//         if (curr->right != NULL)
//             q.push(curr->right);
//     }
// }
void printorderline(Node *root)
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
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << "\n";
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    // printlevelorderlinebyline(root);
    printorderline(root);

    return 0;
}