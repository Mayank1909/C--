#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();

    if (s[0] == 'a' || s[0] == 'A')
        cout << "YES";
    else
        cout << "NO";

    return 0;
}