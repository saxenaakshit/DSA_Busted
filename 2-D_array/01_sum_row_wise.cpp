#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n=1;
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        
        cout<<"sum of "<<n<<" row is: "<<sum<<endl;
        n++;
        sum=0;
    }
return 0;
}
