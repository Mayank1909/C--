// A B C D E
// A B C D
// A B C
// A B
// A
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int num = 65;
        for (int j = 0; j < 5 - i; j++)
        {
            char ch = char(num);
            cout << ch << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}