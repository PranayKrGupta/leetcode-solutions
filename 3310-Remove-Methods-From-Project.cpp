class Solution {
    void dfs(vector<vector<int>> &adj,vector<bool> &vis,unordered_set<int> &st,int u){
        vis[u]=1;
        st.insert(u);
        for(int i:adj[u]){
            if(!vis[i]){
                dfs(adj,vis,st,i);
            }
        }
    }
    bool connected(vector<vector<int>> &adj,vector<bool> &vis,unordered_set<int>&st,int u){
        vis[u]=1;
        for(int i:adj[u]){
            if(st.count(i)) return true;
            if(!vis[i]){
                if(connected(adj,vis,st,i)) return true;
            }
        }
        return false;
    }
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for(const auto &v:invocations){
            adj[v[0]].push_back(v[1]);
        }
        unordered_set<int> st;
        vector<bool> vis(n,false);
        dfs(adj,vis,st,k);

        for(int i=0;i<n;i++){
            if(!vis[i] && connected(adj,vis,st,i)){
                vector<int> ans;
                for(int k=0;k<n;k++) ans.push_back(k);
                return ans;
            }
        }
        vector<int> temp(n);
        for(int i:st){
            temp[i]=1;
        }
        vector<int> ans;
        for(int k=0;k<n;k++) if(!temp[k]) ans.push_back(k);
        return ans;
    }
};