class Solution {
    int solve(int i,vector<int> &v,vector<int> &dp){
        int n=v.size();
        if(i>=n){return 0;}
        if(dp[i]!=-1){
            return dp[i];
        }
        int pick=v[i]+solve(i+2,v,dp);
        int notPick = 0+solve(i+1,v,dp);
        return dp[i]=max(pick,notPick);
    }
public:
    int rob(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n+1,-1);
        solve(0,v,dp);
        return dp[0];
    }
};