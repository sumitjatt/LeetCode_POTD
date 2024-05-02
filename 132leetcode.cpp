#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p = 0 , q = nums.size()-1;
        while(p<q && nums[p]<0 && nums[q]>0){
            int k = nums[p]*-1;
            if(k == nums[q]) return nums[q];
            else if(k>nums[q]) p++;
            else q--;
        
        }
        return -1;
    }
};