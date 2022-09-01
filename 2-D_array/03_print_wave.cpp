#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int size;
    cout<<"size: "<<endl;
    cin>>size;
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<size;i++){
       
            if(i%2==0){
                 for(int j=0;j<size;j++){
                cout<<arr[j][i]<<" ";
            }
            }
            else{
                 for(int j=size-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
return 0;
}
