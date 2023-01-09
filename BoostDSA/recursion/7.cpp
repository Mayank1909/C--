// fibonacci series
#include <iostream>
using namespace std;
void fibonacci(int n)
{
    //     if (n <= 1)
    //         return n;
    //     return fibonacci(n - 1) + fibonacci(n - 2);
    int a = 0, b = 1;
    if (n < 1)
        return;
    cout << a << " ";
    for (int i = 1; i <= n; i++)
    {
        cout << b << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}
int main()
{
    int n;
    cin >> n;

    fibonacci(n);
    return 0;
}