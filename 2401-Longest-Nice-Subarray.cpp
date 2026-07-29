class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0;
        int mask=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]&mask){
                mask^=nums[l++];
            }
            mask|=nums[i];
            maxi=max(maxi,i-l+1);
        }
        return maxi;
    }
};