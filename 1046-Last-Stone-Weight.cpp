class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i:stones){
            q.push(i);
        }
        int a;
        while(!q.empty()){
            a=q.top();
            q.pop();
            if(!q.empty()){
                int b=q.top();
                q.pop();
                q.push(a-b);
            }
        }
        return a; 
    }
};