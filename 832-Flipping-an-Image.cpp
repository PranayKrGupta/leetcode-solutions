class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        for(auto &v:arr){
            int i=0;
            int j=v.size()-1;
            while(i<=j){
                if(i!=j)
                v[i]=!v[i];
                v[j]=!v[j];
                swap(v[i],v[j]);
                i++;
                j--;
            }
        }
        return arr;
    }
};