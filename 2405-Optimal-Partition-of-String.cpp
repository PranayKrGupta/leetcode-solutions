class Solution {
public:
    int partitionString(string s) {
        unordered_set<int> st;
        int c=1;
        for(int i:s){
            if(!st.empty() && st.count(i)){
                st.clear();
                c++;
            }
            st.insert(i);
        }
        return c;
    }
};