#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int count = 0;
        long long ans = 0;
        for(int i = n-1 ; i >= 0 ; i--){
            if(count == k) break;
            arr[i] -= count;
            if(arr[i] <= 0) break;
            ans += arr[i];
            count++;
        }
        return ans;
    }
};