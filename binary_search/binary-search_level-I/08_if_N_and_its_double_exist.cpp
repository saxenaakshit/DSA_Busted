#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        sort(arr.begin(),arr.end()); //sort the array 
        
        int res; // this will store our boolean value (kind of yes or no)
        
        for(int i = 0 ; i<arr.size() ; i++) //this is the eay we will traverse over the array
        {
            res = binary_check(arr, arr[i]*2); //continuosly running the loop
            
            if(res!=i && res!=-1)
                return true;
        }
        return false;
    }
    
    public: int binary_check(vector<int>&nums , int target)
    {
        int s = 0 , e = nums.size() - 1;
        
        while(s<=e)
        {
            int mid = s + (e - s)/2;
            
            if(nums[mid] > target)
            {
                e = mid - 1;
            }
            else if(nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                return true;
            }
        }
        return -1;
    }
};
int main(){
return 0;
}
