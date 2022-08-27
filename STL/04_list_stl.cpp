#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    list <int> l;
    //no direct access possible
    //only accessable through loops
    l.push_back(5);
    l.push_back(6);
    l.push_front(4);

    cout<<"printing: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    } 

    l.pop_back();
    cout<<endl;
    cout<<"is empty? "<<l.empty()<<endl;
    cout<<l.size();
return 0;
}
