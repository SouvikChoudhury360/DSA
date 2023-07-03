#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long ans = INT_MAX;
        for(int i=0;i<=a.size()-m;i++){
            ans = min(ans, a[i+m-1] - a[i]);
        }
        return ans;
    }   
};


// GFG Chocolate Distribution Problem
// Sort and sliding window of m size check min difference
