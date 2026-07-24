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
    void solve(TreeNode *r,const string &s,vector<string> &ans){
        if(r==nullptr){
            return ;
        }
        if(r->left==nullptr && r->right==nullptr){
            ans.push_back(s+to_string(r->val));
            return;
        }
        solve(r->left,s+to_string(r->val)+"->",ans);
        solve(r->right,s+to_string(r->val)+"->",ans);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root,"",ans);
        return ans;
    }
};