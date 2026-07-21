class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i:arr){
            q.push(i);
            if(q.size()>k) q.pop();
        }
        return q.top();
    }
};