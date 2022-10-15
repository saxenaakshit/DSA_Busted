#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sumarr(int arr[],int size){
    int s=0;
    if(size==0){
        return s;
    }
    
    return sumarr(arr,size-1)+arr[size-1];
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumarr(arr,n);
    
return 0;}
