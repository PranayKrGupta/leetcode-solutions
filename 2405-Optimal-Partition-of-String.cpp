class Solution {
public:
    int partitionString(string s) {
        vector<int> seen(26,false);
        int c=1;
        for(char i:s){
            if(seen[i-'a']){
                c++;
                fill(seen.begin(),seen.end(),false);
            }
            seen[i-'a']=true;
        }
        return c;
    }
};