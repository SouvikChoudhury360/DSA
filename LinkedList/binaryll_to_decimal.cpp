#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        int idx = 0;
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            size++;
            temp = temp -> next;
        }
        temp = head;
        while(temp != nullptr){
            ans += temp->val * pow(2, size - idx - 1);
            idx++;
            temp = temp->next;
        }
        return ans;
    }
};

// Leetcode 1290
// traverse and assign 