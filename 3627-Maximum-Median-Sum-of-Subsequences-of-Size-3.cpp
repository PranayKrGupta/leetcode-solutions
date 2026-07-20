class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long sum=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            sum+=nums[j-1];
            i++;
            j-=2;
        }
        return sum;
    }
};