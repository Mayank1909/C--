#include<iostream>
using namespace std;
int MaxArray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {  if (arr[i]>res)
                res = arr[i];
        
    }
    return res;
}
int main()
{
    int n;
    cout<<"enter the array size";
    cin >> n;
    int arr[n];
    cout<<"enter the array elements";
        for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<MaxArray(arr, n);
    return 0;
}