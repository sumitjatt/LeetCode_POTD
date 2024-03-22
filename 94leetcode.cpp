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
        ListNode *prev = NULL , *curr = head , *Next = head;
        while(Next != NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *temp1 = head;
        ListNode* temp = head;
        while(temp1->next != NULL && temp1->next->next != NULL){
            temp = temp->next;
            temp1 = temp1->next->next;
        }
        temp = reverse(temp->next);
        while(temp != NULL){
            if(head->val != temp->val) return false;
            temp = temp->next;
            head = head->next;
        }
        return true;
    }
};