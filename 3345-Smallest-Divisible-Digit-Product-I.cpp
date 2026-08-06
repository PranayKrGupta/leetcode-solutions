class Solution {
    int pro(int n) {
        int p = 1;
        while (n) {
            p *= n % 10;
            n /= 10;
        }
        return p;
    }

public:
    int smallestNumber(int n, int t) {
        int p = pro(n);
        if (p % t == 0) {
            return n;
        }
        string s = to_string(n);
        if (s.length() == 3) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 10; k++) {
                        if ((i * 100 + j * 10 + k >= n) && (i * j * k) % t == 0) {
                            return i * 100 + j * 10 + k;
                        }
                    }
                }
            }
        } else if (s.length() == 2) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 10; k++) {
                    if ((j * 10 + k>=n)&&(j * k) % t == 0) {
                        return j * 10 + k;
                    }
                }
            }
        } else {
            for (int k = n; k < 10; k++) {
                if ((k) % t == 0) {
                    return k;
                }
            }
        }
        return (n - n % 10) + 10;
    }
};