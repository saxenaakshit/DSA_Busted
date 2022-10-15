#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int rec(int n,int k){
    if(k==0){
        return 1;
    }
    if(k==1){
        return n;
    }
    int ans=rec(n,k/2);
    if(k%2==0){
        return ans*ans;
    }
    else 
    return n*ans*ans;
   
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<rec(n,k)<<endl;
return 0;
}
