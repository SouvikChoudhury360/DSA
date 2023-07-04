#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        ListNode* ans = nullptr;
        while(t1 != nullptr){
            t1->val = t1->val * (-1);
            t1 = t1->next;
        }
        while(t2 != nullptr){
            if(t2->val < 0){
                ans = t2;
                break;
            }
            t2 = t2->next;
        }
        t1 = headA;
        while(t1 != nullptr){
            t1->val = t1->val * (-1);
            t1 = t1->next;
        }
        return ans;   
    }
};

// Leetcode 160
// make all nodes of 1st ll negative
// traverse 2nd ll and check for 1st negative node, that is intersection
// make all nodes of 1st ll positive