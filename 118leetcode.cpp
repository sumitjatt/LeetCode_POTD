#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
        int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        if(!root) return "";
        string ans;
        helper(root,ans,"");
        return ans;
    }

    void helper(TreeNode* root,string& ans , string len){
        if(root == NULL) return;
        len += char('a' + root->val);
        if(root->left == NULL && root->right == NULL){
            reverse(len.begin(),len.end());
            if(ans.empty() || ans > len){
                ans = len;
            }
            reverse(len.begin(),len.end());
            return;
        }
        helper(root->left,ans,len);
        helper(root->right,ans,len);
        return;
    }
};