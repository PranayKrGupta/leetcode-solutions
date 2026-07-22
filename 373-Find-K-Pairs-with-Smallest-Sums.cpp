class Solution {
    class com{
        public:
        bool operator()(const auto &a,const auto &b) const{
            return a.first>b.first;
        }
    };
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,com> q;
        for(int i=0;i<k && i<nums1.size();i++){
            q.push({nums1[i]+nums2[0],{i,0}});
        }
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            const auto &p=q.top();
            int idx1=p.second.first;
            int idx2=p.second.second;
            ans.push_back({nums1[idx1],nums2[idx2]});
            q.pop();
            if(idx2+1<nums2.size())
            q.push({nums1[idx1]+nums2[idx2+1],{idx1,idx2+1}});
        }
        return ans;
    }
};