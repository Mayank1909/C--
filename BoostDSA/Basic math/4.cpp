// gcd
#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    int ans;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}