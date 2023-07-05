#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        int diff = size - n;
        if(diff == 0) return head->next;
        temp = head;
        for(int i=1;i<diff;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};


// Leetcode 19
// get size and remove nth from end