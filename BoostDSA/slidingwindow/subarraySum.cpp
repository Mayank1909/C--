#include <iostream>
using namespace std;
int subArraySum(int arr[], int n, int size)
{
    // int maxsum = 0;

    // for (int i = 0; i < n; i++)
    // {

    //     int sum = 0;

    //     for (int j = i; j < i + size; j++)
    //     {

    //         sum += arr[j];
    //         maxsum = max(sum, maxsum);
    //     }
    //     if (i + size > n)
    //         return maxsum;
    // }
    // sliding window
    int res = 0;
    for (int i = 0; i < size; i++)
        res += arr[i];

    int curr_sum = res;
    for (int i = size; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - size];
        res = max(res, curr_sum);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, 5, 2, 9, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int size = 2;
    int ans = subArraySum(arr, n, size);
    cout << ans;
    return 0;
}