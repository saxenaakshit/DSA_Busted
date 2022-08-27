#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
      int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;

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
int f=firstocc(arr,n,key);
int l=lastocc(arr,n,key);

cout<<"first occurences "<<f<<endl;
cout<<"last occurences: "<<l<<endl;
cout<<"total number of occurences: "<<l-f+1;

return 0;
}
