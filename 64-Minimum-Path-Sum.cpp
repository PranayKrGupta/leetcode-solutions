class Solution {
    int solve(vector<vector<int>> &arr,vector<vector<int>> &dp,int n,int m,int i,int j){
        if(i==n-1 && j==m-1) return arr[i][j];
        if(i>=n || j>=m) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=arr[i][j]+min(solve(arr,dp,n,m,i+1,j),solve(arr,dp,n,m,i,j+1));
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return solve(grid,dp,n,m,0,0);
    }
};