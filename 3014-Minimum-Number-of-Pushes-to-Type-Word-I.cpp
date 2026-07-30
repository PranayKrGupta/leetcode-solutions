class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        int i=1;
        int l=word.length();
        while(l>0){
            if(l<8){
                ans+=l*i;
                l=0;
            }else{
                ans+=8*i;
                l-=8;
            }
            i++;
        }
        return ans;
    }
};