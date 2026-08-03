class Solution {
    int solve(vector<int> & arr,vector<vector<int>> & dp, int prev,int i){
        if(i>=arr.size()){
            return 0;
        }
        if(dp[prev+1][i]!=-1){
            return dp[prev+1][i];
        }
        int pick=0;
        if(prev==-1 || arr[prev]<arr[i]){
            pick=1+solve(arr,dp,i,i+1);
        }
        int notPick=0+solve(arr,dp,prev,i+1);
        return dp[prev+1][i]=max(pick,notPick);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int> (nums.size()+1,-1));
        return solve(nums,dp,-1,0);
    }
};