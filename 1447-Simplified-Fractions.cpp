class Solution {
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        for(int i=2;i<=n;i++){
            string s;
            s.push_back('/');
            s+=(to_string(i));
            for(int j=1;j<i;j++){
                if(gcd(j,i)==1){
                    v.push_back(to_string(j)+s);
                }
            }
        }
            return v;
    }
};