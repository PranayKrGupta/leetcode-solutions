class Solution {
public:
    long long minimumSteps(string s) {
        // 100011100100
        // 100011100001

        long long c=0;
        int n=s.length();
        int j=n-1;
        long long z=0;

        while(j>=0){
            if(s[j]=='0'){
                z++;
            }else {
                c+=z;
            }
            j--;
        }
        return c;
    }
};