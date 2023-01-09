#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp; //
    head->prev = temp;
    return temp;
}
void print(Node *head)
{
    Node *p = head;
    while (p->next != head)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << " ";
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next=head;
    head->prev=temp2;
    int x=5;
    head=insertBegin(head,x);
    print(head);

    return 0;
}
