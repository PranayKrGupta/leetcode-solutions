class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& arr) {
        int n=*max_element(arr.begin(),arr.end());
        vector<int> freq(n+1);
        for(int i:arr){
            freq[i]++;
        }
        int i=1;
        while(i<=n && mass>=i){
            while(i<=n && freq[i]==0){
                i++;
            }
            if(i>n || i>mass) break;
            mass+=i;
            freq[i]--;
        }
        return i>n;
    }
};