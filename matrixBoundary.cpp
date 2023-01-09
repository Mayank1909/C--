#include<iostream>
using namespace std;
#define R 4
#define C 4
void Boundary(int mat[][C],int n){

if(R==1){
     for(int i=0;i<C;i++){
        cout<<mat[0][i]<<" ";
    }
}
    else if(C==1){
        for(int i=0;i<R;i++){
            cout<<mat[i][0]<<" ";
        }
    }
    
    else {
        for(int i=0;i<C;i++)
        cout<<mat[0][i]<<" ";

        for(int i=1;i<R;i++)
        cout<<mat[i][C-1]<<" ";

        for(int i=C-2;i>=0;i--){
            cout<<mat[R-1][i]<<" ";
        }
        for(int i=R-1;i>=1;i--){
            cout<<mat[i][0]<<" ";
        }
    }

}
int main()
{
    int mat[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    Boundary(mat,4);
    return 0;
}
