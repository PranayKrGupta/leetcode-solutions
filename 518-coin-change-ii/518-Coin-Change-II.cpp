class Solution {
    int fun(vector<int> & coins,vector<vector<int>> &dp,int i,int a ){
        if(a==0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        if(dp[i][a]!=-1){
            return dp[i][a];
        }
        int not_take=fun(coins,dp,i-1,a);
        int take=0;
        if(a>=coins[i]){
            take=fun(coins,dp,i,a-coins[i]);
        }
        return dp[i][a] = take + not_take;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1)) ;
        return fun(coins,dp,n-1,amount);
    }
};