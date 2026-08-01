class Solution {
    bool solve(vector<int> &nums,vector<vector<int>> &dp,int i,int target){
        if(target==0){
            return true;
        }
        if(i<0 || target<0) return false;
        if(dp[i][target]!=-1) return dp[i][target];
        return dp[i][target]=solve(nums,dp,i-1,target)||solve(nums,dp,i-1,target-nums[i]);
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(sum&1) return false;
        else {
            int n=nums.size();
            vector<vector<int>> dp(n,vector<int>(sum/2+1,-1)) ;
            return solve(nums,dp,n-1,sum/2);
        }
    }
};