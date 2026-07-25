/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool solve(TreeNode *r,long min,long max){
        if(r==nullptr) return true;
        if(r->val>=max || r->val<=min) return false;
        return solve(r->left,min,r->val) && solve(r->right,r->val,max);
    }
public:
    bool isValidBST(TreeNode* root) {
        long min=INT_MIN;
        long max=INT_MAX;
        min--;
        max++;
        return solve(root,min,max);
    }
};