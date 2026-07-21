class Solution {
    void sieve(vector<bool> &arr){
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<arr.size();i++){
            if(arr[i]){
                for(int p=i*i;p<arr.size();p+=i){
                    arr[p]=false;
                }
            }
        }
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<bool> isPrime(4*1e6+1,true);
        sieve(isPrime);
        int n=nums.size();
        int m=nums[0].size();
        int i=0;
        int j=0;
        int maxi=0;
        while(i<n && j<m){
            if(isPrime[nums[i][j]]){
                maxi=max(nums[i][j],maxi);
            }
            i++;
            j++;
        }
        i=0;
        j=m-1;
        while(i<n && j>=0){
            if(isPrime[nums[i][j]]){
                maxi=max(nums[i][j],maxi);
            }
            i++;
            j--;
        }
        return maxi;
    }
};