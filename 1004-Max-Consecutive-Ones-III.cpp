class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        int zero=0;
        int maxi=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0){
                zero++;
            }
            if(zero>k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
            if(zero<=k)
            maxi=max(j-i+1,maxi);
        }
        return maxi;
    }
};