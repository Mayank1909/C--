#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int r = 1;

    while (r--)
    {
        int temp = v[0];
        for (int i = 0; i < v.size(); i++)
        {
            v[i] = v[i + 1];
        }
        v[v.size() - 1] = temp;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}