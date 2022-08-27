#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    queue <string> q;//FIFO
    q.push("akshit");
    q.push("sandeep");
    q.push("saxena");

    cout<<q.front()<<endl;

    cout<<"size and front before pop: "<<endl;
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<"size and front after pop: "<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;

    cout<<"back: "<<q.back()<<endl;


return 0;
}
