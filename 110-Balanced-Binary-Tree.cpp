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
    int check(TreeNode * r,bool &f){
        if(r==nullptr){
            return 0;
        }
        int lh=check(r->left,f);
        int rh=check(r->right,f);
        if(f==false) return 0;
        if(abs(lh-rh)>1){
            f=false;
            return 0;
        }
        return max(lh,rh)+1;
    }
public:
    bool isBalanced(TreeNode* r) {
        bool ans=true;
        check(r,ans);
        return ans;
    }
};