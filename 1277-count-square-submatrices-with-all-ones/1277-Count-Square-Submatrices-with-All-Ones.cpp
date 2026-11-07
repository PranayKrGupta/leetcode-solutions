class Solution {
    int solve(vector<vector<int>>& mat, vector<vector<int>>& dp, int i, int j) {
        if (i < 0 || j < 0)
            return 0;
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int top_maxSizeSquare = solve(mat, dp, i - 1, j);
        int left_maxSizeSquare = solve(mat, dp, i, j - 1);
        int diagonal_maxSizeSquare = solve(mat, dp, i - 1, j - 1);
        if (mat[i][j] == 0) {
            return dp[i][j] = 0;
        }
        return dp[i][j] = 1 + min({top_maxSizeSquare, left_maxSizeSquare,
                                   diagonal_maxSizeSquare});
    }

public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        solve(matrix, dp, n - 1, m - 1);
        int sum = 0;
        for (const auto& v : dp) {
            for (const auto& i : v) {
                // if(i!=-1)
                sum += i;
            }
        }
        return sum;
    }
};