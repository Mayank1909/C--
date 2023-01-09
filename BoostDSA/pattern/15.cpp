// A
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        int num = 65;
        for (int j = 0; j <= i; j++)
        {
            char ch = char(num);
            cout << ch << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}