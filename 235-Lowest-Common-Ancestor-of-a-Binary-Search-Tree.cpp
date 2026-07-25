/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* r, TreeNode* p, TreeNode* q) {
        if(r==nullptr) return r;
        if(p->val<r->val && q->val<r->val){
            return lowestCommonAncestor(r->left,p,q);
        }else if(p->val>r->val && q->val>r->val){
            return lowestCommonAncestor(r->right,p,q);
        }else{
            return r;
        }
    }
};