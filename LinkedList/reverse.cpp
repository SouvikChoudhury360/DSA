#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr or head->next == nullptr){
            return head;
        }

        ListNode* temp = reverseList(head->next);
        ListNode* end = temp;
        while(end != nullptr and end->next != nullptr){
            end = end->next;
        }
        end->next = head;
        head->next = nullptr;
        return temp;
    }
};


// Leetcode 206
// Recursive, base case single element return it
// recursion will reverse the rest ll, 
// we have to set the current node to the end of the reversed ll from recursion and assign its next to null
