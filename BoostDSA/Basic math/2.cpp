#include <iostream>
using namespace std;
int reverseN(int n)
{
    int temp;
    int number = 0;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        number = number * 10 + temp;
    }
    return number;
}
int main()
{
    int n;
    cin >> n;
    cout << reverseN(n);
    return 0;
}