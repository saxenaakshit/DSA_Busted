#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isposs(int arr[],int n,int num,int mid){
     int count=0;int time=0;
    for(int i=0;i<n;i++){
        
       
        int time=arr[i];
        int j=2;
        while(time<=mid){
            count++;
            time=time+(arr[i]*j);
            j++;
        }
        if (count>=num)
            {
               return 1;
            }
        }
        return 0;
        //cout << count << endl;
    }
    //cout << "parathas made " << sum << endl;
    
    

int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
    int num;
	
	int n;

	cin>>num;
    cin>>n;
	
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int e=arr[n-1]*(num*num+1)/2;
	
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
}
