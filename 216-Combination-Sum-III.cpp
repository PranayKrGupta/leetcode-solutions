class Solution {
    void solve(vector<vector<int>> &ans,vector<int> &t,int k,int n,int idx){
        if(n==0 && t.size()==k){
            ans.push_back(t);
            return ;
        }
        if(t.size()>k){
            return;
        }
        for(int i=idx;i<=9;i++){
            if(n-i<0){
                break;
            }
            t.push_back(i);
            solve(ans,t,k,n-i,i+1);
            t.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,temp,k,n,1);
        return ans;
    }
};