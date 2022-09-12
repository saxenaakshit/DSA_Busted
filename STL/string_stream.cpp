#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    stringstream ss;
    string s="123";
    //convert to int;
    int a;
    ss<<s;
    ss>>a;
    cout<<s+"12"<<endl;
    cout<<a+12<<endl;
return 0;
}
