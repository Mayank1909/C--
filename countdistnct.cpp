#include <iostream>
using namespace std;
int coutnDistinct(int arr[], int n)
{
    int count = 0;
    bool distinct = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                distinct = false;
                break;
            }
        }
        if (distinct == true)
            count++;
    }
    return count;
}
int main()
{

int arr[]={10,20,30,40,50};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<coutnDistinct(arr,n);
    return 0;
}