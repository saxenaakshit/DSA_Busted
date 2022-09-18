#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int rec_bin(int arr[],int s,int n,int target){
int e=n;
int mid=s+(e-s)/2;
if(s>e){
    return -1;
}
if(arr[mid]==target){
    return mid;
}
if(arr[mid]>target){
    return rec_bin(arr,s,mid-1,target);
}
else
 return rec_bin(arr,mid+1,e,target);


}
int main(){
    int target;
    int size;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<rec_bin(arr,0,size-1,target);
    
return 0;
}
