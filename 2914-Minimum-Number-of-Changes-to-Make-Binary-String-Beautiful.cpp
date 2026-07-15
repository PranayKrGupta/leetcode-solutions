class Solution {
public:
    int minChanges(string s) {
        int i=0;
        int j=1;
        int c=0;
        while(j<s.length()){
            if(s[i]!=s[j]){
                c++;
            }
            i+=2;
            j+=2;
        }
        return c;
    }
};