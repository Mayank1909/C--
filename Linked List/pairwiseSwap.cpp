#include <bits/stdc++.h>
using namespace std;

// Structure of a node
// of a Linked List
class Node {
public:
	int data;
	Node* next;

	// Constructor
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

// Function to find the intersection
// point of the two Linked Lists
int pairwiseSwap(Node *head){
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    Node *head = new Node(3);
	head->next = new Node(6);
	head->next->next = new Node(9);
	head->next->next->next = new Node(15);
	head->next->next->next->next = new Node(30);
    pairwiseSwap(head);
    printList(head);
	return 0;

}
