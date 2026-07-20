class Solution {
public:
    string winningPlayer(int x, int y) {
        int limiting_variable = min(x,y/4);
        if(limiting_variable&1) return "Alice";
        return "Bob";
    }
};