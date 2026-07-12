class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int i=0;
        int j=0;
        long long p=1;
        int c=0;
        while(j<nums.size()){
            p*=nums[j];
            while(i<=j && p>=k){
                p/=nums[i];
                i++;
            }
            c+=j-i+1;
            j++;
        }
        return c;
    }
};