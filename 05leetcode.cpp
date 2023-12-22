#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int maxScr = 0;
        int countZero = 0;
        int countone = count(s.begin(),s.end(),'1');
        for(int i = 0 ; i < s.size()-1 ; ++i){
            if(s[i] == '0') countZero++;
            else countone--;
            maxScr = max(maxScr , countZero+countone);
        }
        return maxScr;
    }
};