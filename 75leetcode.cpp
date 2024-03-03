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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slowtemp = head;
        ListNode* fasttemp = head;
        for(int i = 0 ; i < n ; i++){
            if(fasttemp->next == NULL) return head->next;
            fasttemp = fasttemp->next;
        }
        while(fasttemp->next != NULL){
            slowtemp = slowtemp->next;
            fasttemp = fasttemp->next;
        }
        slowtemp->next = slowtemp->next->next;
        return head;
    }
};