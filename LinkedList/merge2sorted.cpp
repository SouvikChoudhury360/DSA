#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* ans = new ListNode(-1, nullptr);
        ListNode* t3 = ans;
        while(t1 != nullptr and t2 != nullptr){
            if(t1->val >= t2->val){
                t3->next = new ListNode(t2->val, nullptr);
                t3 = t3->next;
                t2 = t2->next;
            }
            else{
                t3->next = new ListNode(t1->val, nullptr);
                t3 = t3->next;
                t1 = t1->next;
            }
        }
        while(t1 != nullptr){
            t3->next = new ListNode(t1->val, nullptr);
            t3 = t3->next;
            t1 = t1->next;
        }
        while(t2 != nullptr){
            t3->next = new ListNode(t2->val, nullptr);
            t3 = t3->next;
            t2 = t2->next;
        }
        return ans->next;
    }
};

// Leetcode 21
// same as merge 2 sorted in vector 