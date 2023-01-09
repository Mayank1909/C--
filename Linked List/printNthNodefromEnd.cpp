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
void printNfromend(Node *head,int n){
    int len=0;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    len++;
    if(len<n)
    return ;
    Node *curr=head;
    for(int i=1;i<len-n+1;i++)
    curr=curr->next;
    cout<<curr->data<<" ";
}
int main()
{
    
 return 0;
}