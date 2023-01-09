// #include<iostream>
// using namespace std;
// int squareRoot(int x){
//     int i=1;
//     while(i*i<=x)
//         i++;
// return (i-1);
    
// }
// int main(){
// int x=15;
// cout<<squareRoot(x);
// }
#include<iostream>// optimised solution
using namespace std;
int SquareRoot(int x){
    int low=0, high=x, ans=-1; 
    
    while(low<=high){
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==x){
            return mid;
        }
        else if(msq>x){
            high=mid-1;

        }
        else {
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main(){
    int x=15;
    cout<<SquareRoot(x);
}
