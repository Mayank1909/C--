// #include<iostream>
// using namespace std;

// int main(){
// int **arr;
// int m=3,n=2;
// arr=new int *[m];
// for(int i=0;i<m;i++){
//     arr[i]= new int[n];
//     for(int j=0;j<n;j++){
//         arr[i][j]=i;
//         cout<<arr[i][j]<<" ";
//     }
// }
// return 0;
// }
//2.
#include<iostream>
using namespace std;
void Print(int **arr, int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
int main(){
int **arr;// pointer to pointer  1;
int m=3,n=2;
//int *arr[m]  array of pointers  can be used in place of 1 and 2;
arr= new int *[m]; //2
for(int i=0;i<m;i++){
    arr[i]=new int [n];//dynamically allocated rows of fixed sizzes
    for(int j=0;j<n;j++){
        arr[i][j]=i;
        cout<<arr[i][j]<<" ";
}
}

return 0;
}
