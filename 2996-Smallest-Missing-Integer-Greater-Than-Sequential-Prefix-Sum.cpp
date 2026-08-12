class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        unordered_set<int> st;
        st.insert(nums[0]);
        int i;
        for(i=1;i<nums.size();i++){
            st.insert(nums[i]);
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }else {
                break;
            }
        }
        for(;i<nums.size();i++){
            st.insert(nums[i]);
        }
        while(st.count(sum)){
            sum++;
        }
        return sum;
    }
};