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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        queue<TreeNode *> q;
        q.push(root);
        vector<vector<int>> ans;
        bool dir=0;
        while(!q.empty()){
            int n=q.size();
            vector<int> lvl(n);
            for(int i=0;i<n;i++){
                if(dir){
                    lvl[n-1-i]=q.front()->val;
                }else{
                    lvl[i]=q.front()->val;
                }
                if(q.front()->left!=nullptr){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=nullptr){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(lvl);
            dir=!dir;
        }
        return ans;
    }
};