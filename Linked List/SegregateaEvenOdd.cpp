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
Node *segregate(Node *head){
    Node* eS=NULL ,*eE=NULL , *oS=NULL , *oE=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }
            else{
                eE->next=curr;
                eE=eE->next;
            }
        }
        else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }
            else{
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if(oS==NULL||eS==NULL)
    return head;
    eE->next=oS;
    oE->next=NULL;
    return eS;
}
void printList(struct Node *head)
{
    // Print the list after loop removal
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(12);
    head->next->next->next = new Node(9);
    head->next->next->next->next = new Node(7);
     printList(head);
     cout<<"\nafter segregating "<<endl;
    head=segregate(head);
    printList(head);
 return 0;
}