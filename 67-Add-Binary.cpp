class Solution {
public:
    string addBinary(string a, string b) {
        if(a=="0" && b=="0") return "0";
        string ans;
        int cn=0;
        int n=a.length();
        int m=b.length();
        int i=n-1;
        int j=m-1;
        while(i>=0 && j>=0){
            int s=cn;
            if(a[i]=='1') s+=1;
            if(b[j]=='1') s+=1;
            if(s==0) {
                ans.push_back('0');
                cn=0;
            }
            else if(s==1){
                ans.push_back('1');
                cn=0;
            }
            else if(s==2){
                ans.push_back('0');
                cn=1;
            }
            else{
                ans.push_back('1');
                cn=1;
            }
            i--;
            j--;
        }
        while(i>=0){
            int s=cn;
            if(a[i]=='1'){
                s+=1;
            }
            if(s==0) {
                ans.push_back('0');
                cn=0;
            }
            else if(s==1){
                ans.push_back('1');
                cn=0;
            }
            else{
                ans.push_back('0');
                cn=1;
            }
            i--;
        }
        while(j>=0){
            int s=cn;
            if(b[j]=='1'){
                s+=1;
            }
            if(s==0) {
                ans.push_back('0');
                cn=0;
            }
            else if(s==1){
                ans.push_back('1');
                cn=0;
            }
            else{
                ans.push_back('0');
                cn=1;
            }
            j--;
        }
        if(cn==1) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};