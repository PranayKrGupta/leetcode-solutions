class Solution {
public:
    string breakPalindrome(string s) {
        int n=s.length();
        if(n==1) return "";
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]=='a'){
                i++;
                j--;
            }else{
                s[i]='a';
                return s;
            }
        }
        s[n-1]='b';
        return s;
    }
};