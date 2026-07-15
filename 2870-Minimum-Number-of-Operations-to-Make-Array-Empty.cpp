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
            if(v%3==0){
                s+=v/3;
            }else if(v%3==2){
                s+=v/3+1;
            }else if(v%3==1){
                s+=(v/3-1)+2;
            }
        }
            return s;
    }
};