#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> s;
        vector<int> ans(prices.size(), 0);
        for(int i=prices.size()-1;i>=0;i--){
            while(!s.empty()){
                int top = s.top();
                if(top <= prices[i]){
                    s.pop();
                }
                else{
                    ans[i] = top - prices[i];
                    break;
                }
            }
            if(s.empty()){
                s.push(prices[i]);
                ans[i] = 0;
                continue;
            }
        }
        int mans = 0;
        for(int i=0;i<prices.size();i++){
            mans = max(mans,ans[i]);
        }
        return mans;
    }
};

// Leetcode 121
// Next Greater Element to right modification, change -> only store in stack if stack.top > element
// Traverse from back, store the element in stack if stack empty
// if not empty check the stack elements, if greater element present then update ans else remove it from stack and at last push the array element to the stack.
// Memory optimisation: instead of vector ans, only a variale could have been taken.