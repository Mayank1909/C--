#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;
Node(int x){
    data=x;
    next=NULL;
}
};
Node *insertAtEnd(Node *head,int x){
Node *temp=new Node(x);
if(head==NULL){
    temp->next=temp;
    return temp;
}
else{
    temp->next=head->next;
    head->next=temp;
    int t=temp->data;
    temp->data=head->data;
    head->data=t;
    return temp;
}
}

void print(Node *head){
if(head==NULL) return ;
Node *p=head;
do{
    cout<<p->data<<" ";
    p=p->next;
}while(p!=head);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);
    head->next->next->next->next=head;
    int x=60;
    print(head);
    cout<<"\n after insertion at end \n";
    insertAtEnd(head,x);
    print(head);

 return 0;
}