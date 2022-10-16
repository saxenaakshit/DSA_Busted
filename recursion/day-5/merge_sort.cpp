#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
int mid=(s+e)/2;
int len1=mid-s+1;
int len2=e-mid;
int mainind=s;
int *arr1=new int[len1];
int *arr2=new int[len2];

//distribution of the array
for(int i=0;i<len1;i++){
    arr1[i]=arr[mainind++];
}
mainind=mid+1;
for(int i=0;i<len2;i++ ){
    arr2[i]=arr[mainind++];
}
//sort and merge

int a1=0;
int a2=0;
mainind=s;
while(a1<len1 && a2<len2 ){
    if(arr1[a1]>arr2[a2]){
        arr[mainind++]=arr2[a2++];
    }
    else
    arr[mainind++]=arr1[a1++];
} 

while(a1<len1){
    arr[mainind++]=arr1[a1++];
}
while(a2<len2){
     arr[mainind++]=arr2[a2++];
}

}
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    //sort left part
    mergesort(arr,s,mid);

    //sort right part
    mergesort(arr,mid+1,e);

    //merge the array
    merge(arr,s,e);
}
int main(){
 int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
