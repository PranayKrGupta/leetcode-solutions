class Solution {
    int nqueens(int size, int r,vector<bool> &uvc,vector<bool> &uvpd,vector<bool> &uvnd) {
        if (r==size) {
            return 1;
        }
        int c = 0;
        for (int i = 0; i < size; i++) {
            if (uvc[i] &&uvnd[r-i+(size-1)] &&uvpd[r+i]) {
                uvc[i]=0;
                uvnd[r-i+(size-1)]=0;
                uvpd[r+i]=0;
                c += nqueens(size, r + 1,uvc,uvpd,uvnd);
                uvc[i]=1;
                uvnd[r-i+(size-1)]=1;
                uvpd[r+i]=1;
            }
        }
        return c;
    }

public:
    int totalNQueens(int n) {
        vector<bool> uvc(n,true);
        vector<bool> uvpd(2*n,true);
        vector<bool> uvnd(2*n,true);
        return nqueens(n,0,uvc,uvpd,uvnd);
    }
};