#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        queue<int> q;
        for(int i = 0 ; i < deck.size() ; i++){
            q.push(i);
        }
        int i = 0;
        vector<int> arr(deck.size());
        while(!q.empty()){
            int idx = q.front();
            q.pop();
            arr[idx] = deck[i];
            i++;
            int x = q.front();
            q.pop();
            q.push(x);
        }
        return arr;
    }
};