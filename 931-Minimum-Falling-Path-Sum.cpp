class Solution {
    int solve(vector<vector<int>> &mat,vector<vector<int>> &dp,int r,int c){
        int n=mat.size();
        if(dp[r][c]!=INT_MIN) return dp[r][c];
        int add=0;
        if(r+1<n){
            int ld=INT_MAX;
            int bt=INT_MAX;
            int rd=INT_MAX;
            bt=solve(mat,dp,r+1,c);
            if(c-1>=0) ld=solve(mat,dp,r+1,c-1);
            if(c+1<n) rd=solve(mat,dp,r+1,c+1);
            add=min(min(ld,rd),bt);
        }
        return dp[r][c]=mat[r][c]+add;
    }
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        vector<vector<int>> dp(mat.size(),vector<int> (mat.size(),INT_MIN));
        int sum=INT_MAX;
        for(int i=0;i<mat.size();i++){
            sum=min(sum,solve(mat,dp,0,i));
        }
        return sum;
    }
};