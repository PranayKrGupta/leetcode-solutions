class Solution {
    int solve(vector<int> & arr, int s,int n){
        int a=0;
        int b=0;
        int c=0;
        for(int i=n;i>=s;i--){
            c=max(arr[i]+a,b);
            a=b;
            b=c;
        }
        return c;
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        return max(solve(nums,0,n-2),solve(nums,1,n-1));
    }
};