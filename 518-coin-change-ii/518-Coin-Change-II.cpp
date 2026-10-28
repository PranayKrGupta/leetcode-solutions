class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<unsigned int> dpc(amount+1),dp(amount+1);
        dp[0]=1; // pichla row
        dpc[0]=1; // current row
        for(int i=0;i<n;i++){
            for(int j=0;j<=amount;j++){
                unsigned int not_take=dp[j];
                unsigned int take=0;
                if(j>=coins[i]){
                    take=dpc[j-coins[i]];
                }
                dpc[j]=take+not_take;
            }
            dp=dpc;
        }
        return dpc[amount];
    }
};