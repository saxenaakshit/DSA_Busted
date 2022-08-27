#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int fix(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid==arr[mid]){
            return mid;
        }
        else if(mid<arr[mid]){
            e=mid-1;
        }
        else if(mid>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
cout<<"enter the size: "<<endl;
int n,key;
cin>>n;

int *arr=new int[n];
cout<<"enter the array: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}


cout<<fix(arr,n);
return 0;
}
