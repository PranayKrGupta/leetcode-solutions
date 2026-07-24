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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return {};
        queue<TreeNode *> q;
        q.push(root);
        while(q.size()){
            int size= q.size();
            for(int i=size-1;i>=0;i--){
                TreeNode* n=q.front();
                q.pop();
                swap(n->left,n->right);
                if(n->left != nullptr){
                    q.push(n->left);
                }
                if(n->right != nullptr){
                    q.push(n->right);
                }
            }
        }
        return root;
    }
};