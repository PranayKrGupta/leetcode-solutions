class Solution {
    void insertionSort(vector<int> &arr){
        for(int i=1;i<arr.size();i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]<key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi=0;
        for(int i:nums){
            mp[i]++;
            maxi=max(maxi,mp[i]);
        }
        vector<vector<int>> bucket(maxi+1);
        for(const auto & p:mp){
            for(int i=0;i<p.second;i++){
                bucket[p.second].push_back(p.first);
            }
        }
        for(int i=0;i<=maxi;i++){
            int s=bucket[i].size();
            if(s<20){
                insertionSort(bucket[i]);
            }else{
                sort(bucket[i].begin(),bucket[i].end(),greater<int>());
            }
        }
        vector<int> ans=nums;
        int k=0;
        for(int i=0;i<=maxi;i++){
            for(int j=0;j<bucket[i].size();j++)
            ans[k++]=bucket[i][j];
        }
        return ans;
    }
};