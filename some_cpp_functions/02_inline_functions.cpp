#include<iostream>
#include <bits/stdc++.h>
using namespace std;

inline bool isgreater(int a,int b){//if the code is of 1-3 lines then inline functions can be used and can't be used in any other case
    return (a>b)?true:false;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<isgreater(a,b)<<endl;

return 0;
}
//inline function will replace the code with the function call
