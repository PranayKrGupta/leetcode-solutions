class Solution {
public:
    string compressedString(string word) {
        char p='0';
        string comp="";
        int cnt=0;
        for(char c:word){
            if(p!='0' && c!=p){
                comp.push_back('0'+cnt);
                comp.push_back(p);
                cnt=0;
            }
            else if(c==p && cnt==9){
                comp.push_back('0'+cnt);
                comp.push_back(p);
                cnt=0;
            }
            p=c;
            cnt++;
        }
        if(cnt>0){
                comp.push_back('0'+cnt);
                comp.push_back(p);
        }
        return comp;
    }
};