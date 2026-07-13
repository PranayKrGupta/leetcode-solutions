class Solution {
    void solve(vector<string> &ans,string &s,const int &n){
        if(s.length()==n){
            ans.push_back(s);
            return;
        }
        if(s.empty()){
           s.push_back('0');
           solve(ans,s,n);
           s.pop_back();
            
           s.push_back('1');
           solve(ans,s,n);
           s.pop_back();
        }else{
            if(s.back()=='1'){
                s.push_back('0');
                solve(ans,s,n);
                s.pop_back();
                    
                s.push_back('1');
                solve(ans,s,n);
                s.pop_back();
            }else{
                s.push_back('1');
                solve(ans,s,n);
                s.pop_back();
            }
        }
    }
public:
    vector<string> validStrings(int n) {
        vector<string> ans;
        string s;
        solve(ans,s,n);
        return ans;
    }
};