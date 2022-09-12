#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
if(n==0){
    return 0;
}
if(n==1){
    return 1;
}
int first=fibo(n-1);
int second=fibo(n-2);
int ans=first+second;
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
return 0;
}
