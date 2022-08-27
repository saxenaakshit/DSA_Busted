#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(4);
    d.push_front(6);
    d.push_front(1);
    cout<<"printing deque: "<<endl;
     for(int i:d){
        cout<<i<<" ";
    } 
    cout<<endl;
    cout<<"front :"<<d.front()<<endl;
    cout<<" back: "<<d.back()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"delete first element : "<<endl;
    cout<<"size: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    } 
return 0;
}
