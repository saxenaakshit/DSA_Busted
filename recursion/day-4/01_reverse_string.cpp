#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(string &s,int st,int n){

if(st>n){
return;
}
swap(s[st],s[n]);
st++;
n--;
reverse(s,st,n);
}
int main(){
    string s;
    cin>>s;
    int i=s.length();
    reverse(s,0,i-1);
    cout<<s;
return 0;
}
