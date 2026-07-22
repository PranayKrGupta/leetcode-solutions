class Solution {
    struct com{
        bool operator()(const auto &a,const auto &b) const{
            return a.first>b.first;
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,com> q;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(const auto &[i,v]:mp){
            pair<int,int> p={v,i};
            q.push(p);
            if(q.size()>k){
                q.pop();
            }
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};