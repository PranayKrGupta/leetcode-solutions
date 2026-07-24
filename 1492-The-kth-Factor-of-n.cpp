class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> fnt, bck;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (n / i == i) {
                    fnt.push_back(i);
                } else {
                    fnt.push_back(i);
                    bck.push_back(n / i);
                }
            }
        }
        if (k > fnt.size()) {
            k -= fnt.size();
            if (k > bck.size()) {
                return -1;
            } else {
                return bck[bck.size() - k] ;
            }
        } else {
            return fnt[k - 1] ;
        }
    }
};