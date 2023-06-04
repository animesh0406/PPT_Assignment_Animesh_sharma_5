/*
<aside>
💡 **Question 4**

Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

- answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
- answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

**Note** that the integers in the lists may be returned in **any** order.

**Example 1:**

**Input:** nums1 = [1,2,3], nums2 = [2,4,6]

**Output:** [[1,3],[4,6]]

**Explanation:**

For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

</aside>
*/
#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> differ(vector<int>& nums1, vector<int>& nums2) {
            int n1 = nums1.size();
        int n2 = nums2.size();
        set<int>s1,s2;// this are going store them in sorted order and duplicate elements are going to be removed
        for(int i=0;i<n1;i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            s2.insert(nums2[i]);
        }
        vector<vector<int>>ans;
        vector<int>temp;
        for(auto it : s1){
            if(s2.find(it)==s2.end()){//which values of s1 are not present in s2 they are the unique values of nums1
                temp.push_back(it);
            }
        }
        ans.push_back(temp);
        temp.clear();
        for(auto it : s2){
            if(s1.find(it)==s1.end()){//which values of s2 are not present in s1 they are the unique values of nums2
                temp.push_back(it);
            }
        }
        ans.push_back(temp);
        return ans;
    }
  
