#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m.insert({1,"akshit"});
    m.insert({2,"saxena"});
    m.insert({3,"ji"});

    map<int,string> ::iterator it=m.begin();

    for(auto i:m){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }
    cout<<"is empty? "<<m.empty();


return 0;
}
