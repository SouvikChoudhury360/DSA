#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0) continue;
            swap(nums[i], nums[z]);
            z++;
        }
        return;
    }
};

// Leetcode 283
// int z keeps traverses through the zeroes and i traveses through the non zero elements
// this happens so because when nums[i] == 0, i advences to next non zero but z stays in 0. and they get swapped.
// if nums[i] not zero then i, z are in same index so swapping makes no difference. 