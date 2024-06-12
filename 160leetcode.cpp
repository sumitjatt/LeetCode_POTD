#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0 ;
        int blue = 0 ;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            if(nums[i]==0) red++;
            else if(nums[i]==1) white++;
            else blue++;
        }
        for(int i = 0 ; i < size ; i++){
            if(red>0){
                nums[i]=0;
                red--;
            }
            else if(white>0){
                nums[i]=1;
                white--;
            }
            else{
                nums[i]=2;
            }
        }
    }
};