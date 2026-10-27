class Solution {
    int way(vector<int>& nums, vector<vector<int>>& dp, int i,int c, const int & t) {
        if (t == c && i<0) {
            return 1;
        }
        if (i<0){
            return 0;
        }
        if(dp[i][c]!=-1){
            return dp[i][c];
        }
        int plus=way(nums,dp,i-1,c+nums[i],t);
        int minus=way(nums,dp,i-1,c-nums[i],t);
        return dp[i][c]=plus+minus;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        target+=1000;
        vector<vector<int>> dp(n + 1, vector<int>(2001, -1));
        return way(nums, dp, n - 1,1000, target);
    }
};