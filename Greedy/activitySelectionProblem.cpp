#include <bits/stdc++.h>
using namespace std;
struct Activity
{
    int start, finish;
};
bool ActivityCompare(Activity s1, Activity s2)
{
    return s1.finish < s2.finish;
}
void printMax(Activity arr[], int n)
{
    sort(arr, arr + n, ActivityCompare);
    // first activity is always sselected
    int i = 0;
    cout << "(" << arr[i].start << "," << arr[i].finish << ")"
         << ",";
    // for rest of th activity
    for (int j = 0; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            cout << "(" << arr[j].start << "," << arr[j].finish << ")"
                 << ",";
            i = j;
        }
    }
}
int main()
{
    Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMax(arr, n);
    return 0;
}