#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i = 0 , count = 0;
        while(tickets[k] != 0){
            if(i == tickets.size()) i = 0;
            else if(tickets[i]){
                tickets[i]--;
                count++;
                i++;
            }
            else if(tickets[i] == 0) i++;
        }
        return count;
    }
};