class Solution {
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
public:
    int gcdOfOddEvenSums(int n) {
        int sumE=(n/2.0)*(2*2+(n-1)*2);
        int sumO=(n/2.0)*(2*1+(n-1)*2);
        return gcd(max(sumE,sumO),min(sumE,sumO));
    }
};