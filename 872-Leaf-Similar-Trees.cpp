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
    void solve(TreeNode *r,vector<int> &ans){
        if(r==nullptr) return;
        if(r->left==nullptr && r->right==nullptr){
            ans.push_back(r->val);
            return;
        }
        solve(r->left,ans);
        solve(r->right,ans);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> lf1,lf2;
        solve(root1,lf1);
        solve(root2,lf2);
        if(lf1.size() != lf2.size()) return false;
        for(int i=0;i<lf1.size();i++){
            if(lf1[i]!=lf2[i]) return false;
        }
        return true;
    }
};