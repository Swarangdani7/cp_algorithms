// Sorting technique : Merge sort
// Time Complextity : Best case[O(nlogn)] Average case[O(nlogn)] Worst case[O(nlogn)]
// Space Complexity : O(n)
// Stable/Unstable : Stable

#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&arr,int low,int mid,int high){
	int l_sz = mid-low+1;
	int h_sz = high-mid;
	vector<int>l(l_sz+1,INT_MAX);
	vector<int>h(h_sz+1,INT_MAX);
	for(int i=0; i<l_sz; ++i){
		l[i] = arr[low+i];
	}
	for(int i=0; i<h_sz; ++i){
		h[i] = arr[mid+1+i];
	}
	int p=0,q=0;
	for(int i=low; i<=high; ++i){
		if(l[p] <= h[q]){
			arr[i] = l[p];
			p++;
		}
		else{
			arr[i] = h[q];
			q++;
		}	
	}
}

void MergeSort(vector<int>&arr,int low,int high){
	if(low == high) return;
	int mid = (low+high)/2;
	MergeSort(arr,low,mid);
	MergeSort(arr,mid+1,high);
	Merge(arr,low,mid,high);
}

int main(){
	int n;
	cin>>n;
	vector<int>arr(n); // declaring an array of size n

	for(int i=0; i<n; ++i){
		// taking input
		cin>>arr[i];
	}
	int low = 0,high = n-1;

	MergeSort(arr,low,high);

	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}