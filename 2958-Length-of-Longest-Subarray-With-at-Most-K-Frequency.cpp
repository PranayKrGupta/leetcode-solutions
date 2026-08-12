class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int j=0;
        int l=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(j<i && mp[nums[i]]>k){
                mp[nums[j++]]--;
            }
            l=max(l,i-j+1);
        }
        return l;
    }
};