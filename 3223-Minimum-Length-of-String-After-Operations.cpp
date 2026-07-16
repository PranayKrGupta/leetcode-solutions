class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int sum=0;
        for(const auto & [i,v]:mp){
            if(v<3){
                sum+=v;
            }
            else if(v&1){
                sum++;
            }else{
                sum++;
                sum++;
            }
        }
        return sum;
    }
};