class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int> freq(limit+1);
        for(int w:people){
            freq[w]++;
        }
        int l=1;
        int r=limit;
        int boats=0;
        while(l<=r){
            while(l<=r && freq[l]==0){
                l++;
            }
            while(l<=r && freq[r]==0){
                r--;
            }
            if(l>r) break;
            freq[r]--;
            if(l+r<=limit && freq[l]>0){
                freq[l]--;
            }
            boats++;
        }
        return boats;
    }
};