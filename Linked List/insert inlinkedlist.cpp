#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
int main()
{
    Node *head = NULL;
    head = insert(head, 30);
    head = insert(head, 20);
    head = insert(head, 10);
    
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
            }
    return 0;
}