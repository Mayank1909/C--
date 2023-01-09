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
        prev = next = NULL;
    }
};
Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;

    Node *curr=head;
    while(curr->next!=NULL)
    curr=curr->next;

    curr->next=temp;
    temp->prev=curr;
    return head;
}
void print(Node *head)
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

int main()
{
    Node *head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    print(head);

    return 0;
}