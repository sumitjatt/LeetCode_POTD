#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        int sum = 1;
        prefix[0]=sum;
        for(int i = 1 ; i < nums.size() ; i++){
            sum *= nums[i-1];
            prefix[i] = sum;
        }
        sum = 1;
        vector<int> sufix(nums.size());
        sufix[nums.size()-1] = sum;
        for(int i = nums.size()-2 ; i>=0 ; i--){
            sum *= nums[i+1];
            sufix[i] = sum;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            sufix[i] *= prefix[i];
        }
        return sufix;
    }
};