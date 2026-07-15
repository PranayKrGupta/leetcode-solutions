class Solution {
public:
    string compressedString(string word) {
        unordered_set<int> st;
        char p='0';
        string comp="";
        int cnt=0;
        for(char c:word){
            if(p!='0' && st.count(c)==0){
                comp.push_back('0'+cnt);
                comp.push_back(p);
                cnt=0;
                st.clear();
            }
            else if(st.count(c) && cnt==9){
                comp.push_back('0'+cnt);
                comp.push_back(p);
                cnt=0;
                st.clear();
            }
            p=c;
            cnt++;
            st.insert(c);
        }
        if(cnt>0){
                comp.push_back('0'+cnt);
                comp.push_back(p);
        }
        return comp;
    }
};