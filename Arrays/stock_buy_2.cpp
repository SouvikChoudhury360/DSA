#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = prices[0];
        int out = 0;

        for(int i=1; i<n; i++){
            if(prices[i]<=m){
                m = prices[i];
            }
            else{
                out += prices[i] - m;
                m = prices[i];
            }
        }

        return out;
    }
};

// Leetcode 122
// Grredy approach, m -> min element till ith index
// if ith element is smaller than m, update m
// else execute a trade and set new minimum to ith index