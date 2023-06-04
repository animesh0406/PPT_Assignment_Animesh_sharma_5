/*
<aside>
💡 **Question 6**

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

**Example 1:**

**Input:** nums = [4,3,2,7,8,2,3,1]

**Output:**

[2,3]

</aside>
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        int i=0;
        while(i<nums.size())
        {
            if(mp[nums[i]]==0)
            {
                mp[nums[i]]++;
            }
            else
            {
                ans.push_back(nums[i]);
            }
            i++;
        }
        return ans;
    }