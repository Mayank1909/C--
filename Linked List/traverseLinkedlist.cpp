#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next=NULL;
    }
};
// int printList(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<(curr->data)<<" ";
//         curr=curr->next;
//     }
// }

int printList(Node *head){
    while(head!=NULL){
        cout<<(head->data)<<endl;
        head=head->next;

    }
}


int main()
{
    Node *head=new Node(10);
    // head->next=new Node(20);
    // head->next->next=new Node(30);
    // head->next->next->next=new Node(40);
    printList(head);
     printList(head);

    return 0;

    
}
