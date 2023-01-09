#include<iostream>//count Distinct elements
#include<unordered_set>
using namespace std;
int CountDistinct(int arr[],int n){
    unordered_set<int>s;  //it will allow only distinct elements make an
    for(int i=0;i<n;i++)
    s.insert(arr[i]);

    return s.size();


}
int main()
{
    int arr[]={10,20,20,30,10,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<CountDistinct(arr,n);


 return 0;
}