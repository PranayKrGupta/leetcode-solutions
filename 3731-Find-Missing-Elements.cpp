class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        unordered_set<int> st;
        for(int i:nums){
            maxi=max(maxi,i);
            mini=min(mini,i);
            st.insert(i);
        }
        vector<int> ans;
        for(int i=mini;i<=maxi;i++){
            if(!st.count(i)) ans.push_back(i);
        }
        return ans;
    }
};