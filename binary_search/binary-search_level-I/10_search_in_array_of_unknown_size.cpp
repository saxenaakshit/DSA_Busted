#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //suppose we have an array arr with its size is unknown
    int arr[5]; int target=34//taken randomly
    int val=arr[0];
    int s=0;
    int e=1;
    while(val<target){
        s=e;
        e=2*e;
        val=arr[s];
    }

    //now apply the basic binary search with its new range

return 0;
}
