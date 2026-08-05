class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        vector<int> dp(tri.back().begin(),tri.back().end());
        int n=tri.size();
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<tri[i].size();j++){
                dp[j]=tri[i][j]+min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
    }
};