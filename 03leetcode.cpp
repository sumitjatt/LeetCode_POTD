//2706. Buy Two Chocolates

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        /// USING SORTING
        // sort(prices.begin(),prices.end());
        // if(prices[0]+prices[1] > money){
        //     return money;
        // }
        // return money - prices[0] - prices[1];

        // using one traverse
        int min = INT_MAX;
        int min2 = INT_MAX;
        for(int i = 0 ; i < prices.size() ; i++){
            if(min>prices[i]){
                min2 = min;
                min = prices[i];
            }
            else if(min2>prices[i]){
                min2 = prices[i];
            }
        }
        if(min+min2 > money){
            return money;
        }
        return money - min - min2;
    }
};