//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        int k = 0;
        while (k < 2 * i - 1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        int k = 0;
        while (k <= 2 * 5 - 2 * i)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }
    return 0;
}