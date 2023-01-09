#include<iostream>
using namespace std;
struct Queue{
int size , cap;
int *arr;
Queue(int c){
    cap=c;
    size=0;
    arr=new int[cap];
}
bool isFull(){
    return (size==cap);
}
bool isEmpty(){
    return (size==0);
}
void Enque(int x){
    if(isFull()) return ;
    arr[size]=x;
    size++;
}
void deque(){
    if(isEmpty()) return ;
    for(int i=0;i<size-1;i++)
    arr[i]=arr[i+1];
    size--;
}
int getFront(){
    if(isEmpty()) return -1;
    else
     return 0;
}
int getRear(){
    if(isEmpty()) return -1;
    else
    return size-1;
}
void queueDisplay()
    {
        int i;
        if (size == 0) {
            printf("\nQueue is Empty\n");
            return;
        }
 
        // traverse front to rear and print elements
        for (i =0; i < size; i++) {
            printf(" %d <-- ", arr[i]);
        }
        return;
    }
};

int main()
{
    Queue q(5);
    q.Enque(10);
    q.Enque(20);
    q.Enque(30);
    q.Enque(40);
    cout<<q.getRear()<<endl;
    cout<<q.getFront()<<endl;
    q.queueDisplay();



 return 0;
}