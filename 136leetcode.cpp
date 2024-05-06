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
    ListNode* reverse(ListNode* head){
        ListNode *prev = NULL, *curr = head , *nxt = head;
        while(nxt){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        st.push(head);
        while(head){
            while(!st.empty() && head->val>st.top()->val) st.pop();
            st.push(head);
            head = head->next;
        }
        ListNode*temp = st.top();
        head = temp;
        st.pop();
        while(!st.empty()){
            temp->next = st.top();
            temp = temp->next;
            st.pop();
        }
        temp->next = NULL;
        head = reverse(head);
        return head;
    }
};