#include<iostream>
using namespace std;
int lastOccur(int arr[],int low,int high,int x, int n){
if(low>high)
    return -1;
int mid=(low+high)/2;

   
    if (arr[mid]>x)
        return lastOccur(arr, mid + 1, high, x,n);
    else if (arr[mid]< x)
        return lastOccur(arr, low, mid - 1, x,n);

    else if (mid == n-1 || arr[mid] != arr[mid+1])
        return mid;
    else
        return lastOccur(arr, mid+1,  high,x,n);


}
int main(){
int arr[]={10,20,30,20,50,20};
int x=10;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<lastOccur(arr,0,n-1,x,n);
return 0;
}