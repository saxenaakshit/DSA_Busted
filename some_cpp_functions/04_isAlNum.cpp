//it used to check if the inserted character is alphabet or number or not
//isalpha and isnum can also be used

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
string s ="aku#";
if(isalnum(s[2])){
    cout<<"it is alphabet or number"<<endl;
}
else
cout<< " it is nor a number nither a alphabet"<<endl;
return 0;
}
