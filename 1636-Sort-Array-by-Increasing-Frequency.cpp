class Solution {
    static bool comp(pair<int,int> a,pair<int,int> b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        
        vector<pair<int,int>> v(mp.size());
        int c=0;
        for(const auto & [i,o]:mp){
            v[c].first=o;
            v[c++].second=i;
        }
        sort(v.begin(),v.end(),comp);
        vector<int> ans;
        for(const auto & [i,j]:v){
            for(int k=0;k<i;k++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};