class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 1)
        // 1 2 4 7 6 1
        // 1 2 6 1 4 7

        // 2)
        // 4 3 2 1
        // 1 2 3 4
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                int pivot =i-1;
                for(int j=n-1;j>=i;j--){
                    if(nums[j]>nums[pivot]){
                        swap(nums[j],nums[pivot]); break;
                    }
                }
                reverse(nums.begin()+i,nums.end());
                return ;
            }
        }
        reverse(nums.begin(),nums.end());
        return ;
    }
};