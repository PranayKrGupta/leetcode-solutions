class Solution {
    int fun(vector<int>& coins,vector<vector<int>> &dp,int i,int amount){
        if(amount==0){
            return 0;
        }
        if(i<0){
            return -1;
        }
        if(dp[i][amount]!=-2){
            return dp[i][amount];
        }
        int v=fun(coins,dp,i-1,amount);
        if(amount>=coins[i]){
            int x=fun(coins,dp,i,amount-coins[i]);
            if(x!=-1 && v!=-1){
                v=min(v,x+1);
            }else if(x!=-1){
                v=x+1;
            }
        }
        return dp[i][amount]=v;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-2));
        return fun(coins,dp,n-1,amount);
    }
};