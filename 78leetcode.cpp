#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
       // FIRST SOLUTION
        // unordered_map<ListNode*, int> check;
        // while(head != NULL){
        //     check[head]++;
        //     if(check[head]>1) return true;
        //     head = head->next;
        // } 
        // return false;

        // second approach
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};