#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++)
        {
            auto itr= ump.find(target-nums[i]);
            if(itr!=ump.end()){
                return {itr->second,i};
            }
            else ump.insert({nums[i],i});
        }
      return {};
    }
};

// Leetcode 1
// use unordered map to store int and its index
// search for target - int[i] in map