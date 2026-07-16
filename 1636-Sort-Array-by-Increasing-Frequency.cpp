class Solution {
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
        for(int i=0;i<v.size()-1;i++){
            bool swapped = false;
            for(int j=0;j<v.size()-i-1;j++){
                if(v[j].first>v[j+1].first){
                    swap(v[j],v[j+1]);
                    swapped=true;
                }else if(v[j].first==v[j+1].first && v[j].second<v[j+1].second){
                    swap(v[j],v[j+1]);
                    swapped=true;
                }
            }
            if(!swapped){
                break;
            }
        }
        vector<int> ans;
        for(const auto & [i,j]:v){
            for(int k=0;k<i;k++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};