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
        if(r==nullptr){
            return r;
        }
        if(r==p || r==q){
            return r;
        }
        TreeNode * p1=lowestCommonAncestor(r->left,p,q);
        TreeNode * p2=lowestCommonAncestor(r->right,p,q);
        if(p1!=nullptr && p2!=nullptr) return r;
        else if(p1!=nullptr){
            return p1;
        }else{
            return p2;
        }
    }
};