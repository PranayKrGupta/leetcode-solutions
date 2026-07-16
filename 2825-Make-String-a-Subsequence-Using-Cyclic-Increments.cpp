class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0;
        int j=0;
        while(i<str1.length() && j<str2.length()){
            if(str1[i]==str2[j]){
                i++;
                j++;
            }else if((char)((str1[i]-'a'+1)%26+'a')==str2[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }
    return j==str2.length();
    }
};