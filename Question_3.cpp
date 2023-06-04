/*

Question 3
Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

Example 1:

Input: nums = [-4,-1,0,3,10]

Output: [0,1,9,16,100]

**Explanation:** After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100]

*/

#include <bits/stdc++.h>
using namespace std;
void sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=pow(nums[i],2);
        }
         sort(nums.begin(),nums.end());
        
    }
int main(){
    vector<int>v={-4,-1,0,3,10};
    cout<<"The given array is "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"Squared array is "<<endl;
    sortedSquares(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}