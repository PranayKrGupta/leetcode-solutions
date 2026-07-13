class Solution {
    const int mod=1e9+7;
    int myPow(long long x,long long n){
        if(x==0 || n==1 || x==1){
            return x;
        }
        if(n==0) return 1;
        if(n%2==1){
            return (x*myPow((x*x)%mod,n/2))%mod;
        }else{
            return myPow((x*x)%mod,n/2);
        }
    } 
public:
    int countGoodNumbers(long long n) {
        long long ans = (long)myPow(5,(n+1)/2)*(long)myPow(4,n/2);
        return (int)(ans%mod);
    }
};