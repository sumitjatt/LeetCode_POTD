#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int prevloss = 0;
        for(int i = 0 ; i < minutes ; i++){
            if(grumpy[i] == 1){
                prevloss += customers[i];
            }
        }
        int j = 1, k = minutes;
        int curloss = 0, idx = 0;
        int maxloss=prevloss;
        while(k<grumpy.size()){
            curloss = prevloss;
            if(grumpy[j-1] == 1) curloss -= customers[j-1];
            if(grumpy[k] == 1) curloss += customers[k];
            if(maxloss<curloss){
                maxloss = curloss;
                idx = j;
            }
            prevloss = curloss;
            j++,k++;
        }
        int sum = 0;
        for(int i = 0 ; i < idx ; i++){
            if(grumpy[i]==0){
                sum += customers[i];
            }
        }
        for(int i = idx ; i < idx+minutes ; i++){
            sum += customers[i];
        }
        for(int i = idx+minutes ; i < grumpy.size() ; i++){
            if(grumpy[i]==0){
                sum += customers[i];
            }
        }
        return sum;
    }
};