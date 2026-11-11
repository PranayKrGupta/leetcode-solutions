class Solution {
    void countSort(vector<int> & arr , int place){
        int count[10]={0};
        for(const int & i:arr){
            int idx = (i/place)%10;
            count[idx]++;
        }
        int n = arr.size();
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];
        }
        vector<int> ans=arr;
        for(int i=n-1;i>=0;i--){
            int idx = (arr[i]/place)%10;
            ans[--count[idx]]=arr[i];
        }
        arr=ans;
    }
    void radixSort(vector<int> &arr){
        int maxi = *max_element(arr.begin(),arr.end());
        for(long i=1;maxi/i>0;i*=10){
            countSort(arr,i);
            
        }
    }
public:
    int maximumGap(vector<int>& nums) {
        radixSort(nums);
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(maxi,nums[i+1]-nums[i]);
        }
        return maxi;
    }
};