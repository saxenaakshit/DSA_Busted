#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> cpp;//declaration->size=0,capacity=0
    //capacity is the amount of memory being reserved for the whole vector
    //size is the element it consistt

    vector <int>cpp1(5,1);//initializing vector of size 5 with 1

    vector <int> cpp2(cpp1); //copying the vector
    cout<<"first vector"<<endl;
    for(int i:cpp1){
        cout<<i<<" ";
    } 
     cout<<endl<<"copied vector"<<endl;
    for(int i:cpp2){
        cout<<i<<" ";
    } 
    cout<<endl;

    cpp.push_back(1);
    cpp.push_back(2);
    cpp.push_back(3);
    cpp.push_back(5);

    cout<<"vector after pushing element into it: "<<endl;
    for(int i:cpp){
        cout<<i<<" ";
    } 
    cout<<endl;
    cout<<"popping out last element "<<endl;
    cpp.pop_back();
      for(int i:cpp){
        cout<<i<<" ";
    } 
    cout<<endl;
    cout<<"erasing 2nd element: ";
    cpp.erase(cpp.begin()+1);
    for(int i:cpp){
        cout<<i<<" ";
    } 
    cout<<endl;
    cout<<"deleting entire vector";
    cpp.clear();


return 0;
}
