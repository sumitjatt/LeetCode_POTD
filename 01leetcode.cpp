//1913. Maximum Product Difference Between Two Pairs

#include <bits/stdc++.h>
using namespace std;

int maxProductDifference(vector<int>& nums) {
    int max1 = 0;
    int max2 = 0;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i]>max1){
            max2 = max1;
            max1 = nums[i];
        }
        else{
            max2 = max(max2,nums[i]);
        }
        if(nums[i]<min1){
            min2 = min1;
            min1 = nums[i];
        }
        else{
            min2 = min(min2,nums[i]);
        }
    }
    return ((max2*max1)-(min2*min1));
}

int main(){
    vector <int> arr = {5,6,2,7,4};
    //[4,2,5,9,7,4,8]
    cout<<maxProductDifference(arr);
}

