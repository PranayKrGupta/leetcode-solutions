class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        for(int i:gifts){
            q.push(i);
        }
        for(int i=0;i<k && !q.empty();i++){
            int a=q.top();
            q.pop();
            if(a>0){
                q.push(sqrt(a));
            }
        }
        long long sum=0;
        while(!q.empty()){
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};