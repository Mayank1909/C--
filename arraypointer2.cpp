#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    int *p1=arr;
    int (*p2)[3]=&arr;

    cout<<*p1<<endl;
    cout<<**p2;

 return 0;
}