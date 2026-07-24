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
    void solve(TreeNode *r,int sum,int &tot){
        sum=sum*10+r->val;
        if(r->left==nullptr && r->right==nullptr){
            tot+=sum;
            return;
        }
        if(r->left!=nullptr){
            solve(r->left,sum,tot);
        }
        if(r->right!=nullptr){
            solve(r->right,sum,tot);
        }
    }
public:
    int sumNumbers(TreeNode* root) {
        int ans=0;
        int t=0;
        solve(root,t,ans);
        return ans;
    }
};