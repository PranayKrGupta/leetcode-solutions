class Solution {
    void solve(vector<vector<int>> &arr,int r,int c,int x,int t){
        if(arr[r][c]!=x){
            return;
        }
        int n=arr.size();
        int m=arr[0].size();
        arr[r][c]=t;
        if(r+1<n ) solve(arr,r+1,c,x,t);
        if(r-1>=0 ) solve(arr,r-1,c,x,t);
        if(c+1<m ) solve(arr,r,c+1,x,t);
        if(c-1>=0) solve(arr,r,c-1,x,t);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color==image[sr][sc]) return image;
        solve(image,sr,sc,image[sr][sc],color);
        return image;
    }
};