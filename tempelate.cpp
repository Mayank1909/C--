#include <bits/stdc++.h>
using namespace std;
int klargest(int arr[], int n, int k)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    auto it = s.end();
    for (int i = 0; i < k; i++)
    {
        it--;
    }
    return *it;
}
int main()
{
    int arr[] = {5, 7, 1, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << klargest(arr, n, k);

    return 0;
}