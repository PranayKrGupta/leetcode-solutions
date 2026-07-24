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
    void solve(TreeNode * &n,int target){
        if(n==nullptr) return ;
        solve(n->left,target);
        solve(n->right,target);
        if(n->left==nullptr && n->right==nullptr && n->val==target){
            n=nullptr;
        }
    }
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        solve(root,target);
        return root;
    }
};