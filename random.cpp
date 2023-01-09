#include <iostream>

using namespace std;

struct node{
    
    int data;
    struct node *next , *prev;
    
};

node* create_node(struct node *head,int data)
{
  
    node* new_node = new node(); 
    new_node->data = data; 
    new_node->next = head; 
    new_node->prev = NULL; 
    if (head != NULL) 
        head->prev = new_node; 

    head = new_node; 
 return head;
}


void display(node *head)
{
   struct node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
}

int main()
{
    struct node *head=NULL;
    // struct node *temp=NULL;
    // temp=new node;
    int n=0,data,x;
    
    while(n==0)
    {
        
        cout<<"enter 1 to add the nodes\nenter 2 to display linked list \nenter 3 to end the program\n";
        cin>>x;
        
        
        switch(x)
        {
            case 1:
            cout<<"enter data to enter in to the node"<<endl;
            cin>>data;
            create_node(head,data);
            break;
            
            case 2:
            display(head);
            break;
            
            case 3:
            n=1;
            break;
            
        }
        
    };
    
    
    
    return 0;
}