#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int binary__(int arr[],int n,int key){
    int st=0;
    int en=n-1;
    int mid=st+(en-st)/2;
    while(st<=en){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            en=mid-1;
        }
        else
        st=mid+1;

         mid=st+(en-st)/2;
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
cout<<"enter the key: "<<endl;
cin>>key;

cout<<"the index of the key is: "<<binary__(arr,n,key)+1;
return 0;
}
