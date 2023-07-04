#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp != nullptr and temp->next != nullptr){
            while(temp->next != nullptr and temp->val == temp->next->val){
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }
        return head;
    }
};

//Leetcode 83
// simple traversal and update next to next unique node