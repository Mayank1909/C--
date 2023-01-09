// hashing counting frequencing
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 2, 4, 5, 2, 1, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }
    cout << res << endl;
    int min_count = n + 1;
    int res_min = -1;
    for (auto i : hash)
    {
        if (min_count >= i.second)
        {
            res_min = i.first;
            min_count = i.second;
        }
    }
    cout << res_min << endl;
    return 0;
}