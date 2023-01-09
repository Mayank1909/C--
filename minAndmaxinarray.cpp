#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0], max=arr[0];
    for(int i=1;i<size;i++)
{
    if(arr[i]<min)
    min=arr[i];
    else if(arr[i]>max)
    max=arr[i];
}
cout<<"max ="<<max<<endl;
cout<<"min ="<<min;
 return 0;
}