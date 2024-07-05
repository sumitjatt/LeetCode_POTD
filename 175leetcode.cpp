#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> b(2,-1);
        if(head == NULL || head->next == NULL || head->next->next == NULL) return b;
        vector<int> a;
        int i = 1;
        while(head->next->next){
            if(head->val > head->next->val && head->next->next->val > head->next->val) a.push_back(i);
            if(head->val < head->next->val && head->next->next->val < head->next->val) a.push_back(i);
            i++;
            head = head->next;
        }
        if(a.size()<2) return b;
        int min = INT_MAX;
        int diff = 0;
        for(int i = 0 ; i < a.size()-1 ; i++){
            diff = a[i+1]-a[i];
            if(diff < min){
                min = diff;
            }
        }
        int max = a[a.size()-1] - a[0];
        b[0] = min;
        b[1] = max;
        return b;
    }
};