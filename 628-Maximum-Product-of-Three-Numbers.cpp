class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        int max3=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;
        int min3=INT_MAX;
        int max1idx=INT_MIN;
        int max2idx=INT_MIN;
        int max3idx=INT_MIN;
        int min1idx=INT_MAX;
        int min2idx=INT_MAX;
        int min3idx=INT_MAX;
        int x=0;
        for(int i:nums){
            if(i>max1){
                max3=max2;
                max2=max1;
                max1=i;
                max3idx=max2idx;
                max2idx=max1idx;
                max1idx=x;
            }else if(i>max2){
                max3=max2;
                max2=i;
                max3idx=max2idx;
                max2idx=x;
            }else if(i>max3){
                max3=i;
                max3idx=x;
            }
            if(i<min1){
                min3=min2;
                min2=min1;
                min1=i;
                min3idx=min2idx;
                min2idx=min1idx;
                min1idx=x;
            }else if(i<min2){
                min3=min2;
                min2=i;
                min3idx=min2idx;
                min2idx=x;
            }else if(i<min3){
                min3=i;
                min3idx=x;
            }
            x++;
        }
        unordered_set<int> st={min1idx,min2idx,min3idx,max1idx,max2idx,max3idx};
        vector<int> t;
        for(int i:st){
            t.push_back(nums[i]);
        }
        vector<int> arr;
        for(int i=0;i<t.size();i++){
            for(int j=0;j<t.size();j++){
                if(i!=j)
                for(int k=0;k<t.size();k++){
                    if(k!=j && k!=i){
                        arr.push_back(t[i]*t[j]*t[k]);
                    }
                }
            }
        }
        sort(arr.begin(),arr.end());
        return arr.back();
    }
};