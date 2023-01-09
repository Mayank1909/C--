#include <iostream> //best solution with no linked list modification  in O(n)
using namespace std;
struct Node
{
    Node *next;
    int data;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
bool isLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (slow == fast)
            return true;
    }
    return false;
}
void removeloop(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (slow == fast)
            break;
    }
    if (slow != fast)
    return;
    slow = fast;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next = head->next;
    // printList(head);
    isLoop(head);
    if (isLoop(head))
        cout << "Loop found" << endl;
    else
        cout << "No Loop";

    removeloop(head);
    cout << " after loop removal loop checking......" << endl;
    printList(head);

    return 0;
}
