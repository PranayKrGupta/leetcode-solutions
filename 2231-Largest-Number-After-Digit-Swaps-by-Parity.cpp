class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> e,o;
        string s=to_string(num);
        for(char c:s){
            int i=c-'0';
            if(i%2==0){
                e.push(i);
            }else{
                o.push(i);
            }
        }
        int ans=0;
        for(char c:s){
            int i=c-'0';
            if(i%2==0){
                ans=ans*10+e.top();
                e.pop();
            }else{
                ans=ans*10+o.top();
                o.pop();
            }
        }
        return ans;
    }
};