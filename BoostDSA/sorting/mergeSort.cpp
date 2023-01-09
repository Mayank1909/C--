
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
public:
    void merge(int &arr[], int left, int mid, int right)
    {
        // Your code here
        int i = left;
        int j = mid + 1;
        int f = left;
        int temp[10000];

        while (i <= mid && j <= right)
        {
            if (arr[i] < arr[j])
            {
                temp[f] = arr[i];
                i++;
            }
            else
            {
                temp[f] = arr[j];
                j++;
            }
            f++;
        }
        if (i > mid)
        {
            while (j <= right)
            {
                temp[f] = arr[j];
                f++;
                j++;
            }
        }
        else
        {
            while (i <= right)
            {
                temp[f] = arr[i];
                f++;
                i++;
            }
        }

        for (int m = f; m <= right; m++)
        {
            arr[m] = temp[m];
        }
    }

public:
    void mergeSort(int arr[], int left, int right)
    {
        // code here
        if (left < right)
        {
            int mid = (left + right) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &n);
        int arr[n + 1];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends