class Solution {
public:
    int divide(long dividend, long divisor) {
        long q=0;
        int f=0;
        if((dividend^divisor)<0){
            f=1;
        }
        dividend=abs(dividend);
        divisor=abs(divisor);
        while(dividend>=divisor){
            long suber=divisor;
            long long i=0;
            while(suber<=dividend){
                suber<<=1;
                i++;
            }
            if(suber>dividend){
                suber>>=1;
                i--;
            }
            q+=1ll<<i;
            dividend-=suber;
        }
        if(f) return -q;
        return q>INT_MAX?INT_MAX:q;
    }
};