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
    void view(TreeNode* n,int h,vector<int> &ans){
        if(n==nullptr) return;
        if(h==ans.size()){
            ans.push_back(n->val);
        }
        view(n->right,h+1,ans);
        view(n->left,h+1,ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        view(root,0,ans);
        return ans;
    }
};