//    A
//   ABA
//  ABCBA
// ABCDCBA
#include <iostream>
using namespace std;
int main()
{
    char num = 65;
    int k = 4; // n-1
    for (int i = 1; i <= 5; i++)
    {

        for (int j = k; j >= 1; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << num++;
        }
        num--;
        for (int j = 1; j < i; j++)
        {
            cout << --num;
        }
        k--;
        cout << endl;
    }

    return 0;
}