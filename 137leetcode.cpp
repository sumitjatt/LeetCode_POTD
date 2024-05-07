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
    ListNode* reverse(ListNode* head) {
        ListNode *prev = NULL , *curr = head , *nxt = head;
        while(nxt){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = reverse(head);
        ListNode* temp1 = temp;
        int carry = 0;
        while(temp){
            temp->val = (temp->val * 2) + carry;
            if(temp->val > 9){
                carry = temp->val/10;
                temp->val = temp->val % 10;
            }
            else carry = 0;
            if(temp->next == NULL) break;
            temp = temp->next;
        }
        if(carry != 0){
            ListNode *n = new ListNode(carry);
            temp->next = n;
        }
        ListNode* ans = reverse(temp1);
        return ans;
    }
};