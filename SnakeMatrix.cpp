#include <iostream>
using namespace std;
#define R 4
#define C 4
void printSnake(int mat[][C], int n)
{
     mat[4][4];
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
                cout << mat[i][j] << " ";
        }
        else
        {
            for (int j = C - 1; j >= 0; j--)
                
                {
                    cout << mat[i][j] << " ";
                }

}
    }
}
int main()
{
    int mat[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    printSnake(mat,4);
    return 0;
}

//gand maraye error arhahai.