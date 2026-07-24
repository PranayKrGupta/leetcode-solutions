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
public:
    int minDepth(TreeNode* r) {
        if(r==nullptr) return 0;
        int lh= minDepth(r->left);
        int rh=minDepth(r->right);
        if(lh>0 && rh>0)
        return min(lh,rh)+1;
        if(lh==0)
        return rh+1;
        if(rh==0)
        return lh+1;
        return 1;
    }
};