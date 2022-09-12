#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int num){
if(num==0){
    return 1;
}
int small=fact(num-1);
int big=num*small;
return big;
}
int main(){
    int num;
    cin>>num;

    cout<<fact(num)<<endl;
return 0;
}
