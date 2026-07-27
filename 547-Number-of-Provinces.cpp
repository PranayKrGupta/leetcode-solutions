class Solution {
    void solve(vector<vector<int>> &adj,vector<bool> &vis,int u){
        vis[u]=true;
        for(int i:adj[u]){
            if(!vis[i])
            solve(adj,vis,i);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int c=0;
        int V=isConnected.size();
        vector<vector<int>> adj(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]){
                adj[i].push_back(j);
                adj[j].push_back(i);}
            }
        }
        vector<bool> vis(V);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                c++;
                solve(adj,vis,i);
            }
        }
        return c;
    }
};