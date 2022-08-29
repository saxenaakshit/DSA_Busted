
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void print(string s,string c=""){//can only be right to left
//it makes the parameters optional to enter
cout<<s<<" "<<c;
}
int main(){
    string s,c;
    cin>>s;
    //cin>>c;
    print(s,c);
return 0;
}
