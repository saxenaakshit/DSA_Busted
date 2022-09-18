#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void say(int n,string arr[]){
    if(n==0){
        return;
    }
    int k=n%10;
    n=n/10;
    say(n,arr);
    cout<<arr[k]<<endl;
    
}
int main(){
    int n;
    cin>>n;

    string arr[10]={"zero","one","two","three","four","five","six","sevem","eight","nine"};
    say(n,arr);
return 0;
}
