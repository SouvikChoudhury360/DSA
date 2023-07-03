#include<bits/stdc++.h> 
using namespace std; 


bool findPair(int arr[], int size, int n){
    unordered_set<int> s;
    for(int i=0;i<size;i++){
        if(s.find(arr[i] + n) != s.end() || s.find(arr[i] - n) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}


// GFG Find pair with given difference
// store in unordered_set and check arr[i] + n or arr[i] - n exists or not