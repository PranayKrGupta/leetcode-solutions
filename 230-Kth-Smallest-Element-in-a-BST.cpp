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
    int sr(TreeNode *r,int k,int &i){
        if(r==nullptr) return -1;
        int l=sr(r->left,k,i);
        if(l!=-1) return l;
        i++;
        if(i==k) return r->val;
        int rr=sr(r->right,k,i);
        if(rr!=-1) return rr;
        return -1;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
        return sr(root,k,i);
    }
};