#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isposs(int arr[],int n,int k,int mid){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>mid)
		sum+=arr[i]-mid;
	}
	if(sum>=k){
		return true;
	}
	
	return false;
	
}

int main() {
	int n;

	int k;
	cin>>n>>k;
	
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int e=*max_element (arr, arr+n);
	
	int s=0;
	int ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isposs(arr,n,k,mid)){
			ans=mid;
			s=mid+1;
		}
		else 
		e=mid-1;
		mid=s+(e-s)/2;
	}
	cout<<ans;
	// your code goes here
	return 0;
}