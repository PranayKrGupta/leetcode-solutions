class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int s=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] > nums[i - 1] & nums[i] > nums[i + 1]) s+=nums[i];
            if(nums[i] < nums[i - 1] & nums[i] < nums[i + 1]) s-=nums[i];
        }
        return s;
    }
};