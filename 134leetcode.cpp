#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i = 0 , j = people.size()-1;
        int ans = 0;
        
        while(i<=j){
            if(people[i]+people[j] <= limit){
                ans++;
                people[i] = 0;
                people[j] = 0;
                i++;
                j--;
            }
            else{
                ans++;
                j--;
            }
        }
        return ans;
    }
};