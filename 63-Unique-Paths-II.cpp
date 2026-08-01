class Solution {
    int solve(vector<vector<int>> &g,vector<vector<int>> &dp,int n,int m,int i,int j){
        if(i>=n || j>=m || g[i][j]==1) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=solve(g,dp,n,m,i+1,j)+solve(g,dp,n,m,i,j+1) ;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(g,dp,n,m,0,0);
    }
};