class Solution {
public:
    string smallestPalindrome(string s) {
        int arr[26]={0};
        for(char c:s){
            arr[c-'a']++;
        }
        string ans;
        string t;
        for(int i=0;i<26;i++){
            for(int j=0;j<(arr[i]/2);j++){
                t.push_back('a'+i);
            }
        }
        ans=t;
        if(s.length()&1){
            char odd;
            for(int i=0;i<26;i++){
                if(arr[i]&1){
                    odd='a'+i;
                }
            }
            ans.push_back(odd);
        }
        reverse(t.begin(),t.end());
        ans+=t;
        return ans;
    }
};