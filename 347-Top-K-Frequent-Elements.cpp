class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> q;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(const auto &[i,v]:mp){
            pair<int,int> p={v,i};
            q.push(p);
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};