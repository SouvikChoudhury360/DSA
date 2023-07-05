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
        ListNode* prev = nullptr;
        while(temp != nullptr and temp->next != nullptr){
            bool flag = false;
            while(temp->next != nullptr and temp->val == temp->next->val){
                temp->next = temp->next->next;
                flag = true;
            }
            if(flag and prev != nullptr){
                prev->next = prev->next->next;
                temp = prev->next;
            }
            else if(flag and prev == nullptr){
                head = head->next;
                temp = temp->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};


// Leetcode 82
// simple traversal and update next to next unique node
// also keep a track if the node occured more tha once then delete it
