class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<long long> pre(n+1);
        vector<long long> suff(n+1);
        pre[0]=1;
        suff[n]=1;
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=n-1;i>=0;i--){
            suff[i]=suff[i+1]*nums[i];
        }
        vector<int> ans;
        for(int i=1;i<=nums.size();i++){
            ans.push_back(pre[i-1]*suff[i]);
        }
        return ans;
    }
};