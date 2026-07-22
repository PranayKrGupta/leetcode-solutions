class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<31;i++){
            int o=0;
            int z=0;
            for(int j:nums){
                if((1<<i)&j)o++;
                else z++;
            }
            sum+=o*z;
        }
        return sum;
    }
};