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
    void tra(vector<int> &a,TreeNode* n){
        if(n==nullptr) return;
        tra(a,n->left);
        tra(a,n->right);
        a.push_back(n->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> a;
        tra(a,root);
        return a;
    }
};