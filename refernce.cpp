#include<iostream>
#include<vector>
using namespace std;
// void swap(int &x,int &y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
void print(vector<int>&v){
    for(auto x:v){
        cout<<x<<" ";
    }
} 
int main()
{
// 1    int x=10;
//     int &y=x;
//     cout<<y<<endl;
//     x=x+5;
//     cout<<y<<" "<<endl;
//     y=y+5;
//     cout<<x;
// 2   int x=10,y=15;
// swap(x,y);
// cout<<x<<" "<<y;
vector<int>v;
for(int i=0;i<1000;i++)
v.push_back(i);
print(v); 
 return 0;
}