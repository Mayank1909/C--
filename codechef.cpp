#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        if (n % 2 == 0)
        {
            for (int i = 1, j = n, k = 1; i <= n; i++)
            {

                if (i % 2 != 0)
                    v.push_back(k++);
                else
                    v.push_back(j--);
            }
        }
        else
        {
            for (int i = 1, j = n, k = 1; i <= n; i++)
            {

                if (i % 2 != 0)
                    v.push_back(j--);
                else
                    v.push_back(k++);
            }
        }
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}