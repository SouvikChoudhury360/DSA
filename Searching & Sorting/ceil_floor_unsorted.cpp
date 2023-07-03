#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int floor = -1, ceil = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] >= x){
            ceil = min(ceil, arr[i]);
        }
        if(arr[i] <= x){
            floor = max(floor, arr[i]);
        }
    }
    if(ceil == INT_MAX) ceil = -1;
    return {floor, ceil};
}

// GFG Ceil the Floor
// Unsorted, linear search 
// Sorted Binary Search