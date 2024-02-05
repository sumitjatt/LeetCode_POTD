#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        int arr[26];
        for(int i = 0 ; i < n ; i++){
            arr[s[i] - 'a']++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(arr[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};