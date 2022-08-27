#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <pair<int,int>> s;
    s.push({1,2});
    s.push({2,3});
    s.push({3,4});
    cout<<s.top().first<<endl; 
    s.pop();
    cout<<s.top().first<<endl; 
    
    stack <int> s1;
    s1.push(1);
    s1.push(4);
    s1.push(6);

    cout<<"size before pop: "<<endl;
    cout<<s1.size()<<endl;


    s1.pop();

     cout<<"size after pop: "<<endl;
    cout<<s1.size()<<endl;
    
return 0;
}
