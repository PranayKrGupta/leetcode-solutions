class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int s=0;
        for(const auto &[i,v]:mp){
            if(v==1){
                return -1;
            }
            s+=ceil(v/3.0);
        }
            return s;
    }
};