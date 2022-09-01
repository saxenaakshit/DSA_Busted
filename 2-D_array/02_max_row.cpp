#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n=1;
    int max=INT_MIN;
    int index;
    int arr[3][4]={{1,2,3,80},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        if(max<sum){
            max=sum;
            index=i;
        }
        
        
        
    }
    cout<<"sum of "<<" max row is: "<<max<<" and index is: "<<index<<endl;
return 0;
}
