#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> z;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    z.push_back({i, j});
                }
            }
        }
        cout<<z.size();
        for(int x=0;x<z.size();x++){
            for(int i=0;i<matrix.size();i++){
                matrix[i][z[x].second] = 0;
            }
            for(int i=0;i<matrix[0].size();i++){
                matrix[z[x].first][i] = 0;
            }
        }
        return;
    }
};

// Leetcode 73
// Store all zeroes in a vector and then set their respective columns and rows zero.