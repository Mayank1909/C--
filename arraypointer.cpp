#include <iostream>
using namespace std;
void fun(int *arr,int n)
{
   // int n = sizeof(arr) / sizeof(arr[0]);//it is wrong way  inside a function
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    cout << "\n";
    fun(arr,n);
    return 0;
}