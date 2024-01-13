#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> arr(26,0);
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++) arr[s[i]-'a']++;
        for(int i = 0 ; i < t.size() ; i++) if(arr[t[i]-'a'] != 0) arr[t[i]-'a']--;
        for(int i = 0 ; i < 26 ; i++) count += arr[i];
        return count;
    }
};