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
    // int sum(TreeNode *root, int & maxi){
    //     if(root==nullptr) return 0;
    //     int l=sum(root->left,maxi);
    //     int r=sum(root->right,maxi);
    //     int n=root->val;
    //     int arc_sum = l+r+n;
    //     int sider_sum= n+max(l,r);
    //     maxi=max({maxi,arc_sum,sider_sum,n});
    //     return max(n,sider_sum);
    // }
    int sum(TreeNode *root, int & maxi){
        if(root==nullptr) return 0;
        int l=max(0,sum(root->left,maxi));
        int r=max(0,sum(root->right,maxi));
        int n=root->val;
        int arc_sum = l+r+n;
        maxi=max(maxi,arc_sum);
        return n+max(l,r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        sum(root,maxi);
        return maxi;
    }
};
