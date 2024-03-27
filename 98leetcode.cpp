#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int count = 0;
        int product = 1;
        int i = 0 , j = 0;
        while(j<nums.size()){
            product *= nums[j];
            while(product >= k){
                count += (j-i);
                product /= nums[i];
                i++;
            }
            j++;
        }
        while(i<nums.size()){
            count += (j-i);
            product /= nums[i];
            i++;
        }
        return count;
    }
};