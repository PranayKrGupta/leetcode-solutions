class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0) break;c++;
            }
            q.push({c,i});
            if(q.size()>k){
                q.pop();
            }
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};