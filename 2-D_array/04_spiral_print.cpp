#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int sRow=0;
        int sCol=0;
        int count=0;
        int eRow=row-1;
        int eCol=col-1;
            while(count<total){//starting row
                for(int ind=sCol;ind<=eCol && count<total;ind++){
                    ans.push_back(matrix[sRow][ind]);
                    count++;
                    
                }
                sRow++;
                //ending column
                for(int ind=sRow;ind<=eRow && count<total;ind++){
                    ans.push_back(matrix[ind][eCol]);
                    count++;
                    
                }
                eCol--;
                //ending row
                for(int ind=eCol;ind>=sCol && count<total;ind--){
                    ans.push_back(matrix[eRow][ind]);
                    count++;
                    
                }
                eRow--;
                //starting column
                for(int ind=eRow;ind>=sRow && count<total;ind--){
                    ans.push_back(matrix[ind][sCol]);
                    count++;
                    
                }
                sCol++;
            }
        return ans;
            
            
    }
int main(){
    
return 0;
}
