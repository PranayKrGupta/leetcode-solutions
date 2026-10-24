class Solution {
    int lcs(vector<vector<int>> & dp , string & x, string & y , int i, int j){
        if(i<0 || j<0 ) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int l=0;
        if(x[i]==y[j]) l=1+lcs(dp,x,y,i-1,j-1);
        else l=max(lcs(dp,x,y,i-1,j),lcs(dp,x,y,i,j-1));
        return dp[i][j]=l;
    }
public:
    int longestCommonSubsequence(string x, string y) {
        int n=x.size();
        int m=y.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return lcs(dp,x,y,n-1,m-1);
    }
};