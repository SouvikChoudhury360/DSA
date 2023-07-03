#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        while(i < n){
            nums[j] = nums[i];
            j++;
            while(i < n-1 && nums[i] == nums[i+1]){
                i++;
            }   
            i++;
        }
        return j;
    }
};

//Leetcode 26
// slow and fast pointer
// slow points to the unique array last element
// fast pointer goes ahead on getting same element