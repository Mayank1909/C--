#include<iostream>
using namespace std;
int main()
{
//     int arr[]={10,20,30,40};
//     int *ptr=arr;
//     ++*ptr;
//     cout<<arr[0]<<" "<<arr[1]<<" "<<*ptr;
//  return 0;
// }
//precedence of prefix+++ amd * 
//is same .both are right assiciative
//postfix++ has higher precedence than *

    int arr[]={10,20,30,40};
    int *ptr=arr;
    *ptr++;
    cout<<arr[0]<<" "<<arr[1]<<" "<<*ptr;
    return 0;
}