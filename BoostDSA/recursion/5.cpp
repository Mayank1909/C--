#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    for (int i = n; i > 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
    return 0;
}