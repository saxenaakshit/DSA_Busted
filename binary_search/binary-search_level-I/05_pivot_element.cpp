#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int pivi(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>arr[mid+1]){
            return arr[mid+1];
        }
        else if(arr[mid]<arr[mid+1]){
            e=mid;
        }
        else
        s=mid+1;
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
cout<<"the piviot element is: "<<pivi(arr,n);

return 0;
}
