#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (auto i : arr)
        {
            cin >> arr[i];
        }
        int count1 = 0;
        int count2 = 0;
        int Max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= Max)
                count1++;
            else
                count2++;
        }
        cout << abs(count1 + count2) << endl;
    }

    return 0;
}