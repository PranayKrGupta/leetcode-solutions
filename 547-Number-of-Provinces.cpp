class Solution {
    void solve(vector<vector<int>> &mat,vector<bool> &vis,int u){
        vis[u]=true;
        for(int i=0;i<mat.size();i++){
            if(!vis[i] && mat[u][i])
            solve(mat,vis,i);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& mat) {
        int c=0;
        int V=mat.size();
        
        vector<bool> vis(V);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                c++;
                solve(mat,vis,i);
            }
        }
        return c;
    }
};