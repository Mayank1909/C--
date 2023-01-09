#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> firstnegative(int arr[], int n, int k)
{
    vector<int> ans;
    deque<int> list;
    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[j] < 0)
            list.push_back(arr[j]);

        if (j - i + 1 < k)
        {
            j++;
            continue;
        }
        else if (j - i + 1 == k)
        {
            if (list.empty() == false)
            {
                ans.push_back(list.front());
                if (arr[i] == list.front())
                    list.pop_front();
            }
            else
            {
                ans.push_back(0);
            }

            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> ans = firstnegative(arr, n, k);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}