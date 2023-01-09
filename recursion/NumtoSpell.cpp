#include <bits/stdc++.h>
using namespace std;
void printSpell(int n, string str)
{
    if (n == 0)
        return;

    printSpell(n / 10, str);
    int number = n % 10;
    cout << str[number];
    cout << str[n % 10];
}
int main()
{
    int n;
    cout << "input a number here:";
    cin >> n;
    string str[10] = {"zero", "one", "two", "Three", "four", "five", "six", "seven", "eight", "nine"};
    printSpell(n, str);

    return 0;
}