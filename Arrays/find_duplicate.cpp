#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

// Leetcode 287
// Bring fast, slow pointer to same number
// set fast to 0th index
// as slow travelled from 0 to x (say) and fast travelled from 0 to 2x
// move fast, slow both by 1 each time
// slow travels from x to 2x and fast from 0 to x, 2 occurences
