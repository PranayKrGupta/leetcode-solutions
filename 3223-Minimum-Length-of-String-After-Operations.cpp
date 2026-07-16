class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        if(n<3){
            return n;
        }
        unordered_map<int,int> mp1,mp2;
        for(int i=1;i<n;i++){
            mp1[s[i]]++;
        }
        mp2[s[0]]++;
        for(int i=1;i<n-1;i++){
            if(mp1[s[i]]>0) {
                if(mp2.find(s[i])!=mp2.end() && mp1[s[i]]>1){
                    mp2[s[i]]--;
                    mp1[s[i]]--;
                }
                mp1[s[i]]--;
                if(mp1[s[i]]>=0){
                    mp2[s[i]]++;
                }
            }
        }
        int sum=0;
        for(const auto &[i,v]:mp1){
            sum+=v;
        }
        for(const auto &[i,v]:mp2){
            sum+=v;
        }
        return sum;
    }
};