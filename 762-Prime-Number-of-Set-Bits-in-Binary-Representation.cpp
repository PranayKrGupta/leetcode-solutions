class Solution {
    void isPrime(vector<bool> &arr){
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<=1e4;i++){
            if(arr[i]){
                for(int j=i*i;j<=1e4;j+=i){
                    arr[j]=false;
                }
            }
        }
    }
public:
    int countPrimeSetBits(int left, int right) {
        vector<bool> primes(1e4+1,true);
        isPrime(primes);
        int ans=0;
        for(int i=left;i<=right;i++){
            int c=0;
            int n=i;
            while(n){
                n&=n-1;
                c++;
            }
            if(primes[c]) ans++;
        }
        return ans;
    }
};