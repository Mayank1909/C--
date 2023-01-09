// pallindrome
#include <iostream>
using namespace std;
int pallendrome(int n)
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
    if (pallendrome(n) == n)
        cout << "yes";
    else
        cout << "no";
    return 0;
}