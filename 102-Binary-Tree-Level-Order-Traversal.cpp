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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        queue<TreeNode *> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> lvl;
            int size=q.size();
            for(int i=0;i<size;i++){
                lvl.push_back(q.front()->val);
                if(q.front()->left!=nullptr){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=nullptr){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(lvl);
        }
        return ans;
    }
};