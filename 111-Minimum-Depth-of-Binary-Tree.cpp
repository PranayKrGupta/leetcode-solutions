/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),
 * left(left),right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* r) {
        if (r == nullptr)
            return 0;
        queue<TreeNode*> q;
        q.push(r);
        int l = 1;
        while (q.size()) {
            int s = q.size();
            for (int i = 0; i < s; i++) {
                TreeNode* n = q.front();
                q.pop();
                if (n->left == nullptr && n->right == nullptr) {
                    return l;
                }
                if (n->left != nullptr) {
                    q.push(n->left);
                }
                if (n->right != nullptr) {
                    q.push(n->right);
                }
            }
            l++;
        }
        return l;
    }
};