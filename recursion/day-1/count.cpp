#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void count(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n<<endl;
    //recursive call->tail recursion
    count(n-1);
   


}
int main(){
    int n;
    cin>>n;
    count(n);
return 0;
}
