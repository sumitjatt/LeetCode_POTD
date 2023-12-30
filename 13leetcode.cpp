#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char, int> mp;
        for(int i = 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < words[i].size() ; j++){
                mp[words[i][j]]++;
            }
        }
        for(int i = 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < words[i].size() ; j++){
                if(mp[words[i][j]] % words.size() != 0){
                    return false;
                }
            }
        }
        return true;
    }
};