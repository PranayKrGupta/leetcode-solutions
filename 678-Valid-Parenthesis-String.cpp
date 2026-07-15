class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int close=0;
        int star=0;
        for(char c:s){
            if(c=='('){
                open++;
            }
            else if(c=='*') star++;
            else if(c==')') close++;
            if(open+star<close) return false;
        }
        open=0;
        close=0;
        star=0;
        for(int i=s.length()-1;i>=0;i--){
            char c=s[i];
            if(c=='('){
                open++;
            }
            else if(c=='*') star++;
            else if(c==')') close++;
            if(close+star<open) return false;
        }
        return true;
    }
};