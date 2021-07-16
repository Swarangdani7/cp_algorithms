// Sorting technique : Selection sort
// Time Complextity : Best case[O(n^2)] Average case[O(n^2)] Worst case[O(n^2)]
// Space Complexity : O(1)
// Stable/Unstable : Unstable

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
		int Min = i;
		for(int j=i+1; j<n; ++j){
			if(arr[j] <= arr[Min]){
				Min = j;
			}
		}
		swap(arr[i],arr[Min]);
	}
	
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}