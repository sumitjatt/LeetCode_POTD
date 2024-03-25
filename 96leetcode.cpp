#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for (auto i = m.begin(); i != m.end(); i++){
            if(i->second == 2) v.push_back(i->first);
        }
        return v;
    }
};