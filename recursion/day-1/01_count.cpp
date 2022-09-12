#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void count(int n){
    //base case
    if(n==0){
        return;
    }
   
    //recursive call->head recursion
    count(n-1);
     
     //processing
     cout<<n<<endl;
   


}
int main(){
    int n;
    cin>>n;
    count(n);
return 0;
}
