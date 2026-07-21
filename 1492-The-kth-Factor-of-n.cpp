class Solution {

public:
    int kthFactor(int n, int k) {
        vector<int> facs;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(n/i==i){
                    facs.push_back(i);
                }else{
                    facs.push_back(i);
                    facs.push_back(n/i);
                }
            }
        }
        sort(facs.begin(),facs.end());
        return k<=facs.size()?facs[k-1]:-1;
    }
};