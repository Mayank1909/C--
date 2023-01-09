#include <bits/stdc++.h>
using namespace std;
// bool checkPrime(int n)
// {
//     for (int i = 2; i * i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
bool checkPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int n;
    cin >> n;
    bool ans = checkPrime(n);
    if (ans == true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
