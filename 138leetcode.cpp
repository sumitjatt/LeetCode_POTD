#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> arr = score;
        sort(score.begin(),score.end());
        int n = score.size();
        vector<string> ans(n);
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]] = i;
        }
        for(int i = 0 ; i < n ; i++){
            int j = n-i;
            if(j == 1){
                ans[mp[score[i]]] = "Gold Medal";
            }
            else if(j == 2){
                ans[mp[score[i]]] = "Silver Medal";
            }
            else if(j == 3){
                ans[mp[score[i]]] = "Bronze Medal";
            }
            else{
                string s =  to_string (j);
                ans[mp[score[i]]] = s;
            }
        }
        return ans;
    }
};