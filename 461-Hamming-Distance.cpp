class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        int c=0;
        while(a){
            a&=(a-1);
            c++;
        }
        return c;
    }
};