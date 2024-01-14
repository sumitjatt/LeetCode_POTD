#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        vector<int> arr(26,0);
        for(int i = 0 ; i < word1.size() ; i++){
            arr[word1[i]-'a']++;
        }
        vector<int> arr2(26,0);   
        for(int i = 0 ; i < word2.size() ; i++){
            arr2[word2[i]-'a']++;
        }
        if(arr[word1[0]-'a'] == word1.size() && arr[word1[0]-'a'] != arr2[word2[0]-'a']){
            return false;
        }
        vector<int> arr3(26,0); 
        for(int i = 0 ; i < 26 ; i++){
            if(arr[i]!=0) arr3[i]++;
            if(arr2[i]!=0) arr3[i]--;
        }
        for(int i = 0 ; i < 26 ; i++){
            for(int j = 0 ; j < 26 ; j++){
                if(arr[i]==0) break;
                if(arr[i] == arr2[j]){
                    arr[i] = 0;
                    arr2[j] = 0;
                    break;
                }
            }
            if(arr[i]!=0) return false;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(arr2[i] != 0) return false;
            if(arr[i] != 0) return false;
            if(arr3[i] != 0) return false;
        }
        return true;
    }
};