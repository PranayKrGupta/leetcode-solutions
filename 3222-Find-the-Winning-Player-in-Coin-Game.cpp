class Solution {
public:
    string winningPlayer(int x, int y) {
        bool f=0;
        while(x>=1 && y>=4){
            x--;
            y-=4;
            f=!f;
        }
        if(f){
            return "Alice";
        }
        return "Bob";
    }
};