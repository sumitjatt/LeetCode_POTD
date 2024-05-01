#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int s = 0;
        bool flag = false;
        for(int i = 0 ; i < word.size() ; i++){
            s++;
            if(word[i] == ch){
                flag = true;
                break;
            }
        }
        if(flag != true) return word;
        int i = 0 , j = s-1;
        while(i<j){
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++,j--;
        }
        return word;
    }
};