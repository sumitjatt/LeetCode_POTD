#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2,0);
        vector<int> m(n,0);
        for(int i = 0 ; i < n ; i++){
            m[nums[i]-1]++;
        }
        for(int i = 0 ; i < n ; i++){
            if(m[i] == 0) ans[1] = i+1;
            if(m[i] == 2) ans[0] = i+1;
        }
        return ans;
    }
};