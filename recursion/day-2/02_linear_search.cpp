#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int linear(int arr[],int n,int tar){
    if(arr[n]==tar){
        return n;
    }
   if(n<0){
    return -1;
   }
    linear(arr,n-1,tar);

}
int main(){
    int n;
    cin>>n;
    
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<linear(arr,n-1,target)<<endl;
return 0;
}

