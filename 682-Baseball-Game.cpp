class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int> st;
        for(string &c:arr){
            if(c[0]=='+'){
                int a=st.top();
                st.pop();
                int b=st.top();
                
                st.push(a);
                st.push(a+b);
            }
            else if(c[0]=='C'){
                st.pop();
            }else if(c[0]=='D'){
                int a=st.top();
                st.push(a*2);
            }else{
                st.push(stoi(c));
            }
        }
        int s=0;
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        return s;
    }
};