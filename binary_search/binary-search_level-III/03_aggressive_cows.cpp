#include<iostream>
#include <bits/stdc++.h>
using namespace std;


bool isposs(vector<int> &s, int k,int mid){
    int countCow=1;
    int lastpos=s[0];
    for(int i=0;i<s.size();i++){
        if(s[i]-lastpos>=mid){
            countCow++;
            lastpos=s[i];
            if(countCow==k){
                return true;
            }
        }
    }
    return false;
}


int aggressiveCows(vector<int> &s, int k)
{
    sort(s.begin(),s.end());
    int st=0;
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i];
    }
    int e=sum;
    
    int ans=-1;
    int mid=st+(e-st/2);
    while(st<=e){
        if(isposs(s,k,mid)){
            ans=mid;
            st=mid+1;
        }
        else 
            e=mid-1;
        mid=st+(e-st)/2;
    }
    return ans;
    
    //    Write your code here.
}
int main(){
return 0;
}