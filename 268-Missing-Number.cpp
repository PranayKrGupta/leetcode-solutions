class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xo=0;
        for(int i=0;i<nums.size();i++){
            xo=xo^i^nums[i];
        }
        return xo^nums.size();
    }
};