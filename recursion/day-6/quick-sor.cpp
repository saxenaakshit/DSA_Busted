#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int parti(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;

    //counting the elements less than the pivot element
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }
    //finding out the correct positon of the pivot and swaping it
    int pivotind=s+cnt;
    swap(arr[s],arr[pivotind]);


    int i=s;
    int j=e;
    while(i<pivotind && j>pivotind){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotind && j>pivotind){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotind;
}


void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    //finding out where to do partition
    int p=parti(arr,s,e);

    //sort left part
    quicksort(arr,s,p-1);

    //sort right part
    quicksort(arr,p+1,e);
}
int main(){
     int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
