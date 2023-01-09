#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 / 2; j++)
        {
            cout << " ";
        }
        int k = 0;
        while (k <= (2 * i - 1) / 2)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }
    for (int i = 2; i <= 5; i++)
    {

        for (int j = 1; j <= 5 / 2; j++)
        {
            cout << " ";
        }
        int k = 0;
        while (k <= (2 * 5 - 2 * i) / 2)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }
    return 0;
}