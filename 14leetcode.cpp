#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        if(s.size() < 2){
            return -1;
        }
        int maxi = INT_MIN;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i + 1 ; j < s.size() ; j++){
                if(s[i] == s[j]){
                    int m = j-i-1;
                    maxi = max(maxi,m);
                }
            }
        }
        if(maxi == INT_MIN) return -1;
        return maxi;
    }
};