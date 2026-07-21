class Solution {
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        int i=0;
        int j=0;
        int maxi=0;
        while(i<n && j<m){
            if(isPrime(nums[i][j])){
                maxi=max(nums[i][j],maxi);
            }
            i++;
            j++;
        }
        i=0;
        j=m-1;
        while(i<n && j>=0){
            if(isPrime(nums[i][j])){
                maxi=max(nums[i][j],maxi);
            }
            i++;
            j--;
        }
        return maxi;
    }
};