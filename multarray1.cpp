/*#include<iostream>
using namespace std;
int main(){
    int m=3 ,n=2;
    int *arr[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[m];

    }
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        arr[i][j]=10;
        cout<<arr[i][j]<<endl;
    }
}
return 0;
}*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=3,n=2;
    vector<int>arr[m];
    for(int i=0;i<m;i++){
         for(int j=0;j<n;j++)
       arr[i].push_back(10);
    }

 for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
return 0;
}

