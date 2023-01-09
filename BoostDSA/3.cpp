#include <iostream>
using namespace std;
int deleteRepeatingchar(string s, int n)
{
    int deletion = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' || s[i] == 'B' && s[i + 1] == 'A' || s[i] == 'a' && s[i + 1] == 'b' || s[i] == 'b' && s[i + 1] == 'a')
            continue;
        else
            deletion += 1;
    }
    return deletion;
}
int main()
{

    string a;
    cout << "Enter a string : ";
    cin >> a;
    int n = a.length();
    int deletion = deleteRepeatingchar(a, n);
    cout << "deletion done are: " << deletion - 1 << endl;
    return 0;
}