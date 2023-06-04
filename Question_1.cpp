/*
Question 1

Convert 1D Array Into 2D Array

You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using **all** the elements from original.

The elements from indices 0 to n - 1 (**inclusive**) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (**inclusive**) should form the second row of the constructed 2D array, and so on.

Return an m x n *2D array constructed according to the above procedure, or an empty 2D array if it is impossible*.

*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> convertArray(vector<int>&nums,int m,int n){
    
        if(m*n !=nums.size()) return {};
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<nums.size();i++){
            ans[i/n][i%n]=nums[i];
        }
        return ans;
    }
int main(){
    vector<int> ans={1,2,3,4};
    vector<vector<int>> v=convertArray(ans,2,2);
    cout<<"Converted aray is "<<endl;
    for(int i=0;i<v.size();i++){
        for(int j;j<v[i].size();j++){
          cout<<v[i][j]<<" ";

    }
    cout<<endl;
}
return 0;
}
