class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0;
        int b=0;
        int c=0;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            c=max(nums[i]+a,b);
            a=b;
            b=c;
        }
        return c;
    }
};