#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector <int> &A,int B,int mid){
    
   int studentCount=1;
   int pageCount=0;
   for(int i=0;i<A.size();i++){
       if(pageCount+A[i]<=mid){
           
           pageCount+=A[i];
       }
       else{
           studentCount++;
           if(studentCount>B || A[i]>mid)
           {
               return false;
           }
           
           pageCount=A[i];
       }
       
   }
   
   return true;
   
}

int books(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int s=0;
    int sum=0;
    for(auto it=A.begin();it!=A.end();it++){
        sum+=*it;
        
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        
        if(ispossible(A,B,mid)){
            ans=mid;
            e=mid-1;
        }
        
        
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
