class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int m = grid.size();
        int n = grid[0].size();
        int freshCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }
        if (freshCount == 0)
            return 0;
        int ans = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int k = 0; k < size; k++) {
                pair<int, int> p = q.front();
                q.pop();
                int i = p.first;
                int j = p.second;
                if (i + 1 < m && grid[i + 1][j] == 1) {
                    grid[i + 1][j] = 2;
                    q.push({i + 1, j});
                    freshCount--;
                }
                if (j + 1 < n && grid[i][j + 1] == 1) {
                    grid[i][j + 1] = 2;
                    q.push({i, j + 1});
                    freshCount--;
                }
                if (i - 1 >= 0 && grid[i - 1][j] == 1) {
                    grid[i - 1][j] = 2;
                    q.push({i - 1, j});
                    freshCount--;
                }
                if (j - 1 >= 0 && grid[i][j - 1] == 1) {
                    grid[i][j - 1] = 2;
                    q.push({i, j - 1});
                    freshCount--;
                }
                if(freshCount==0){
                    ans++;
                    break;
                }
            }
            if(freshCount==0) return ans;
            ans++;
        }
        if (freshCount)
            return -1;
        return ans;
    }
};