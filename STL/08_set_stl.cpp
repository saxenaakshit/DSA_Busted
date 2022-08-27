#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;//based on bst
    //unique and sorted

    s.insert(6);
    s.insert(6);
    s.insert(3);
    s.insert(4);
    s.insert(4);

    set<int>::iterator it=s.begin();
    for(;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    it=s.find(6);
    cout<<"6 present : "<<*it<<endl;

    cout<<"is 7 present? "<<s.count(7);
    s.empty();

return 0;
}
