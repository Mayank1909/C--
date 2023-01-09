#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    int aage_ka_factorial = fact(n - 1);
    return n * aage_ka_factorial;
}
int main()
{
    int n;
    cout << "enter any number:" << endl;
    cin >> n;
    cout << fact(n);
    return 0;
}