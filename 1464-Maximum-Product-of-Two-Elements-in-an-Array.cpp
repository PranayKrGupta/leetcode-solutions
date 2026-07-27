class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPro=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    maxPro=max((nums[i]-1)*(nums[j]-1),maxPro);
                }
            }
        }
        return maxPro;
    }
};