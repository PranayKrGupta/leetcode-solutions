class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int k=0;
            for(int j:nums){
                k+=(j>>i)&1;
            }
            ans=ans|(k%3)<<i;
        }
        return ans;
    }
};