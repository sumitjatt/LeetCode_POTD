#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++) m[nums[i]]++;
        int y = INT_MIN;
        int x;
        int z = 1;
        for(auto i = m.begin() ; i != m.end() ; i++){
            if(i->second>y){
                y = i->second;
                x = i->first;
                z = 1;
            }
            else if(i->second == y) z++;
        }
        return z*y;
    }
};