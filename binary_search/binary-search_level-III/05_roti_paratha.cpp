#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isposs(int arr[],int n,int num,int mid){
     int sum=0;
    for(int i=0;i<n;i++){
        int count=0;
        int k=1;
       
        int time=mid;
        while(time>0){
            time=time-k*arr[i];
        if (time >= 0)
            {
                count++;
                k++;
            }
        }
        sum += count;
        //cout << count << endl;
    }
    //cout << "parathas made " << sum << endl;
    if (sum < num)
        return false;
    return true;
        }
    

int main() {
    int num;
	
	int n;

	cin>>n>>num;
	
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int e=*min_element (arr, arr+n)*(num*(num+1))/2;
	
	int s=0;
	int ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isposs(arr,n,num,mid)){
			ans=mid;
			e=mid-1;
		}
		else 
		s=mid+1;
		mid=s+(e-s)/2;
	}
	cout<<ans;
	// your code goes here
	return 0;
}
