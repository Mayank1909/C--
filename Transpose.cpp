#include<iostream>
#include<stdlib.h>
using namespace std;
#define n 4
int transpose(int mat[][n],int C){ //for rotating matrices into 90 degree
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
swap(mat[i][j],mat[j][i]); //doing transpose
    }
    }
    for(int i=0;i<n;i++){
        int low =0,high =n-1;
        while(low<high){
            swap(mat[low][i],mat[high][i]);
            low++;
            high--;
        
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
    }
}
int main(){
 int mat[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    transpose(mat,4);
    return 0;
}

