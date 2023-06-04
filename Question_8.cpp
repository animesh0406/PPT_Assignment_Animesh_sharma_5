/*
<aside>
💡 **Question 8**

An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

**Example 1:**

**Input:** changed = [1,3,4,2,6,8]

**Output:** [1,3,4]

**Explanation:** One possible original array could be [1,3,4]:

- Twice the value of 1 is 1 * 2 = 2.
- Twice the value of 3 is 3 * 2 = 6.
- Twice the value of 4 is 4 * 2 = 8.

Other original arrays could be [4,3,1] or [3,1,4].

</aside>
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() & 1) return {};
        int n=changed.size();
        int cnt=0;
        vector<int >v;
        sort(changed.begin(),changed.end());
        unordered_map<int,int> mp;
        for(auto it:changed)
        {
                mp[it]++;
        }
        
        for(auto it:changed){
            int x=it;
            if(mp[x]%2==0 && x==0 && mp[x]>=2) // for 0 we are checking it even no of time of occurrance because mp[x]==mp[2*x]
            {
                v.push_back(x);
                cout<<x<<endl;
                mp[x]-=2;
            }
            if(mp.find(2*x)!=mp.end() && x!=0)
            {                
                if(mp[x]>0 && mp[2 * x] > 0)
                {
                    v.push_back(x);
                    mp[x]--;                    
                    mp[2*x]--;                   
                }   
            }
        }
        if(v.size()==n/2) return v;
        v.clear();
        return v;
    }