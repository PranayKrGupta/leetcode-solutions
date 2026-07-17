class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=pow(2,nums.size());
        vector<vector<int>> ans;
        vector<int> t;
        for(int i=0;i<n;i++){
            for(int j=0;j<nums.size();j++){
                if(i&(1ll<<j)) t.push_back(nums[j]);
            }
            ans.push_back(t);
            t.clear();
        }
        return ans;
    }
};