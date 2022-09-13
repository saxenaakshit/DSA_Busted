#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int max_ele(int arr[],int n){
    if(n==1){
         return arr[0];
    }
    int max1;
    max1=max(max_ele(arr,n-1),arr[n-1]);
    
    return max1;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_ele(arr,n)<<endl;
return 0;
}
