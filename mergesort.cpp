#include <iostream>
using namespace std;

void swapofelmnts(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int partition(int arr[], int first, int end)
{
    int pivot = arr[end];
    int i = (first - 1);

    for (int j = first; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swapofelmnts(&arr[i], &arr[j]);
        }
    }
    swapofelmnts(&arr[i + 1], &arr[end]);
    return (i + 1);
}
void quickSort(int arr[], int first, int end)
{
    if (first < end)
    {
        int pi = partition(arr, first, end);
        quickSort(arr, first, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void inputarray(int arr[])
{
    int j = 0;
    cout << "------------------------------" << endl;
    cout << "Enter the elements in array:- " << endl;
    for (j = 0; j <= 5; j++)
    {
        cin >> arr[j];
    }
}
int main()
{
    int arr[6];
    int n = 6;
    inputarray(arr);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: " << endl;
    printArray(arr, n);
    cout << "------------------------------" << endl;
    return 0;
}
