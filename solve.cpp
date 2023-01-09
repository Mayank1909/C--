#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long>v(n);
    long long inc = 0,  dec= 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if (v[i] % 3 == 1)
        {
            inc++;
        }
        else if (v[i] % 3 == 2)
        {
            dec++;
        }
    }
    if (inc == 0 && dec== 0)
    {
        cout << 0 << endl;
        return;
    }
    else if (inc == dec)
    {
        cout << inc << endl;
        return;
    }
    else if (inc != dec)
    {
        if (abs(inc - dec) % 3 != 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            int cnt = min(inc,dec);
            cnt += abs(inc- dec) / 3 * 2;
            cout << cnt << endl;
            return;
        }
    }