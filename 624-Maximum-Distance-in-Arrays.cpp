class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int Gmin=arr[0].front();
        int Gmax=arr[0].back();
        int maxDiff=INT_MIN;
        for(int i=1;i<arr.size();i++){
            int potDis1=arr[i].back()-Gmin;
            int potDis2=Gmax-arr[i].front();
            Gmin=min(arr[i].front(),Gmin);
            Gmax=max(arr[i].back(),Gmax);
            maxDiff=max(max(potDis1,potDis2),maxDiff);
        }
        return maxDiff;
    }
};