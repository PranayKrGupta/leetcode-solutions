class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        for(long long i:nums){
            while(!st.empty() && st.top()==i){
                i*=2;
                st.pop();
            }
            st.push(i);
        }
        vector<long long> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};