class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int> arr(101);
        for(int i:nums){
            maxi=max(maxi,i);
            mini=min(mini,i);
            arr[i]=1;
        }
        vector<int> ans;
        for(int i=mini;i<=maxi;i++){
            if(!arr[i]) ans.push_back(i);
        }
        return ans;
    }
};