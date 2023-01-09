#include<iostream>
using namespace std;
void ReverseArray(int arr[],int start,int end){
if(start>=end)
return;

int temp;
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;

ReverseArray(arr,start+1,end-1);
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int end=sizeof(arr)/sizeof(arr[0]);
     printArray(arr,end);
    ReverseArray(arr,0,end-1);
    printArray(arr,end);
 return 0;
}