#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue <int> maxi;//max by default
    priority_queue<int,vector<int>,greater<int>> mini;//mini vala priority queue

    maxi.push(8);
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);
    maxi.push(1);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"second priority queue: "<<endl;

    mini.push(9);
    mini.push(6);
    mini.push(1);
    mini.push(3);
    mini.push(13);
int k=mini.size();
    for(int i=0;i<k;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
return 0;
}
