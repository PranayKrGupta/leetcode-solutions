class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(sum&1) return 0;
        sum/=2;
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                int take=false;
                int not_take=dp[i-1][j];
                if(nums[i-1]<=j){
                    take=dp[i-1][j-nums[i-1]];
                }
                dp[i][j]=take||not_take;
            }
        }
        return dp[n][sum];
    }
};