 #include<iostream>
#include <bits/stdc++.h>
  using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                
                e=mid;
                ans=arr[mid];
            }
            mid=s+(e-s)/2;
        }
        return arr[e];
    }
   
  
    int main(){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(auto it=arr.begin();it!=arr.end();it++){
            cin>>*it;

        }
       cout<< peakIndexInMountainArray(arr);


        
    return 0;
    }
    