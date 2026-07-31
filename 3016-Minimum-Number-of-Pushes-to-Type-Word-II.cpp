class Solution {
public:
    int minimumPushes(string s) {
        int ans=0;
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<int,char>> v;
        for(const auto &[a,b]:mp){
            v.push_back({b,a});
        }
        sort(v.rbegin(),v.rend());
        int i=0;
        int m=1;
        for(const auto &[a,b]:v){
            if(i==8){
                m++;
                i=0;
            }
            ans+=m*a;
            i++;
        }
        return ans;
    }
};