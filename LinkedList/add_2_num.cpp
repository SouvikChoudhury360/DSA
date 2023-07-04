#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode() : val(0), next(nullptr) {}
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverse (ListNode*head)
    {
        ListNode* current=head;
        ListNode* prev=0;
        ListNode* forw=0;

        while(current!=0)
        {
            forw=current->next;
            current->next=prev;
            prev=current;
            current=forw;
        }

        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* list1= reverse(l1);
        ListNode* list2= reverse(l2);

        ListNode* dum=new ListNode();
        ListNode* temp=dum;
        int carry=0;

        while(list1!=0 || list2!=0||carry!=0)
        {
            int sum=0;
            if(list1!=0)
            {
                sum+=list1->val;
                list1=list1->next;
            }
            if(list2!=0)
            {
                sum+=list2->val;
                list2=list2->next;
            }

            sum+=carry;
            carry=sum/10;
            ListNode* node= new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        ListNode* ans= dum->next;

        ListNode* list= reverse(ans);

        return list;

        
    }
};


// Leetcode 445
// Reverse both ll
// add with carryforward
