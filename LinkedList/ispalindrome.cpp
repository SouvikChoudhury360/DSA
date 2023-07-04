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

    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != nullptr and fast->next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        fast = head;
        slow = reverseList(slow);
        while(slow != nullptr){
            cout<<slow->val<<" "<<fast->val<<"\n";
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};

// Leetcode 234
// find mid
// reverse 2nd half
// check 1st and 2nd reverse half