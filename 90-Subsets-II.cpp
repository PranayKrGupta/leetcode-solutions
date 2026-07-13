class Solution {
public:
    void allsol(vector<int> & nums , vector<int> & ans , int i , vector<vector<int>> & sol){
        if(i==nums.size()){
            sol.push_back(ans);
            return ;
        }
        ans.push_back(nums[i]);
        allsol(nums, ans , i+1 , sol);
        ans.pop_back();
        int idx = i+1 ;
        while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
        allsol(nums , ans , idx , sol);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans ;
        vector<vector<int>> sol ;
        sort(nums.begin(),nums.end());
        allsol(nums , ans , 0 , sol);
        return sol;
    }
};