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
    bool solve(TreeNode *r,int t,int s){
        if(r==nullptr){
            return false;
        }
        s+=r->val;
        if(r->left==nullptr && r->right==nullptr){
            return t==s;
        }
        return solve(r->left,t,s) || solve(r->right,t,s);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        return solve(root,targetSum,0);
    }
};