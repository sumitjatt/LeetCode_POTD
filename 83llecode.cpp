#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> m;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            m[s[i]]++;
        }
        string str = "";
        for(int i = 0 ; i < order.size() ; i++){
            while(m[order[i]]>0){
                str += order[i];
                m[order[i]]--;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(m[s[i]]>0){
                str += s[i];
                m[s[i]]--;
            }
        }
        return str;
    }
};