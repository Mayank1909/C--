#include <iostream>
#include <vector>
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
Node *ReverseLinkedlist(Node *head)
{
    vector<int> arr;
    for (Node *curr = head; curr != NULL; curr = curr->next)
        arr.push_back(curr->data);

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}

// struct LinkedList {
//     Node* head;
//     LinkedList() { head = NULL; }
// void reverse()
// {
//     Node *curr=head;
//     Node *prev=NULL;
//     while(curr!=NULL){
//         Node *next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     head=prev;
// }
// void print()
//     {
//         struct Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }
//  void push(int data)
//     {
//         Node* temp = new Node(data);
//         temp->next = head;
//         head = temp;
//     }
// };
int main()
{
//     LinkedList ll;
//     ll.push(20);
//     ll.push(4);
//     ll.push(15);
//     ll.push(85);
 
//     cout << "Given linked list\n";
//     ll.print();

//     // ReverseLinkedlist(head);
// ll.reverse();
// cout<<"\n";
// ll.print();
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);
    ReverseLinkedlist(head);
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }


    return 0;
}