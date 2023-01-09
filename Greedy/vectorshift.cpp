#include <bits/stdc++.h>
using namespace std;
int kthlargest(int arr[], int n, int k)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    auto it = s.end();
    for (int i = k - 1; i > 0; i--)
    {
        it--;
    }
    return *it;
}
int main()
{
    int arr[] = {12, 3, 9, 7, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << kthlargest(arr, n, k);
    return 0;
}