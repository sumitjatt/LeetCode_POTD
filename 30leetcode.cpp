#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
        unordered_map<int,int> m;
        for(auto i : mp){
            m[i.second]++;
        }
        for(auto j : m){
            if(j.second>1) return false;
        }
        return true;
    }
};