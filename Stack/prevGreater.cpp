#include <iostream>
#include <stack>
using namespace std;

// A stack based efficient method to calculate
// stock span values
void PrevGreater(int arr[],int n){
stack<int>s;
s.push(arr[0]);
// cout<<-1<<" ";
for(int i=0;i<n;i++){
while(s.empty()==false &&s.top()<=arr[i])
s.pop();
int pg=(s.empty())?-1:s.top();
cout<<pg<<" ";
s.push(arr[i]);
}
}

// A utility function to print elements of array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver program to test above function
int main()
{
	int arr[] = { 15,10,18,12,4,6,2,8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int S[n];

	// Fill the span values in array S[]
	PrevGreater(arr,n);

	// print the calculated span values
	//printArray(S, n);

	return 0;
}
