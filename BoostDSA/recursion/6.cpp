#include <iostream>
using namespace std;
bool stringPallin(string s, int n)
{
    int left = 0, right = n - 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[left] != s[right])
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool ans = stringPallin(s, n);
    if (ans == true)
    {
        cout << "yes pallen";
    }
    else
    {
        cout << "not pallen";
    }

    return 0;
}