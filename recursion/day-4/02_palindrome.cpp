#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool pal(string &s,int i){
    int j=s.length()-i-1;
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return pal(s,i+1);
}
int main(){
     string s;
    cin>>s;
    int i=s.length();
    cout<<pal(s,0);
    
return 0;
}
