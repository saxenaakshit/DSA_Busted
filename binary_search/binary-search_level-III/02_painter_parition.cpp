#include<iostream>
#include <bits/stdc++.h>
using namespace std;


bool isposs(vector<int> &b, int k,int mid){
    int mincount=0;
    int paint=1;
    for(int i=0;i<b.size();i++){
        if(b[i]+mincount<=mid ){
            mincount+=b[i];
        }
        else{
            paint++;
            if(paint>k || b[i]>mid){
                return false;
            }
            mincount=b[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &b, int k)
{
    int s=0;
    int sum=0;
    for(int i=0;i<b.size();i++){
        sum+=b[i];
    }
    int ans=-1;
    int e=sum;
    int mid=(s+e)/2;
    while(s<=e){
        if(isposs(b,k,mid)){
            ans=mid;
            e=mid-1;
            
        }
        else 
            s=mid+1;
        mid=(s+e)/2;
    }
    return ans;
    //    Write your code here.
}
int main(){
return 0;
}