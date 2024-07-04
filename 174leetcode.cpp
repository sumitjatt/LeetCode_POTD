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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        head = head->next;
        while(head){
            dummy->val += head->val;
            if(head->val == 0 && head->next){
                ListNode* d = new ListNode(0);
                dummy->next = d;
                dummy = dummy->next;
            }
            head = head->next;
        }
        return ans;
    }
};