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
class FindElements {
    TreeNode * root;
    vector<int> nodes;
    void purify(TreeNode *r){
        if(r==nullptr){
            return;
        }
        int x=r->val;
        nodes.push_back(x);
        if(r->left)
        r->left->val=2*x+1;
        if(r->right)
        r->right->val=2*x+2;
        purify(r->left);
        purify(r->right);
    }
public:
    FindElements(TreeNode* root) {
        root->val=0;
        this->root=root;
        purify(root);
        sort(nodes.begin(),nodes.end());
    }
    
    bool find(int target) {
        int start=0;
        int end=nodes.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nodes[mid]==target) return true;
            else if(nodes[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */