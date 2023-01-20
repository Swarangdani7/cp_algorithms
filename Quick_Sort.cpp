#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int st, int ed){
	int p_index = 0;
	for(int i=0; i<ed; ++i){
		if(arr[i] < arr[ed]){
			swap(arr[i],arr[p_index]);
			p_index++;
		}
	}
	swap(arr[ed],arr[p_index]);
	return p_index;
}

void QuickSort(vector<int> &arr, int st, int ed){
	if(st >= ed) return;
	int pivot = Partition(arr,st,ed);
	QuickSort(arr,st,pivot-1);
	QuickSort(arr,pivot+1,ed);
}

int main(){
	int n;
	cin>>n;
	vector<int>arr(n); // declaring vector of size n

	for(int i=0; i<n; ++i){
		// taking input
		cin>>arr[i];
	}

	cout<<"Before Sorting: ";
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}

	// Calling QuickSort function
	QuickSort(arr,0,n-1);

	cout<<"\nAfter Sorting: ";
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}

	return 0;
}