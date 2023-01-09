#include<iostream>
using namespace std;
struct dequeue{
    int *arr;
    int front,size,cap;
    dequeue(int c){
        
        arr=new int[c];
        size=0;
        cap=c;
        front=0;
    }
    bool isEmpty(){
        return (size==0);
    }
     bool isFull(){
        return (size==cap);
    }
    void deletefront(){
        if(isEmpty()) return ;
        front=(front+1)%cap;
        }
     void insertrear(int x){
         if(isFull()) return ;
         int new_rear=(front+size)%cap;
         arr[new_rear]=x;
         size++;
     }
     int getfront(){
         if(isEmpty()) return -1;
         else return front;
     }
     void insertfront(int x){
         if(isFull()) return ;
         front=(front+cap-1)%cap;
         arr[front]=x;
         size++;

     }
     void deleterear(){
          if(isEmpty()) return ;
          size--;
     }
     int getrear(){
         if(isEmpty()) return -1;
         
         return (front+size-1)%cap;
     }
     void dequeueDisplay()
    {
        int i;
        if (size == 0) {
            printf("\nQueue is Empty\n");
            return;
        }
 
        // traverse front to rear and print elements
        for (i =0; i < size; i++) {
            cout<<arr[i]<<" ";
        }
        return;
    }
};
int main()
{
    dequeue d(5);
    d.insertfront(10);
    d.insertfront(20);
    d.deletefront();
    d.dequeueDisplay();


 return 0;
}