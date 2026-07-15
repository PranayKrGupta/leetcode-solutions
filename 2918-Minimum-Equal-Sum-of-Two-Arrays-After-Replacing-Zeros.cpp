class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        long long zero1=0;
        for(long long i:nums1){
            sum1+=i;
            if(i==0) zero1++;
        }
        long long sum2=0;
        long long zero2=0;
        for(long long i:nums2){
            sum2+=i;
            if(i==0) zero2++;
        }
        sum1+=zero1;
        sum2+=zero2;
        if(sum1<sum2 && zero1==0){
            return -1;
        }
        if(sum1>sum2 && zero2==0)
            return -1;
        return max(sum1,sum2);
    }
};