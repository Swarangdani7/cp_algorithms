// Sorting technique : Bubble sort
// Time Complextity : Best case[O(n)] Average case[O(n^2)] Worst case[O(n^2)]
// Space Complexity : O(1)
// Stable/Unstable : Stable

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin>>n;
	vector<int>arr(n); // declaring an array of size n
	
	for(int i=0; i<n; ++i){
		// taking input
		cin>>arr[i];
	}

	for(int i=0; i<n-1; ++i){
		for(int j=0; j<n-(i+1); ++j){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}