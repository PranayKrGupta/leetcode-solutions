class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // 8 7 4 2 2 1
        sort(piles.rbegin(),piles.rend());
        int s=0;
        int j=piles.size()-1;
        for(int i=1;i<j;i+=2){
            s+=piles[i];
            j--;
        }
        return s;
    }
};