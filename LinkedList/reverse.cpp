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
       ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

     while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
      }

       return prev;
    }
};


// Leetcode 206
// keep next element of element to be reversed
// change the next attribute
// increment prev and curr pointers
