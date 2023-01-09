#include <bits/stdc++.h>
using namespace std;
void min_coin(int arr[], int n, int amount)
{
    sort(arr, arr + n, greater<int>());
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= amount)
        {
            int c = floor(amount / arr[i]);
            res += c;
            amount -= c * arr[i];
        }
        if (amount == 0)
            break;
    }
    cout << res;
}
int main()
{
    int arr[5] = {5, 10, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int amount = 57;
    cout << "hello" << endl;
    min_coin(arr, size, amount);

    return 0;
}