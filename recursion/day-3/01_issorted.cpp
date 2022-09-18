#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    if(n==0 || n==1 ){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    issorted(arr,n-1);
   // return 0;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<issorted(arr,n)<<endl;
return 0;}
