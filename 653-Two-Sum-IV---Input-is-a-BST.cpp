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
    void lefter(TreeNode *r,stack<TreeNode *> &st){
        while(r){
            st.push(r);
            r=r->left;
        }
    }
    void righter(TreeNode *r,stack<TreeNode *> &st){
        while(r){
            st.push(r);
            r=r->right;
        }
    }
public:
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode *> st1;
        stack<TreeNode *>st2;
        lefter(root,st1);
        righter(root,st2);
        while(!st1.empty() && !st2.empty() && st1.top()->val!=st2.top()->val){
            int sum=st1.top()->val+st2.top()->val;
            if(sum==k){
                return true;
            }else if(sum<k){
                TreeNode *n1=st1.top();
                st1.pop();
                lefter(n1->right,st1);
            }else{
                TreeNode *n2=st2.top();
                st2.pop();
                righter(n2->left,st2);
            }
        }
        return false;
    }
};