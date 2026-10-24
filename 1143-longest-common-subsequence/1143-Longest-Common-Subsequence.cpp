class Solution {
public:
    int longestCommonSubsequence(string x, string y) {
        int n=x.size();
        int m=y.size();
        vector<int> prev(m+1);
        vector<int> curr(m+1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int l=0;
                if(x[i-1]==y[j-1]) l=1+prev[j-1];
                else l=max(prev[j],curr[j-1]);
                curr[j]=l;
            }
            prev=curr;
        }
        return curr[m];
    }
};