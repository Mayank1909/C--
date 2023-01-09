#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    // int *ptr=arr;
    // cout<<*ptr<<" "<<ptr<<endl;
    // ptr++;
    // cout<<*ptr<<" "<<ptr<<endl;
    // ptr--;
    // cout<<*ptr<<" "<<ptr<<endl;
    // ptr=ptr+3;
    // cout<<*ptr<<" "<<ptr<<endl;
    // ptr=ptr-2;
int *ptr1=arr;//subtration example
cout<<*ptr1<<" "<<ptr1<<endl;
int *ptr2=ptr1+3;
    cout<<*ptr2<<" "<<ptr2<<endl;
    cout<<ptr2-ptr1<<endl;//it gives you number of object betwenn  them 12/4=3
 return 0;
}
