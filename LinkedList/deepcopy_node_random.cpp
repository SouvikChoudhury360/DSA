#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return nullptr;
        unordered_map<Node*, Node*> m;
        Node* copy = new Node(head->val);
        m[head] = copy;
        Node* t2 = copy;
        Node* temp = head->next;
        while(temp != nullptr){
            Node* neew = new Node(temp->val);
            t2->next = neew;
            m[temp] = neew;
            t2 = t2->next;
            temp = temp->next;
        }
        temp = head;
        t2 = copy;
        while(temp != nullptr){
            if(temp->random != nullptr)
                t2 -> random = m[temp->random];
            t2 = t2->next;
            temp = temp->next;
        }
        return copy;
    }
};

// Leetcode 138
// Copy simple ll first
// create mapping of real and copy nodes
// assign corresponding random pointers