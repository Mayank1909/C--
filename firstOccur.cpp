#include <iostream>
using namespace std;
int firstOccur(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x > arr[mid])
        return firstOccur(arr, mid + 1, high, x);
    else if (x < arr[mid])
        return firstOccur(arr, low, mid - 1, x);

    else if (mid == 0 || arr[mid - 1] != arr[mid])
        return mid;
    else
        return firstOccur(arr, low, mid - 1, x);
}
int main(){
int arr[]={10,20,30,20,50,20};
int x=20;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<firstOccur(arr,0,n-1,x);
return 0;
}
