#include<iostream>
using namespace std;
int zeroToend(int arr[],int n){
int count =0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        arr[count++]=arr[i];
    }

}

    while(count<n){
        arr[count++]=0;
    }

}
int main()
{
int arr[]={1,2,3,0,4,5,0,6,7,0,8,9,0};
int n = sizeof(arr) / sizeof(arr[0]);
zeroToend(arr,n);
for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}