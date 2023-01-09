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
Node *DeleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    
        Node *temp = head->next;
        delete head;
        return temp;
    
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
   
     head = DeleteHead(head);
     while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}