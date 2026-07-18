class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0) return {0};
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int c=0;
            int x=i;
            while(x){
                x&=x-1;
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};