class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i=0;
        int j=0;
        int maxi=0;
        while(j<s.length()){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            maxi=max((int)st.size(),maxi);
            j++;
        }
        return maxi;
    }
};