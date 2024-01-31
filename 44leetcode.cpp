// NEXT GREATER ELEMENT
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        ans[n-1] = 0;
        stack<int> s;
        s.push(n-1);
        for(int i = n-2 ; i >= 0 ; i--){
            while(s.size() != 0 && arr[s.top()] <= arr[i]) s.pop();
            if(!s.empty()) ans[i] = s.top() - i;
            else ans[i] = 0;
            s.push(i);
        }
        return ans;
    }
};