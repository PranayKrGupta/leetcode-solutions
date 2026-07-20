class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long sum=0;
        sort(nums.begin(),nums.end());
        int i=nums.size()/3;
        int j=nums.size()-1;
        while(i<j){
            sum+=nums[i];
            i+=2;
        }
        return sum;
    }
};