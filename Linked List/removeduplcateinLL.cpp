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

Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *curr=head;
  Node *next = head -> next;

 while(next!=NULL){
     if(curr->data==next->data){
         curr->next=next->next;
         delete next;
         next=curr->next;
     }
     else{
         curr=curr->next;
         next=next->next;
     }
 }
 return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(40);
   
     head = removeDuplicates(head);
     while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}