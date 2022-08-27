#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool binary__( int **arr,int mid,int num,int target){
        int s=0;
        int e=num-1;
        int mid1=(s+e)/2;
        while(s<=e){
            if(arr[mid][mid1]==target){
                return true;
            }
            else if(arr[mid][mid1]<target){
                s=mid1+1;
            }
            else 
                e=mid1-1;
            mid1=(s+e)/2;
        }
        return false;
    }
    bool searchMatrix(int **matrix,int n,int m ,int target) {
       
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(matrix[mid][0]==target || matrix[n-1-1][mid]==target){
                return true;
            }
            else if(matrix[mid][0]>target){
                e=mid-1;
            }
            else if(matrix[mid][0]<target){
                s=mid+1;
            }
            else if(matrix[mid][0]<target && matrix[mid][n-1]>target){
                return binary__(matrix,mid,n,target);
            }
            mid=(s+e)/2;
        }
        return false;
    }

int main(){
    int n;
    cin>>n;
    int tar;
    int **arr=new int[n][];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cin>>tar;
    cout<<searchMatrix(arr,n,n,tar);
return 0;
}
