#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(24);
    v.push_back(11);
    v.push_back(13);

    /* 1.binary search
       2.sort
       3. rotate
       4.reverse
       5.upper&lower bound
       6.max_min
       */
    
    string s="ahtsa";
    sort(v.begin(),v.end());
    cout<<binary_search(v.begin(),v.end(),4)<<endl;

    reverse(s.begin(),s.end());

    rotate(v.begin(),v.begin()+2,v.end());

    for(auto i:v){
        cout<<i<<" ";
    }
cout<<endl;
cout<<s;


return 0;
}
