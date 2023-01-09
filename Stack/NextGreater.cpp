#include <iostream>
#include <stack>
using namespace std;

void NextGreater(int arr[], int n){
    stack<int>s;
    s.push(arr[n-1]);//pushng last element
    for(int i=n-2;i>=0;i--){
while(s.empty()==false && s.top()<=arr[i])
s.pop();
int ng=(s.empty()?-1:s.top());
cout<<ng<<" ";
s.push(arr[i]);
    }
}

int main()
{

    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int S[n];
    // Fill the span values in array S[]
    NextGreater(arr, n);
    return 0;
}