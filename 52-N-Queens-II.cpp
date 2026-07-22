class Solution {
    bool check(vector<string>& mat, int r, int c) {
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            if (mat[r][i] == 'Q')
                return false;
        }
        for (int i = 0; i < n; i++) {
            if (mat[i][c] == 'Q')
                return false;
        }
        int r2 = r;
        int c2 = c;
        while (r2 >= 0 && c2 >= 0) {
            if (mat[r2][c2] == 'Q')
                return false;
            r2--;
            c2--;
        }

        r2 = r;
        c2 = c;

        while (r2 < n && c2 < n) {
            if (mat[r2][c2] == 'Q')
                return false;
            r2++;
            c2++;
        }
        r2 = r;
        c2 = c;

        while (r2 >= 0 && c2 < n) {
            if (mat[r2][c2] == 'Q')
                return false;
            r2--;
            c2++;
        }
        r2 = r;
        c2 = c;

        while (r2 < n && c2 >= 0) {
            if (mat[r2][c2] == 'Q')
                return false;
            r2++;
            c2--;
        }

        return true;
    }
    int nqueens(vector<string>& mat, int n, int r) {
        if (n == 0) {
            return 1;
        }
        int size = mat.size();
        int c = 0;
        for (int i = 0; i < size; i++) {
            if (check(mat, r, i)) {
                mat[r][i] = 'Q';
                c += nqueens(mat, n - 1, r + 1);
                mat[r][i] = '.';
            }
        }
        return c;
    }

public:
    int totalNQueens(int n) {
        vector<string> mat(n, string(n, '.'));

        return nqueens(mat, n, 0);
    }
};