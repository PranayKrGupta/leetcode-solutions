class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &v:grid){
            sort(v.begin(),v.end());
        }
        int n=grid.size();
        int m=grid[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            int maxi=INT_MIN;
            for(int j=0;j<n;j++){
                maxi=max(maxi,grid[j][i]);
            }
            sum+=maxi;
        }
        return sum;
    }
};