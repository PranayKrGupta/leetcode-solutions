class Solution {
    int solve(vector<vector<int>> &dp,int m,int n,int i,int j){
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m-1){
            return dp[i][j]=solve(dp,m,n,i,j+1);
        }else if(j==n-1){
            return dp[i][j]=solve(dp,m,n,i+1,j);
        }else{
            return dp[i][j]=solve(dp,m,n,i,j+1)+solve(dp,m,n,i+1,j);
        }
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        return solve(dp,m,n,0,0);
    }
};