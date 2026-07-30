class Solution {
public:
    int minCost(string s, vector<int>& arr) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int cursum=0;
            int maxi=0;
            int j=i;
            while(j<n && s[i]==s[j]){
                cursum+=arr[j];
                maxi=max(maxi,arr[j++]);
            }
            sum+=cursum-maxi;
            i=j-1;
        }
        return sum;
    }
};