class Solution {
public:
    // 1010
    // 1001
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n&(n-1)) return false;
        int mask=1431655765;
        return (n&mask);
    }
};