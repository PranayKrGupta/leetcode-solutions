class Solution {
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int i:deck){
            mp[i]++;
        }
        vector<int> freq;
        for(const auto &[i,v]:mp){
            freq.push_back(v);
        }
        int GCD=freq[0];
        for(int i:freq){
            if(GCD>i){
                GCD=gcd(GCD,i);
            }else{
                GCD=gcd(i,GCD);
            }
            if(GCD==1) return 0;
        }
        return 1;
    }
};