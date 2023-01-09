#include<iostream>//frequncy of array elements
#include<unordered_map>
using namespace std;
// int printFrequency(int arr[],int n){//naive sloution
//     for(int i=0;i<n;i++)
//     {
//         bool flag=false;
//         for(int j=0;j<i;j++){
//         if(arr[i]==arr[j]){
//             flag=true;
//             break;
//         }
//         }
//         if(flag==true)
//         continue;
//         int freq=1;
//         for(int j=i+1;j<n;j++)
//         if(arr[i]==arr[j])
//         freq++;
//         cout<<arr[i]<<" "<<freq<<endl;
    
//     }

// }
 //efficient solution
int countfreq(int arr[], int n){


 unordered_map<int ,int>h;
 for (int i = 0; i < n; i++)
        h[arr[i]]++;
 for(auto e:h)
 cout<<e.first<<" "<<e.second<<endl;

}
int main()
 {
    int arr[]={10,20,30,40,10,20,20};
     int n=sizeof(arr)/sizeof(arr[0]);
//     printFrequency(arr,n);
countfreq(arr,n);
  return 0;
 }