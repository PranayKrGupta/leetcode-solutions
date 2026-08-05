class Solution {
    void dfs(vector<vector<int>> &adj,vector<bool> &vis,int u){
        vis[u]=1;
        for(int i:adj[u]){
            if(!vis[i]){
                dfs(adj,vis,i);
            }
        }
    }
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for(const auto &v:invocations){
            adj[v[0]].push_back(v[1]);
        }
        vector<bool> vis(n,false);
        dfs(adj,vis,k);

        for(const auto &v:invocations){

            if(!vis[v[0]] && vis[v[1]]) {
                vector<int> ans;
                for(int k=0;k<n;k++) ans.push_back(k);
                return ans;
            }

        }
        vector<int> ans;
        for(int k=0;k<n;k++) if(!vis[k]) ans.push_back(k);
        return ans;
    }
};