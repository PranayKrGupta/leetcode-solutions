class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = (start^goal);
        int c=0;
        while(n){
            c++;
            n&=n-1;
        }
        return c;
    }
};