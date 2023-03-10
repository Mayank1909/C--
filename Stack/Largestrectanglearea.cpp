// #include <iostream>
// #include <stack>
// using namespace std;
// int NextSmaller(int arr[], int n)
// {
//     stack<int> s;
//     s.push(arr[n - 1]); //pushng last element
//     for (int i = n - 2; i >= 0; i--)
//     {
//         while (s.empty() == false && s.top() >= arr[i])
//             s.pop();
//         int ns = (s.empty() ? -1 : s.top());
//         //cout << ns << " ";
//         s.push(arr[i]);
        
//     }
//     return s;
// }
// int PrevSmaller(int arr[], int n)
// {
//     int ps[n];
//     stack<int> s;
//     s.push(arr[0]);
//     // cout<<-1<<" ";
//     for (int i = 0; i < n; i++)
//     {
//         while (s.empty() == false && s.top() >= arr[i])
//             s.pop();
//         ps[i] = (s.empty()) ? -1 : s.top();
//         //cout << ps << " ";
//         s.push(arr[i]);
        
//     }
//     return ps;
// }
// int getMaxArea(int arr[], int n)
// {
//     int res = 0;
//     int ps = PrevSmaller(arr, n);
//     int ns = NextSmaller(arr, n);

//     for (int i = 0; i < n; i++)
//     {

//         int curr = arr[i] * (ns - ps - 1);
//         res = max(res, curr);
//     }
//     return res;
// }

// int main()
// {

//     int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int S[n];
//     // Fill the span values in array S[]
//     cout<<getMaxArea(arr, n);
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


//Function to find largest rectangular area possible in a given histogram.
int getMaxArea(int arr[], int n)
{
	// Your code here
	//we create an empty stack here.
	stack<int> s;
	//we push -1 to the stack because for some elements there will be no previous
	//smaller element in the array and we can store -1 as the index for previous smaller.
	s.push(-1);
	int area = arr[0];
	int i = 0;
	//We declare left_smaller and right_smaller array of size n and initialize them with -1 and n as their default value.
	//left_smaller[i] will store the index of previous smaller element for ith element of the array.
	//right_smaller[i] will store the index of next smaller element for ith element of the array.
	vector<int> left_smaller(n, -1), right_smaller(n, n);
	while(i<n){
		while(!s.empty()&&s.top()!=-1&&arr[s.top()]>arr[i]){
			//if the current element is smaller than element with index stored on the
			//top of stack then, we pop the top element and store the current element index
			//as the right_smaller for the poped element.
			right_smaller[s.top()] = i;
			s.pop();
		}
		if(i>0&&arr[i]==arr[i-1]){
			//we use this condition to avoid the unnecessary loop to find the left_smaller.
			//since the previous element is same as current element, the left_smaller will always be the same for both.
			left_smaller[i] = left_smaller[i-1];
		}else{
			//Element with the index stored on the top of the stack is always smaller than the current element.
			//Therefore the left_smaller[i] will always be s.top().
			left_smaller[i] = s.top();
		}
		s.push(i);
		i++;
	}
	for(int j = 0; j<n; j++){
		//here we find area with every element as the smallest element in their range and compare it with the previous area.
		// in this way we get our max Area form this.
		area = max(area, arr[j]*(right_smaller[j]-left_smaller[j]-1));
	}
	return area;
}

int main()
{
	int hist[] = {6, 2, 5, 4, 5, 1, 6};
	int n = sizeof(hist)/sizeof(hist[0]);
	cout << "maxArea = " << getMaxArea(hist, n) << endl;
	return 0;
}

//This code is Contributed by Arunit Kumar.
